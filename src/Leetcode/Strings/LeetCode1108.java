package Leetcode.Strings;

public class LeetCode1108 {
    public static void main(String[] args) {
        String inputIPAddress = "1.1.1.1";
        String result = defangIPaddr(inputIPAddress);
        System.out.println(result);
    }

    private static String defangIPaddr(String address) {
        StringBuilder sb = new StringBuilder();
        for(char ch : address.toCharArray())
        {
            if ((ch == '.')) {
                sb.append("[.]");
            } else {
                sb.append(ch);
            }
        }
        return sb.toString();
    }
}
