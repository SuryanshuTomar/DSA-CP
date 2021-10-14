package Leetcode.Strings;

public class LeetCode1309   {
    public static void main(String[] args) {
        String inputString = "10#11#12";
        String result = freqAlphabets(inputString);
        System.out.println(result);
    }

    private static String freqAlphabets(String inputString) {
        StringBuilder sb = new StringBuilder();
        char[] ch = inputString.toCharArray();

        for(int i = 0; i < ch.length; i++) {
            sb.append((i+2 < ch.length && ch[i+2] == '#') ?
                (char)(Integer.parseInt(inputString.substring(i, i+=2))+96) :
                    (char)(Character.getNumericValue(ch[i])+96));
        }
        return sb.toString();
    }
}
