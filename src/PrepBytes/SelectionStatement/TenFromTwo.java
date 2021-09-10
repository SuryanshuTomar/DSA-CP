//Question:
//        OMG! You made up to this question, Congrats for that! Let us solve a fun maths question now. Just do the simple calculation behind it and you are done. You are given a number n and you are asked to make n divisible by 10. The only operation you can do on n is to multiply n by 2.
//        Given n find out how many operations are required to make n divisible by 10
//
//        .
//        Input format
//
//        First-line contains an integer T
//        , denoting number of test cases.
//        Then follows T test cases. Each test case consists of a single variable n
//
//        .
//        Output format
//
//        Print T
//        values. Each line will print number of operations(0 or more) if it is possible to make n divisible by 10 else print −1
//
//        .
//        Constraints
//
//        1<=T<=5
//
//        1<=N<50
//
//        Time Limit
//
//        1
//
//        second
//        Example
//        Input:
//
//        2
//
//        10
//        25
//
//        Output:
//
//        0
//
//        1
//
//        Sample Test case Explanation
//
//        In the first test case, n=10
//        is already divisible by 10 so the number of operations performed =0.
//        In the second test case, n=25 will be divisible by 10 after multiplying n by 2 once. 25∗2=50 and 50 is divisible by 10.

package PrepBytes.SelectionStatement;

import java.util.Scanner;

public class TenFromTwo {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int test_cases = scan.nextInt();

        while(test_cases-- > 0){
            int number = scan.nextInt();
            int count = 0;

            if(number % 10 == 0){
                System.out.println(count);
            }
            else if(number % 5 == 0){
                while (number % 10 != 0){
                    count++;
                    number *= 2;
                }
                System.out.println(count);
            }
            else{
                count = -1;
                System.out.println(count);
            }
        }
    }
}
