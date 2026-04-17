class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        unordered_map<char, int> count;

        for(char c : s){
            count[c]++;
        }

        for(char c : t){
            count[c]--;
            // checking here 
            if(count[c] < 0)
            {
                return false;
            }
        }

        /*for(auto pair : count){
            if(pair.second != 0)
                return false;
        } */

        return true;
    }
};
