package Leetcode.Strings;

public class LeetCode1967 {
    public static void main(String[] args) {
        String[] inputPattern = {"a","abc","bc","d"};
        String inputWord = "abc";
        int result = numOfStrings(inputPattern, inputWord);
        System.out.println(result);
    }

    private static int numOfStrings(String[] inputPattern, String inputWord) {
        int subStringCount = 0;
        for (String s : inputPattern){
            if (inputWord.contains(s))
                subStringCount++;
        }
        return subStringCount;
    }
}
