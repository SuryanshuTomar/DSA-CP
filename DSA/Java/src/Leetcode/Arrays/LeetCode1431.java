package Leetcode.Arrays;
import java.util.ArrayList;
import java.util.List;

public class LeetCode1431 {
    public static void main(String[] args) {
        int[] candies = {2,3,5,1,3};
        int extraCandies = 3;

        System.out.println(kidsWithCandies(candies, extraCandies));
    }

    private static List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        ArrayList<Boolean> arr = new ArrayList<>();
        int maxCan = Integer.MIN_VALUE;
        for(int cand : candies){
            if(maxCan < cand){
                maxCan = cand;
            }
        }
        for (int cand : candies){
            if(maxCan <= cand + extraCandies){
                arr.add(true);
            }
            else{
                arr.add(false);
            }
        }
    return arr;
    }
}
