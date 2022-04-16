package Leetcode.Arrays;

public class LeetCode1832 {
    public static void main(String[] args) {
        String sentence = "leetcode";
        boolean result = checkIfPangram2(sentence);
        System.out.println(result);
    }
//    Solution 2 -> Fast
    private static boolean checkIfPangram2(String sentence) {
        String checks = "qwertyuioplkjhgfdsazxcvbnm";
        for (int i = 0; i < checks.length(); i++) {
            if (sentence.indexOf(checks.charAt(i)) == -1) {
                return false;
            }
        }
        return true;
    }

//    Solution 1 -> Slow
    private static boolean checkIfPangram1(String sentence) {
        boolean[] ispresent = new boolean[26];
        char[] ch = new char[26];
        for (int i = 0; i < ch.length ; i++) {
            ch[i] = (char)(i + 97);
        }
        for (int i = 0; i < ch.length; i++) {
            for (int k = 0; k < sentence.length() ; k++) {
                if(ch[i] == sentence.charAt(k)) ispresent[i] = true;
            }
        }
        for(boolean b : ispresent){
            if (!b){
                return false;
            }
        }
        return true;
    }
}
