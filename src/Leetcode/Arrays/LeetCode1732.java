package Leetcode.Arrays;

public class LeetCode1732 {
    public static void main(String[] args) {
        int[] altitudeGain = {0,-4,-7,-9,-10,-6,-3,-1};
        int highestGain = largestAltitude(altitudeGain);
        System.out.println(highestGain);
    }

    private static int largestAltitude(int[] gain) {
        int highestGainTillNow = 0, gainSum = 0;
        for(int i : gain){
            gainSum += i;
            if(highestGainTillNow < gainSum){
                highestGainTillNow = gainSum;
            }
        }
        return highestGainTillNow;
    }
}
