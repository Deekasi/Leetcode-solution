class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = nums[0];
        int b= nums[n-1];
        while(b%a != 0){
            int rem = b % a;
            b = a;
            a = rem;
        }
        return a;
    }
};