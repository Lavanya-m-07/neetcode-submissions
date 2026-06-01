class Solution {
public:

     // Encode
    string encode(vector<string>& strs) {

        string res = "";

        for(string s : strs) {

            res += to_string(s.size()) + "#" + s;
        }

        return res;
    }

    // Decode
    vector<string> decode(string s) {

        vector<string> res;

        int i = 0;

        while(i < s.size()) {

            int j = i;

            // Find '#'
            while(s[j] != '#') {
                j++;
            }

            // Length of current word
            int length = stoi(s.substr(i, j - i));

            // Move after '#'
            j++;

            // Extract word
            string word = s.substr(j, length);

            res.push_back(word);

            // Move to next encoded string
            i = j + length;
        }

        return res;
}
};