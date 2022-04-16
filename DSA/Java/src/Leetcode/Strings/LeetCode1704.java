package Leetcode.Strings;

import java.util.Arrays;
import java.util.Locale;

public class LeetCode1704 {
    public static void main(String[] args) {
        String inputString = "abcdEFGH";
        boolean result = halvesAreAlike(inputString);
        System.out.println(result);
    }

    private static boolean halvesAreAlike(String inputString) {
        inputString = inputString.toLowerCase();
        int i = 0, j = inputString.length() / 2, count1 = 0, count2 = 0;
        while (j < inputString.length()) {
            char c = inputString.charAt(i), d = inputString.charAt(j);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                count1++;
            if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u')
                count2++;
            i++;j++;
        }
        return count1 == count2;
    }
}
