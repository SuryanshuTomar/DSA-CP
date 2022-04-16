package DSA.Arrays;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListBasic {
    public static void main(String[] args) {
        /*
            SYNTAX:
                ArrayList <DataType > variable_name = new ArrayList();

          */

        ArrayList <Integer> list = new ArrayList<>(4);
        // ArrayList are arrays of dynamic size. So we can add as many elements to the array.

        //Adding the elements to the list Arraylist.
        list.add(123);
        list.add(459);
        list.add(765);
        list.add(246);
        list.add(45);
        list.add(34);
        list.add(54);
        list.add(234);

//        //Printing ArrayList
//        System.out.println(list);
//
//        // print the size of ArrayList.
//        System.out.println(list.size());
//
//        // returns boolean if an element is present in the arraylist or not.
//        System.out.println(list.contains(24534));
//
//        // if you want to replace the value of a particular index.
//        list.set(0, 99);
//        System.out.println(list);
//
//        // if you want to remove the value of a particular index.
//        list.remove(4);
//        System.out.println(list);

        Scanner scan = new Scanner(System.in);

        // Taking the input
        for (int i = 0; i <5  ; i++) {
            list.add(scan.nextInt());
        }

        // Printing the ArrayList or getting item at index values.
        for (int i = 0; i <5  ; i++) {
            // passing the index like this, list[index] syntax will not work here.
            System.out.println(list.get(i));
        }

        /*
            NOTE:
                1. In reality, Size of Arraylist is fixed internally.
                2. But whenever, ArrayList fills up to a certain amount, a new arraylist is created,
                    which is double (in size) and old elements are copied into the new arrayList and
                    old one will be deleted.
         */
    }
}
