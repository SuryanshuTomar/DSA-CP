package DSA.Arrays;

import java.util.ArrayList;
import java.util.Scanner;

public class MultiArrayList {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        ArrayList <ArrayList<Integer>> list = new ArrayList<>();

        // But First, We have to Initialize the Column ArrayList of the Row ArrayList
        // Basically, Initializing the Arraylist inside the Arraylist.
        for (int i = 0; i <3 ; i++) {
            list.add(new ArrayList<>());
        }

        //Taking Input in Multi-Dimensional ArrayList.
        for (int i = 0; i <3 ; i++) {
            for (int j = 0; j <3 ; j++) {
                list.get(i).add(scan.nextInt());
            }
        }
        // Printing the Multi-Dimensional ArrayList.
        System.out.println(list);

        // Another way of Printing the Multi-Dimensional ArrayList.
        for (int i = 0; i <3 ; i++) {
            for (int j = 0; j <3 ; j++) {
                System.out.print(list.get(i).get(j) + " ");
            }
            System.out.println();
        }

    }
}
