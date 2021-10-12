package Leetcode.Strings;

import java.util.Arrays;

public class LeetCode1859 {
    public static void main(String[] args) {
        String inputString = "is2 sentence4 This1 a3";
        String outputString = sortSentence(inputString);
        System.out.println(outputString);
    }

    private static String sortSentence(String inputString) {
        String[] words = new String[inputString.length()/2];
        StringBuilder sb = new StringBuilder();
        for(String temp : inputString.split(" ")){
            char data = temp.charAt(temp.length()-1);
            int index = Character.getNumericValue(data);
            words[index-1] = temp.substring(0, temp.length()-1);
        }
        for(String word : words) {
            if(word != null){
            sb.append(word).append(" ");
            }
        }
        return sb.toString().trim();
    }
}
