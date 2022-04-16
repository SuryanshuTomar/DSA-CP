package DSA.Arrays;

// Question: https://www.codechef.com/problems/HRDSEQ

import java.util.Scanner;

public class CodeChef2019HRDSEQ {
    public static void main(String[] args) {
         Scanner scan = new Scanner(System.in);
         int test_cases = scan.nextInt();

         while(test_cases-- > 0){
             int[] arr = new int[129];
             int searchVal = scan.nextInt();
             int[] visited = new int[129];

             // Setting the value Zero for all the elements in the visited array.
             // Setting the value 0 means the value isn't visited previously.
             for (int i = 0; i < 129; i++) {
                 visited[i] = 0;
             }

             // Starting value of index 1 is given which is zero.
             arr[1] = 0;

             // Limit for the space used is given which is 128 that's why the loop is running
             // till 128.
             for (int i = 2; i < 129 ; i++) {
                 // if the array element is visited previously then simply subtracting the
                 // array index of current element and array index of element last occurrence.
                if(visited[arr[i-1]] != 0){
                    arr[i] = (i-1) - visited[arr[i-1]];
                }

                // if not visited then simply put the element as zero
                // And update the element index value as last occurrence of the current element
                // in the visited array.
                else{
                    arr[i] = 0;
                    visited[arr[i-1]] = i-1;
                }
             }

             int count = 0;
             // Checking the count of the searched value till the input index.
             for (int i = 1; i < searchVal; i++) {
                 if(arr[searchVal] == arr[i]){
                     count++;
                 }
             }
             System.out.println(count);
         }
    }
}
