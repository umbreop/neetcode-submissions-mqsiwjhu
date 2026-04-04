class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> out;
        for(int i =0; i<nums.size(); i++)
        {
            out[nums[i]]++;

        }
        priority_queue<pair<int,int>> pq;
        for(auto &p: out)
        {
            pq.push({p.second, p.first});
        }
        vector<int>arr;
        while(k!=0){
            arr.push_back(pq.top().second);
            pq.pop();
            k--;
        
        }
        return arr;

        

    }
};
