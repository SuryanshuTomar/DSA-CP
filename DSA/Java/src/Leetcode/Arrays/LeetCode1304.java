package Leetcode.Arrays;
import java.util.Arrays;

public class LeetCode1304 {
    public static void main(String[] args) {
        int n = 5;
        int[] result = sumZero(n);
        System.out.println(Arrays.toString(result));
    }

    private static int[] sumZero(int n) {
        int[] result = new int[n];
        for(int i=0;i<n/2;++i){
            result[i] = n - i;
            result[n-i-1] = i - n;
        }
        return result;
    }
}
