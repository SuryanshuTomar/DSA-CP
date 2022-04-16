package Leetcode.Strings;

public class LeetCode557 {
    public static void main(String[] args) {
        String inputString = "Let's take LeetCode contest";
        String resultString = reverseWords(inputString);
        System.out.println(resultString);
    }

    private static String reverseWords(String inputString){
       char[] ch = inputString.toCharArray();
       int leftPtr, rightPtr;

        for (int i = 0; i < ch.length ; i++) {
            leftPtr = i;
            while(i < ch.length && ch[i] != ' '){
                i++;
            }
            rightPtr = i - 1;

            while(leftPtr < rightPtr){
                char temp = ch[leftPtr];
                ch[leftPtr] = ch[rightPtr];
                ch[rightPtr] = temp;
                leftPtr++;
                rightPtr--;
            }
        }
        return new String(ch);
    }
}
