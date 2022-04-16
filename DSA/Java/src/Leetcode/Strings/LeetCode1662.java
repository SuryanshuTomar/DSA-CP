package Leetcode.Strings;

public class LeetCode1662 {
    public static void main(String[] args) {
        String[] word1 = {"ab", "c"};
        String[] word2 = {"a", "bc"};
        boolean ans = arrayStringsAreEqual(word1, word2);
        System.out.println(ans);
    }

    private static boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuilder sb1 = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();
        for(String str : word1){
            sb1.append(str);
        }
        for(String str : word2){
            sb2.append(str);
        }
        return sb2.toString().equals(sb1.toString());
    }
}
