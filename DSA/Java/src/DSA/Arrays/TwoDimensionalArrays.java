package DSA.Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class TwoDimensionalArrays {
    public static void main(String[] args) {
        /*
            2D Arrays can be visualized as a matrix like -
                1 2 3
                4 5 6
                7 8 9
            This is matrix of 3 by 3 size.

            SYNTAX:
                int[][] variable_name = new int[row_size][column_size];

            Note: Basically it's an array of arrays.
        */

        // Conventional Method of declaring and initializing a 2-D Array-
        int[][] cArr = new int[3][];
        // Here, defining the size of the column is not mandatory because column in the
        // 2D array can of different sizes.

        //Direct declaring and initializing a 2-D Array-
        int[][] arr0 = {
                {1, 2, 3},    // 0th index
                {4, 5},       // 1st index
                {6, 7, 8, 9}  // 2nd index -> arr[2] = {6, 7, 8, 9}
        };

        Scanner scan = new Scanner(System.in);
        int[][] arr = new int[3][3];
        System.out.println(arr.length);  // Will print no. of rows

        // Taking the input of the 2D array
        for (int row = 0; row < arr.length; row++) {
            // for every column in each row
            for (int col = 0; col < arr[row].length; col++) {
                arr[row][col] = scan.nextInt();
            }

        }

        //printing the 2D array
        for (int row = 0; row < arr.length; row++) {
            // for every column in each row
            for (int col = 0; col < arr[row].length; col++) {
                System.out.print(arr[row][col] + " ");
            }
            System.out.println();
        }
        System.out.println();

        //Printing the 2D array using enhanced for loop
        for (int[] ints : arr) {
            // for every column in each row
            for (int anInt : ints) {
                System.out.print(anInt + " ");
            }
            System.out.println();
        }
        System.out.println();

        //Printing the 2D array using to string
        for (int[] ints : arr) {
            // for every column in each row
            System.out.println(Arrays.toString(ints));
        }
    }
}
