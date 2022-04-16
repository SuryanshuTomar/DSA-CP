package Leetcode.Strings;

public class LeetCode657 {
    public static void main(String[] args) {
        String inputString = "LDUR";
        boolean result = judgeCircle(inputString);
        System.out.println(result);
    }

    private static boolean judgeCircle(String inputString) {
        int posX = 0, posY = 0;
        for(char ch : inputString.toCharArray()){
            if(ch == 'U'){
                posY++;
            }
            else if(ch == 'D'){
                posY--;
            }
            else if(ch == 'L'){
                posX--;
            }
            else if(ch == 'R'){
                posX++;
            }
        }
        return posX == 0 && posY == 0;
    }
}
