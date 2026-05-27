class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxEle = -1;
        int newMax = 0;
        for(int i = arr.size()-1; i>=0; i--)
        {
            newMax = max(maxEle, arr[i]);
            arr[i] = maxEle;
            maxEle = newMax;
        }
        return arr;
    }
};