//Question:
//Victory
//
//        Arnab is fighting some enemies. The power level of the enemies is a distinct natural number in a range of l
//        to r
//
//        (both inclusive).
//        Arnab can defeat the enemies if he can find the largest number which divides every number in the given range. Help Arnab find the answer.
//        Input format
//
//        First-line contains an integer T
//        where T is the number of test cases.
//        For every Test case :
//        Next line contains two numbers, l and r
//
//
//        Output format
//
//        For every test case print the required answer in a new line.
//        Constraints
//
//        1<=T<=70
//
//        1<=l<=r<=109
//
//        Example
//        Input
//
//        2
//        10 10
//        10 15
//        Output
//
//        10
//        1
//        Explanation
//
//        Greatest number which divides every number from 10
//        to 10 is 10.
//        Greatest number which divides every number from 10 to 15 is 1.

package PrepBytes.IterationStatement;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Victory {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int test_cases = Integer.parseInt(br.readLine());

        while(test_cases-- > 0){
            String range_info = br.readLine();
            String[] range = range_info.split(" ");
            int left = Integer.parseInt(range[0]);
            int right = Integer.parseInt(range[1]);

            if(left == right){
                System.out.println(left);
            }
            else{
                System.out.println(1);
            }
        }
    }
}
