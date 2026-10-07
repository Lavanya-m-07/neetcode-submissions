class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> results;
        for (string c : operations)
        {
            if(c == "+")
            {
                int res = results[results.size() - 1] + results[results.size() - 2];
                results.push_back(res);
            }
            else if(c == "C")
            {
                results.pop_back();
            }
            else if(c == "D")
            {
                int prod = results.back() * 2;
                results.push_back(prod);
            }
            else
            {
                results.push_back(stoi(c));
            }
        }
        int totalSum = 0;
        for (int i = 0 ; i < results.size();i++)
        {
            totalSum = totalSum + results[i];
        }
        return totalSum;
    }
};