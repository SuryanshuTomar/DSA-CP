package Leetcode.Arrays;

import java.util.Arrays;

public class LeetCode1480 {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4};
        int[] output = runningSum(nums);
        System.out.println(Arrays.toString(output));
    }

    private static int[] runningSum(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
}
