class Solution {
    public int firstMissingPositive(int[] nums) {
        boolean[] exist = new boolean[100001];
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > 0 && nums[i] <= 100000){
                exist[nums[i]] = true;
            }
        }
        for(int i = 1; i < 100001; i++){
            if(!exist[i]){
                return i;
            }
            if(i == 100000){
                return 100001;
            }
        }
        return 0;
    }
}
