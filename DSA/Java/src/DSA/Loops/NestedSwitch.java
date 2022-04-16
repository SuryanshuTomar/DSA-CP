package DSA.Loops;

import java.util.Scanner;

public class NestedSwitch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int empID = in.nextInt();
        String department = in.next();

//        switch (empID){
//            case 1:
//                System.out.println("Death Slayer");
//                break;
//            case 2:
//                System.out.println("Kunal Kushwaha");
//                break;
//            case 3:
//                System.out.println("Community Classroom");
//                switch (department){
//                    case "DSA":
//                        System.out.println("Ongoing with a superb pace");
//                        break;
//                    case "Devops":
//                        System.out.println("Will start after DSA");
//                        break;
//                    default:
//                        System.out.println("No such department yet!");
//                }
//                break;
//            default:
//                System.out.println("Enter valid Id!");
//        }

        switch (empID) {
            case 1 -> System.out.println("Death Slayer");
            case 2 -> System.out.println("Kunal Kushwaha");
            case 3 -> {
                System.out.println("Community Classroom");
                switch (department) {
                    case "DSA" -> System.out.println("Ongoing with a superb pace");
                    case "Devops" -> System.out.println("Will start after DSA");
                    default -> System.out.println("No such department yet!");
                }
            }
            default -> System.out.println("Enter valid Id!");
        }
    }
}
