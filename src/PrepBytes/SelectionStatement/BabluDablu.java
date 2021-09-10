//Question: Journey of Bablu and Dablu
//
//        Bablu and Dablu are traveling at train. This time they are traveling without their parents.
//        Bablu wants to know the arrangement of seats inside the train coach.
//        The entire coach could be viewed as an arrangement of consecutive blocks of size 8
//
//        .
//
//        Berth Number   Compartment
//        1 -  8                1
//        9 - 16                2
//        17 - 24               3
//        ... and so on
//        Each of these size-8
//        blocks are further arranged as:
//        1LB,2MB,3UB,4LB,5MB,6UB,7SL,8SU,9LB,10MB,......
//
//
//        Here LB denotes lower berth, MB middle berth, and UB upper berth.
//
//        The following berths are called Train-Partners:
//        7SL |  8SU
//        3UB |  6UB
//        2MB |  5MB
//        1LB |  4LB
//        and the pattern is repeated for every set of 8
//
//        berths.
//        Bablu and Dablu are playing a game of finding the train partner of each berth.
//        But they are not able to find the right partner, they ask for help.
//        Input Format
//
//        The first line of input contains a single integer T
//        , denoting the number of test cases to follow.
//        Each of the next T lines contains a single integer N
//
//        , the berth number whose neighbor is to be found out.
//        Output Format
//
//        The output should contain exactly T
//
//        lines each containing the berth of the neighbor of the corresponding seat.
//        Constraints
//
//        1≤T≤106
//
//        1≤N≤106
//
//        Time Limit
//
//        1
//
//        second
//        Example
//        Input
//
//        4
//        3
//        5
//        1
//        8
//        Output
//
//        6UB
//        2MB
//        4LB
//        7SL

package PrepBytes.SelectionStatement;

import java.util.Scanner;

public class BabluDablu {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int test_case = scan.nextInt();

        while (test_case > 0){
            int berth_number = scan.nextInt();

            switch (berth_number % 8){
                case 1:
                    System.out.println(berth_number + 3 + "LB");
                    break;
                case 2:
                    System.out.println(berth_number + 3 + "MB");
                    break;
                case 3:
                    System.out.println(berth_number + 3 + "UB");
                    break;
                case 4:
                    System.out.println(berth_number - 3 + "LB");
                    break;
                case 5:
                    System.out.println(berth_number - 3 + "MB");
                    break;
                case 6:
                    System.out.println(berth_number - 3 + "UB");
                    break;
                case 7:
                    System.out.println(berth_number + 1 + "SU");
                    break;
                case 0:
                    System.out.println(berth_number - 1 + "SL");
                    break;
            }
            test_case--;
        }
    }
}
