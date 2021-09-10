package DSA.Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] arr = new int[5];
//        arr[0] = 12;
//        arr[1] = 17;
//        arr[2] = 16;
//        arr[3] = 15;
//        arr[4] = 14;

        // input using the for loops
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scan.nextInt();
        }

        // printing the array using enhanced for loop.
        for (int j : arr) { // for every element in array, print the element
            System.out.print(j + " "); // here j represents element of the array
            System.out.println(); // next line
        }

        // Another method to print the Array
        System.out.println(Arrays.toString(arr));

        //arrays of Non-primitives
        String[] str = new String[4];
        for (int i = 0; i < str.length; i++) {
            str[i] = scan.nextLine();
        }

        //printing the string array
        System.out.println(Arrays.toString(str));

    }
}
