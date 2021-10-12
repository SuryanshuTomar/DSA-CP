package Leetcode.Strings;

public class LeetCode709 {
    public static void main(String[] args) {
        String s = "Hello";
        String outputString = toLowerCase(s);
        System.out.println(outputString);
    }

    private static String toLowerCase(String s) {
        StringBuilder sb = new StringBuilder();
        for(char c : s.toCharArray()){
            if(c >= 65 && c <=95){
                sb.append((char) (c + 32));
            }
            else{
                sb.append(c);
            }
        }
        return sb.toString();
    }
}
