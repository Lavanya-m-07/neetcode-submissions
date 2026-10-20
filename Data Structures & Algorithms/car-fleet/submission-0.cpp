class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)
    {
        vector<pair<int,int>> carPair;
        for ( int i = 0 ; i < position.size() ; i++)
        {
            carPair.push_back({position[i],speed[i]});
        }
        sort(carPair.rbegin(),carPair.rend());
        stack<double> results;

        for(auto& p : carPair)
        {
            results.push((double)(target-p.first)/p.second);

            if(results.size() >= 2)
            {
                double current = results.top();
                results.pop();
                if (current > results.top()) {
                    results.push(current);
                }
            }
        }

        return results.size();


    }
};
