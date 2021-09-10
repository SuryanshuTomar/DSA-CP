package DSA.Functions;

import java.util.Scanner;

public class ArmstrongPrint {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
//        int n = scan.nextInt();

        for (int i = 100; i < 1000; i++) {
            if (isArmstrong(i)){
                System.out.println(i);
            }
        }
    }

    static boolean isArmstrong(int n){
        int originalNumber = n;
        int sum = 0;

        while(n > 0){
            int rem = n % 10;
            n = n / 10;
            sum += rem * rem * rem;
        }
        return originalNumber == sum;
    }
}
