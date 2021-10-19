package Leetcode.Arrays;

import java.util.*;

public class LeetCode1 {
    public static void main(String[] args) {
        int[] nums = {3,2,4};
        int target = 6;
        int[] output = twoSum2(nums, target);
        System.out.println(Arrays.toString(output));
    }


    private static int[] twoSum2(int[] nums, int target) {
        List<Integer> list = Arrays.stream(nums).boxed().toList();
        for (int i = 0; i < nums.length ; i++) {
            var difference = target - nums[i];
            if(list.contains(difference))
                return new int[]{list.indexOf(difference), i};
        }
        return new int[]{};
    }

    private static int[] twoSum(int[] nums, int target) {
        int[] index = new int[2];
        for (int i = 0; i < nums.length ; i++) {
            for (int j =  i + 1; j < nums.length  ; j++) {
                if (nums[i] + nums[j] == target){
                    index[0] = i;
                    index[1] = j;
                }
            }
        }
        return index;
     }
}
