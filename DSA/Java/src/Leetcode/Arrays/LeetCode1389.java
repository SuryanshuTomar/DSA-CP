package Leetcode.Arrays;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class LeetCode1389 {
    public static void main(String[] args) {
        int[] nums = {0,1,2,3,4};
        int[] index = {0,1,2,2,1};
        int[] result = createTargetArray(nums, index);
        System.out.println(Arrays.toString(result));
    }

    private static int[] createTargetArray(int[] nums, int[] index) {
        List<Integer> arr = new ArrayList<>(nums.length);
        for (int i = 0; i < nums.length; i++) {
            arr.add(index[i], nums[i]);
        }
        int[] result = new int[arr.size()];
        for (int i = 0; i < nums.length; i++) {
            result[i] = arr.get(i);
        }
        return result;
    }
}
