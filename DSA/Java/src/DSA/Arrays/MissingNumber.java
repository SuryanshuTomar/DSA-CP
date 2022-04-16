package DSA.Arrays;

import java.util.Scanner;

public class MissingNumber {
    public static void main(String[] args) {



        /*
            Optimised Approach : Using the Summation theory
                1. We have to find the missing number between 1 to n natural number,
                    so summation of n natural number is total = (n * (n+1)) / 2;
                2. And we have the input of integers in an array which has one missing number
                    from 1 to n natural number.
                        sum = sum of all the input integers in array.
                3. So we can find the missing number by-
                    missingNumber = total - sum;
         */

        Scanner scan = new Scanner(System.in);
        int test_cases = scan.nextInt();

        while(test_cases-- > 0){
            int naturalNumber = scan.nextInt();
            int[] arr = new int[naturalNumber-1];
            long total = ((long)naturalNumber * (naturalNumber + 1)) / 2;
            long sum = 0;

            for (int i = 0; i < arr.length ; i++) {
                arr[i] = scan.nextInt();
                sum = sum + arr[i];
            }

            long missingNumber = total - sum;
            System.out.println(missingNumber);
        }
    }
}
