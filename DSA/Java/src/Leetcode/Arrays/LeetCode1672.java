package Leetcode.Arrays;

import java.util.Arrays;

public class LeetCode1672 {
    public static void main(String[] args) {
        int[][] nums = {{1,5},{7,3},{3,5}};
        int output = maximumWealth(nums);
        System.out.println(output);
    }

    private static int maximumWealth(int[][] accounts) {
        int maxWealth = Integer.MIN_VALUE;
        for (int[] wealth : accounts){
            int sum = 0;
            for (int j : wealth) {
                sum += j;
            }
            if(maxWealth < sum) maxWealth = sum;
        }
        return maxWealth;
    }
}
