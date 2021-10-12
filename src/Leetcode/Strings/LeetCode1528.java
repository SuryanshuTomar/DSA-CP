package Leetcode.Strings;

import java.util.Arrays;

public class LeetCode1528 {
    public static void main(String[] args) {
        String inputString =  "aiohn";
        int[] inputArray = {3,1,4,2,0};
        String result = restoreString(inputString, inputArray);
        System.out.println(result);
    }

    private static String restoreString(String s, int[] indices) {
        char[] charArr = new char[indices.length];
        for(int i=0; i< indices.length; i++){
            charArr[indices[i]] = s.charAt(i);
        }
        return new String(charArr);
    }
}
