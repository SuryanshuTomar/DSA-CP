package Leetcode.Strings;


import java.util.Locale;

public class LeetCode125 {
    public static void main(String[] args) {
        String inputString = "A man, a plan, a canal: Panama";
        boolean ans = isPalindrome2(inputString);
        System.out.println(ans);
    }

    // TwoPointer Solution
    private static boolean isPalindrome2(String inputString) {
        int i = 0, j = inputString.length() -1 ;
        while(i <= j){
            char ch1 = Character.toLowerCase(inputString.charAt(i));
            char ch2 = Character.toLowerCase(inputString.charAt(j));
            if(((ch1 >= 'a' && ch1 <= 'z') || (ch1 >= '0' && ch1 <= '9'))) {
                if (((ch2 >= 'a' && ch2 <= 'z') || (ch2 >= '0' && ch2 <= '9'))) {
                    if (ch1 != ch2) {
                        return false;
                    }
                    i++;
                    j--;
                }
                else j--;
            }
            else i++;
        }
        return true;
    }

//  Slow Solution
    private static boolean isPalindrome1(String inputString) {
        char[] ch = inputString.toLowerCase().toCharArray();
        StringBuilder sb1 = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();

        for(char c : ch){
            if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
                sb1.append(c);
                sb2.insert(0, c);
            }
        }
        return sb1.toString().equals(sb2.toString());
    }
}
