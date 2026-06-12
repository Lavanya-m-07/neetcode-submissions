class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> window;
        int left = 0 ;
        int maxFeq = 0;
        int ans = 0 ;
        for( int right = 0 ; right < s.size(); right ++)
        {
            window[s[right]]++;
            maxFeq = max(maxFeq,window[s[right]]);

            while(right-left+1-maxFeq > k)
            {
                window[s[left]]--;
                left++;
            }

            ans = max(ans, right-left+1);

        }

        return ans;
    }
};
