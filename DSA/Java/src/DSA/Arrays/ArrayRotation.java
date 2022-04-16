package DSA.Arrays;

public class ArrayRotation {
    public static void main(String[] args) {
        /*
        LEFT ROTATION:
        Approach 1: Using a Temp arr
            1. d places, n elements to rotate
            2. suppose there is an array with elements arr[] = 1, 2, 3, 4, 5, 6,
                and we want to rotate the array in left by 2 elements then :
                we will store the shifting array into a temp array.
                temp[] <- 1, 2;
            3. Then shift the remaining elements of array to left.
                arr[] = 3, 4, 5, 6, _, _
            4. Now copy the elements from the temp array to the original array.
                arr[] = 3, 4, 5, 6, 1, 2
            5. This approach will take the time complexity of O(n) + O(d) and space of O(d).

        Approach 2: Rotating array one by one element
            1. Suppose we have to rotate an array by three elements to left then,
                arr[] = 1, 2, 3, 4, 5, 6
            2. First, rotate the array by one element to the left
                arr[] = 2, 3, 4, 5, 6, 1
            3. Repeat the process 2 more time to get the desired output.
                arr[] = 3, 4, 5, 6, 1, 2
                arr[] = 4, 5, 6, 1, 2, 3
            4.  This approach will take the time complexity of O(n * d) and space of O(1).

        Approach 3: Reversal Algorithm
            1. Suppose we have to do a left rotation by 2 element of array of size 6 then,
                d = 2 and n = 6, arr[] = 1, 2, 3, 4, 5, 6
            2. In this approach, first, we will reverse the array from 0 to n-d-1, the part which
                we want to shift and rotate
                arr[] = 1, 2, 3, 4, 5, 6  --> arr[] = 2, 1, 3, 4, 5, 6
            3. Then, we will reverse the remaining array, i.e., from n-d to n-1.
                arr[] = 2, 1, 3, 4, 5, 6  --> arr[] = 2, 1, 6, 5, 4, 3
            4. After that, we will reverse the whole array, and we will get out desired output.
                arr[] = 3, 4, 5, 6, 1, 2
            5. This approach will take the time complexity of O(n) and space of O(1).
         */

    }
}
