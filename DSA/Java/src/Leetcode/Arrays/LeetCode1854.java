package Leetcode.Arrays;

public class LeetCode1854 {
    public static void main(String[] args) {
        int [][] logs = {{1993,1999},{2000,2010}};
        int output = maximumPopulation(logs);
        System.out.println(output);
    }

    private static int maximumPopulation(int[][] logs) {
        int [] popl = new int[101];

        for(int i = 0; i<logs.length; i++){
            popl[logs[i][0] - 1950]++;
            popl[logs[i][1] - 1950]--;
        }
        for(int i = 1; i<101; i++){
            popl[i] += popl[i-1];
        }

        int maxVal = 0;
        int maxYear = 1950;
        for(int i = 0; i<101; i++){
            if(maxVal<popl[i]){
                maxVal = popl[i];
                maxYear = i + 1950;
            }
        }
        return maxYear;
    }
}
