package DSA.Arrays;
import java.util.Arrays;

public class InsertElement {
    public static void main(String[] args) {
        int[] arr =  { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int arrLength = arr.length;
        int position = 4;
        int element = 88;


        System.out.println(Arrays.toString(arr));

        //Note:  TC: O(n) and AS: 0(1);
        insertElementInArray(arr, arrLength, position, element);
    }

    static void insertElementInArray(int[] arr, int arrLength, int position, int element) {
        int[] newarr = new int[arrLength+1];
        int index = position-1;

        for (int i = 0; i < arrLength; i++) {
            newarr[i] = arr[i];
        }

        for (int i = arrLength - 1; i >= index ; i--) {
            newarr[i + 1] = newarr[i];
        }

        newarr[index] = element;

        System.out.println(Arrays.toString(newarr));
    }
}

/*
    Note:
        Search: O(n) for unsorted array
                (logn) for sorted array

        Get the ith element = O(1)
        update the ith element = O(1)
        Also insert at the end and delete from the end can be done in O(1) time.
 */

