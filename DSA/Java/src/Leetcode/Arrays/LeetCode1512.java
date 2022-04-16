package Leetcode.Arrays;

public class LeetCode1512 {
    public static void main(String[] args) {
        int[] nums = {1,1,1,1};
        int output = numIdenticalPairs(nums);
        System.out.println(output);
    }

    private static int numIdenticalPairs(int[] nums) {
        int ouput = 0;
        for (int i = 0; i < nums.length ; i++) {
            for (int j = 0; j < nums.length ; j++) {
                if (i < j && nums[i] == nums[j]){
                    ouput++;
                }
            }
        }
        return ouput;
    }
}
