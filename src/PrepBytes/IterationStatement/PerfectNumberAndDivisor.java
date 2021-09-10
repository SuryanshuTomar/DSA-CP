package PrepBytes.IterationStatement;

import java.util.Scanner;

public class PerfectNumberAndDivisor {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int test_cases = scan.nextInt();

        while(test_cases-- > 0){
            int sum = 0;
            boolean ans;
            int number = scan.nextInt();

            for (int i = 1; i < number; i++) {
                if(number % i == 0){
                    sum += i;
                }
            }
            if(sum == number){
                ans = true;
                System.out.println(ans);
            }
            else{
                ans = false;
                System.out.println(ans);
            }
        }
    }
}
