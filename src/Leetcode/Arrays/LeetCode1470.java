package Leetcode.Arrays;

import java.util.Arrays;

public class LeetCode1470 {
    public static void main(String[] args) {
        int[] nums = {2,5,1,3,4,7};
        int n = 3;
        int[] output = shuffle(nums, n);
        System.out.println(Arrays.toString(output));
    }

    private static int[] shuffle(int[] nums, int n) {
        int[] output = new int[nums.length];
        int start = 0, mid = n;
        for (int i = 0; i < nums.length; i+=2) {
            output[i] = nums[start];
            start++;
            output[i + 1] = nums[mid];
            mid++;
        }
        return output;
    }
}
