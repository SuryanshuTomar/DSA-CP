package Leetcode.Arrays;

import java.util.Arrays;

public class LeetCode1920 {
    public static void main(String[] args) {
        int[] nums= {0,2,1,5,3,4};
        int[] result = buildArray(nums);
        System.out.println(Arrays.toString(result));
    }

//    Formula c= a+(b%n)*n
//    : such that n >(a,b)
//    We can store 2 elements in one place using this formula
//    SC -> O(1) but slower solution
//    private static int[] buildArray(int[] nums) {
//        for (int i = 0; i < nums.length ; i++) {
//            nums[i]= nums[i] + (nums[nums[i]] % 1000) * 1000;
//        }
//        for (int i = 0; i <  nums.length; i++) {
//            nums[i] = nums[i] / 1000;
//        }
//
//        return nums;
//    }

    //SC -> O(n) but faster solution
    private static int[] buildArray(int[] nums) {
        int[] newNums = new int[nums.length];
        for (int i = 0; i < nums.length ; i++) {
            newNums[i] = nums[nums[i]];
        }
        return newNums;
    }
}
