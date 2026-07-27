class Solution {
    public int maxProduct(int[] nums) {
        int firstMax = Integer.MIN_VALUE, n = nums.length;
        int secondMax = Integer.MIN_VALUE;
        for(int i = 0; i < n; i++){

            if(nums[i] >= firstMax){
                secondMax = firstMax;
                firstMax = nums[i];
            }
            else if(nums[i] > secondMax){
                secondMax = nums[i];
            }

        }
        return (firstMax - 1) * (secondMax - 1) ;
    }
}