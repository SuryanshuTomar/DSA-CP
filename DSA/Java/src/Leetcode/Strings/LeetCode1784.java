package Leetcode.Strings;

public class LeetCode1784 {
    public static void main(String[] args) {
        String inputString = "1001";
        boolean result = checkOnesSegment(inputString);
    }

    private static boolean checkOnesSegment(String s) {
        int zeroIndex = s.indexOf('0');
        if(zeroIndex == -1) return true;
        int len = s.length();
        zeroIndex = zeroIndex + 1;
        for(int i = zeroIndex; i < len ; i++) {
            if(s.charAt(i) == '1') return false;
        }
        return true;
    }
}
