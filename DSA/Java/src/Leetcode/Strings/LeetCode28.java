package Leetcode.Strings;

public class LeetCode28 {
    public static void main(String[] args) {
        String haystack = "hello";
        String needle = "ll";
        int indexResult = strStr(haystack, needle);
        System.out.println(indexResult);
    }

    private static int strStr(String haystack, String needle) {
        int nL = needle.length();
        if (nL == 0) return 0;
        int hL = haystack.length();
        if (hL == 0 || hL < nL) return -1;

        char[] hArr = haystack.toCharArray();
        char[] nArr = needle.toCharArray();

        for (int i=0; i <= hL-nL; i++) {
            int j = 0;
            // start one-by-one character comparison only if first and last characters of sliding window
            // match the needle's first and last characters - it improves performance a lot!
            if (hArr[i] == nArr[j] && hArr[i + nL - 1] == nArr[nL - 1]) {
                j++; // as we already checked the first character
                while (j < nL && hArr[i + j] == nArr[j]) {
                    j++;
                }
                if (j == nL) return i;
            }
        }
        return -1;
    }
}
