class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(string s: arr)
        {
            mp[s]++;
        }
        int count = 0;
        for(string st:arr)
        {
            if(mp[st]==1)
             count++;
            if(count==k)
             return st;
             
        }
        return "";
    }
};