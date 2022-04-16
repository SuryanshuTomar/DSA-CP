package DSA.Functions;

import java.sql.SQLOutput;
import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        // Function follows the DRY Format - DRY - DoNOT Repeat Yourself.

        /*
            SYNTAX FOR FUNCTIONS
                Access_modifier static/non_Static return_type name()
                {
                    //body
                }
         */
//        sum(); //function calling
        int ans = sum2();
        System.out.println("The sum is : "+ ans);
    }

    //Defining the function and its body.
    static void sum() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter number 1 : ");
        int num1 = in.nextInt();
        System.out.print("Enter number 2 : ");
        int num2 = in.nextInt();
        int add = num2 + num1;
        System.out.println("The sum is : " + add);
    }

    static int sum2(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter number 1 : ");
        int num1 = in.nextInt();
        System.out.print("Enter number 2 : ");
        int num2 = in.nextInt();
        return num2 + num1;
        //return statements are always at the end of the function.
    }
}
