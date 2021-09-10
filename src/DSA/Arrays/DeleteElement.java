package DSA.Arrays;

import java.util.Arrays;

public class DeleteElement {
    public static void main(String[] args) {
        int[] arr =  { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int arrLength = arr.length;
        int position = 5;

        // TC: O(n)
        deleteElementInArray(arr, arrLength, position);
    }

    private static void deleteElementInArray(int[] arr, int arrLength, int position) {
        if(position < 0 || position > arrLength){
            System.out.println("No such Element Exist");
        }

        int index = position - 1;

        for (int i = index; i < arrLength - 1 ; i++) {
            arr[i] = arr[i+1];
        }

        System.out.println(Arrays.toString(arr));
    }
}
