class Solution {
public:
    int arraySign(vector<int>& nums) {

        if(count(nums.begin(),nums.end(),0)){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int count=0;
        for(int i=0;i<size;i++){
            if(nums[i]<0){
                count++;
            }
            else{
                break;
            }
        }
        if(count%2==0){
            return 1;
        }
        return -1;
    }
};
