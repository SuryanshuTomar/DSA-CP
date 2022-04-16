package Leetcode.Arrays;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class LeetCode989 {
    public static void main(String[] args) {
        int [] num = {1,2,0,0};
        int k = 34;
        List<Integer> nums = Arrays.stream(num).boxed().toList();
        System.out.println(addToArrayForm(nums, k));
    }

    private static List<Integer> addToArrayForm(List<Integer> nums, int k) {
        List<Integer> ans = new ArrayList<>();
        int value;
        for(int i=nums.size()-1 ; i>=0 ; i--){
            value = nums.get(i) + k%10;
            ans.add(0,value % 10) ;
            k /= 10 ;
            k += value/10 ;
        }
        while(k > 0){
            ans.add(0, k%10);
            k /= 10 ;
        }
        return ans;
    }
}
