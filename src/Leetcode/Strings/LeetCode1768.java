package Leetcode.Strings;

public class LeetCode1768 {
    public static void main(String[] args) {
        String word1 = "ab";
        String word2 = "pqrs";
        String ans = mergeAlternately(word1, word2);
        System.out.println(ans);
    }

    private static String mergeAlternately(String word1, String word2) {
        StringBuilder sb = new StringBuilder();
        int len1 = word1.length();
        int len2 = word2.length();

        for (int i = 0; i < Math.max(len1, len2) ; i++) {
            if (i < len1) sb.append(word1.charAt(i));
            if (i < len2) sb.append(word2.charAt(i));
        }
        return sb.toString();
    }
}
