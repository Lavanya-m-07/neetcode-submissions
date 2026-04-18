class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
    int maxRight = -1;  // last element becomes -1

    for (int i = n - 1; i >= 0; i--) {
        int newMax = max(maxRight, arr[i]);
        arr[i] = maxRight;
        maxRight = newMax;
    }

    return arr;
        
        
    }
};