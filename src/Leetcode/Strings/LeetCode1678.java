package Leetcode.Strings;

public class LeetCode1678 {
    public static void main(String[] args) {
        String command =  "G()()()()(al)sdfg";
        String result = goalParser(command);
        System.out.println(result);
    }

    private static String goalParser(String command) {
        StringBuilder sb = new StringBuilder();
        int i = 0;

        while(i < command.length()) {
            if(command.charAt(i) == 'G') {
                sb.append('G');
                i++;
            } else if(command.charAt(i) == '(' && command.charAt(i+1) == ')') {
                sb.append('o');
                i += 2;
            } else if(command.charAt(i) == '(' &&
                    command.charAt(i+1) == 'a' && command.charAt(i+2) == 'l' && command.charAt(i+3) == ')'){
                sb.append("al");
                i += 4;
            }
            else{
                i++;
            }
        }

        return sb.toString();
//        return (command.replace("()","o").replace("(al)","al")); => Solution - 2 with same Timings
    }
}
