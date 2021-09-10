package DSA.Loops;

import java.util.Scanner;

public class Switch {
    public static void main(String[] args) {
        // == checks the if side A and side B are pointing to the same object
        // equals checks only the value of side A and value of side B

        /*
            SYNTAX FOR SWITCH STATEMENT

            Switch (Expression){
                //cases -
                case one:
                    //do something
                    break;
                case two:
                    //do something
                    break;
                default:
                    //do something
            }

           NOTE:
           1. cases have to same type as expressions, must be a constant or literal
           2. duplicate case values are not allowed
           3. break is used to terminate the sequence
           4. if break is not used, it will continue to next case
           5. default will execute when none of the above case does
           6. if default is not at the end, put break after it.
         */

        Scanner in = new Scanner(System.in);

//        String fruit = in.next();
//        switch (fruit) {
//            case "Mango":
//                System.out.println("King of fruits");
//                break;
//            case "Apple":
//                System.out.println("A sweet red fruit");
//                break;
//            case "Orange":
//                System.out.println("Round fruit");
//                break;
//            case "Grapes":
//                System.out.println("Small fruit");
//                break;
//            default:
//                System.out.println("Please enter a valid fruit !");
//                break;
//        }

        //Enhanced switch statement
        //It by defaults add break statements in its inside mechanism.
//        String fruit = in.next();
//        switch (fruit) {
//            case "Mango" -> System.out.println("King of fruits");
//            case "Apple" -> System.out.println("A sweet red fruit");
//            case "Orange" -> System.out.println("Round fruit");
//            case "Grapes" -> System.out.println("Small fruit");
//            default -> System.out.println("Please enter a valid fruit !");
//        }

        int day = in.nextInt();
//        switch (day){
//            case 1 -> System.out.println("Monday");
//            case 2 -> System.out.println("Tuesday");
//            case 3 -> System.out.println("Wednesday");
//            case 4 -> System.out.println("Thursday");
//            case 5 -> System.out.println("Friday");
//            case 6 -> System.out.println("Saturday");
//            case 7 -> System.out.println("Sunday");
//        }

        //But there are times when we don't want to use break statements.
//        switch (day){
//            case 1:
//            case 2:
//            case 3:
//            case 4:
//                System.out.println("Weekday");
//                break;
//            case 5:
//            case 6:
//            case 7:
//                System.out.println("Weekend");
//                break;
//            default:
//                System.out.println("Enter a valid day!");
//        }

//        switch (day) {
//            case 1, 2, 3, 4 -> System.out.println("Weekday");
//            case 5, 6, 7 -> System.out.println("Weekend");
//            default -> System.out.println("Enter a valid day!");
//        }

    }
}
