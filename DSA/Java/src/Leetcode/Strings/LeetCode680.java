package Leetcode.Strings;

public class LeetCode680 {
    public static void main(String[] args) {
        String inStr = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
        boolean ans = isPalindrome(inStr);
        System.out.println(ans);
    }

    private static boolean isPalindrome(String inStr) {
        return isPalindrome(inStr, 0, inStr.length() - 1, false);
    }

    private static boolean isPalindrome(String s, int leftIndex, int rightIndex, boolean isCharacterDeleted){
        while(leftIndex <= rightIndex){
            if(s.charAt(leftIndex) != s.charAt(rightIndex)){
                if(isCharacterDeleted){
                    return false;
                }

                // isPalindrome(s, leftIndex + 1, rightIndex, true) for cases like "ececabbacec"
                // isPalindrome(s, leftIndex, rightIndex - 1, true) for cases like "abccbab"
                return isPalindrome(s, leftIndex + 1, rightIndex, true) ||
                        isPalindrome(s, leftIndex, rightIndex - 1, true);
            }
            leftIndex++;
            rightIndex--;
        }
        return true;
    }
}
