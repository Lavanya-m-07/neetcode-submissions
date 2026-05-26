class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        unordered_set<string> st;

        for(string email : emails)
        {
            int atPos = email.find('@');

            string local = email.substr(0, atPos);
            string domain = email.substr(atPos);

            string cleaned = "";

            for(char c : local)
            {
                if(c == '+')
                    break;

                if(c != '.')
                    cleaned += c;
            }

            st.insert(cleaned + domain);
        }

        return st.size();
        
    }
};