package Leetcode.Strings;

public class LeetCode1668 {
    public static void main(String[] args) {
        String sequence = "ababc";
        String word = "ab";
        int output = maxRepeating(sequence, word);
        System.out.println(output);
    }

    private static int maxRepeating(String sequence, String word) {
        StringBuilder str = new StringBuilder(word);
        int count = 0;
        boolean isTrue = true;
        while (isTrue)
        {
            if(sequence.contains(str.toString()))
            {
                count++;
                str.append(word);
            }
            else{
                isTrue = false;
            }
        }
        return count;
    }
}
