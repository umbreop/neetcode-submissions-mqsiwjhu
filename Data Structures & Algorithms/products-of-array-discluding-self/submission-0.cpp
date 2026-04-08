class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output;
        for(int i=0;i<nums.size(); i++){
            int p=0;
            int s=i+1;
            int prod=1;
            while(p<i){
                prod= prod*nums[p];
                p++;
            }
            while(s<nums.size()){
                prod =prod*nums[s];
                s++;
            }
            output.push_back(prod);



        }

        return output;
    }
};
