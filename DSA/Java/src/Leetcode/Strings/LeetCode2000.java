package Leetcode.Strings;

public class LeetCode2000 {
    public static void main(String[] args) {
        String word = "abcd";
        char ch = 'z';
        String ans = reversePrefix(word, ch);
        System.out.println(ans);
    }

    private static String reversePrefix(String word, char ch) {
        StringBuilder sb = new StringBuilder();
        int reverseTillIndex = word.indexOf(ch);

        for (int j = 0; j < word.length() ; j++) {
            if (j <= reverseTillIndex){
                sb.append(word.charAt(reverseTillIndex - j));
            }
            else{
                sb.append(word.charAt(j));
            }
        }
        return sb.toString();
    }
}
