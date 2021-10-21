package Leetcode.Arrays;

public class LeetCode53 {
    public static void main(String[] args) {
        int[] nums = {-2,1,-3,4,-1,2,1,-5,4};
        int output = maxSubArray(nums);
        System.out.println(output);
    }

    private static int maxSubArray(int[] nums) {
        int ans = nums[0];
        int cur_sum=0;

        for(int i=0;i<nums.length;i++){
            if (cur_sum<0) cur_sum=0;

            cur_sum+=nums[i];
            if(cur_sum>ans) ans=cur_sum;
        }
        return ans;
    }
}
