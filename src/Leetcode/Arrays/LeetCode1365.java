package Leetcode.Arrays;

import java.util.Arrays;

public class LeetCode1365 {
    public static void main(String[] args) {
        int[] nums = {8,1,2,2,3};
        int[] output = smallerNumbersThanCurrent(nums);
        System.out.println(Arrays.toString(output));
    }

    private static int[] smallerNumbersThanCurrent(int[] nums) {
        int[] record = new int[101];
        for (int num : nums) {
            record[num]++;
        }
        int count = 0;
        for (int i = 0; i < record.length; i++) {
            int temp = record[i];
            record[i] = count;
            count += temp;
        }
        int[] res = new int[nums.length];
        for (int i = 0; i < res.length; i++) {
            res[i] = record[nums[i]];
        }
        return res;
    }
}
