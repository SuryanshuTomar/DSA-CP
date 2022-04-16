package DSA.Arrays;

import java.util.Arrays;

public class ReverseArray {
    public static void main(String[] args) {
        int[] arr = {12, 34, 65, 76, 97, 86, 53, 24, 56};

        reverseArray(arr);
        System.out.println(Arrays.toString(arr));
    }

    // This is reversing the array using Two pointer method.
    // Because we are using two pointers start and end and
    // swapping them until both pointer reach the same index.
    static void reverseArray(int[] arr) {
        int start = 0;
        int end = arr.length-1;

        while(start < end){
            //swapping until last and end index are not same.
            swap(arr, start, end);
            start++;
            end--;
        }
    }

    static void swap(int[] arr, int index1, int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }

}
