package Leetcode.Arrays;

import java.util.Arrays;

public class LeetCode1929 {
    public static void main(String[] args) {
        int[] nums = {1, 2, 1};
        int[] output = getConcatenation(nums);
        System.out.println(Arrays.toString(output));
    }

    private static int[] getConcatenation(int[] nums) {
        int[] num = new int[2 * nums.length];
        int j = nums.length;
        for (int i = 0; i < nums.length; i++) {
            num[i] = nums[i];
            num[j + i] = nums[i];
        }
        return num;
    }
}
