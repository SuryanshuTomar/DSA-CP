package Leetcode.Arrays;

import java.lang.reflect.Array;
import java.util.Arrays;

public class LeetCode1295 {
    public static void main(String[] args) {
        int[] nums = {555,901,482,1771};
        int output = findEvenDigits2(nums);
        System.out.println(output);
    }

// Approach 1 -> faster
    private static int findEvenDigits2(int[] nums) {
        int count=0;
        for (int num : nums) {
            // log10 of any number with give the count of digits of any number.
            if (Math.floor(Math.log10(num) % 2) != 0) {
                count++;
            }
        }
        return count;
    }

// Approrach 2 -> Slower but simple
//    private static int findEvenDigits(int[] nums) {
//        int[] arr = new int[nums.length];
//        int count = 0;
//        for (int i = 0; i < nums.length ; i++) {
//            int n = nums[i];
//            count = 0;
//            while(n > 0){
//                n /= 10;
//                count++;
//            }
//            arr[i] = count;
//        }
//        count = 0;
//        for (int j : arr) {
//            if ((j & 1) == 0) count++;
//        }
//        return count;
//    }
}
