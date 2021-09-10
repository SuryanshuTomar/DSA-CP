
//        Q- Find majority element (using Boyer–Moore Majority Vote Algorithm)
//        Given an integer array containing duplicates, return the majority element if present.
//        A majority element appears more than n/2 times, where n is the array size.

/*
    Concept of Boyer–Moore Majority Vote Algorithm:
        1. Find a candidate
        2. Check if the candidate is actually a majority element.
 */

package DSA.Arrays;

import java.util.Arrays;

public class MooreVoting {
    public static void main(String[] args) {
        //  Approach 1: Brute Force Method
        //  TC: O(n^2)  and AS: O(1)
        int[] arr = {4, 3, 4, 2, 2, 2, 3, 2, 2, 2, 7, 8, 2, 2, 2, 2};
        int arrLength = arr.length;

        findMajority1(arr, arrLength);

        /* Approach 2: First sorting the array and then counting the elements.
            1. Sort the array
            2. Find the mid-element
            3. find the frequency of this mid-element
            4. Check if the frequency of this mid-element is greater than n/2
            5. TC: O(nLogn)  and AS: O(1)
        */
        findMajority2(arr, arrLength);

        //  Approach 3: Boyer–Moore Majority Vote Algorithm
        // TC: O(n)
        /*
          Intuition Behind Working :
           When the elements are the same as the candidate element,
           votes are incremented when some other element is found not equal to the candidate element.
           We decreased the count.
           This actually means that we are decreasing the priority of winning ability of the selected candidate,
           since we know that if the candidate is a majority it occurs more than N/2 times and the remaining elements
           are less than N/2.
           We keep decreasing the votes since we found some different element than the candidate element.
           When votes become 0, this actually means that there are the same number of different elements,
           which should not be the case for the element to be the majority element.
           So the candidate element cannot be the majority,
           so we choose the present element as the candidate and continue the same till all the elements get finished.
           The final candidate would be our majority element.
           We check using the 2nd traversal to see whether its count is greater than N/2.
           If it is true, we consider it as the majority element.

        Steps to implement the algorithm :
        Step 1 – Find a candidate with the majority –


            Initialize a variable say i ,votes = 0, candidate =-1
            Traverse through the array using for loop
            If votes = 0, choose the candidate = arr[i] , make votes=1.
            else if the current element is the same as the candidate increment votes
            else decrement votes.

        Step 2 – Check if the candidate has more than N/2 votes –

            Initialize a variable count =0 and increment count if it is the same as the candidate.
            If the count is >N/2, return the candidate.
            else return -1.
         */

        findMajority3(arr, arrLength);

    }

    private static void findMajority3(int[] arr, int arrLength) {
        int count = 1;
        int majority = 0;

        //Finding the candidate
        for (int i = 0; i < arrLength; i++) {
            if(arr[majority] == arr[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                count = 1;
                majority = i;
            }
        }

        count = 0;
        //Checking if the candidate is actually a majority
        for (int i = 0; i < arrLength; i++) {
            if(arr[majority] == arr[i]){
                count++;
            }
        }
        if(count > arrLength/2){
            System.out.println(arr[majority]);
        }
        else{
            System.out.println("No Majority Found");
        }
    }

    private static void findMajority1(int[] arr, int arrLength) {
        int maxCount = 0;
        int index = -1;

        for (int i = 0; i < arrLength ; i++) {
            int count = 0;
            for (int j = 0; j < arrLength; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }

            // update maxCount if count of
            // current element is greater
            if(count > maxCount){
                maxCount = count;
                index = i;
            }
        }

        // if maxCount is greater than n/2
        // return the corresponding element
        if(maxCount > arrLength/2){
            System.out.println(arr[index]);
        }
        else{
            System.out.println("No Majority Element");
        }
    }

    private static void findMajority2(int[] arr, int arrLength) {
        int maxCount = 0;
        int index = -1;
        int count = 1, temp = arr[0];

        //Sorting the array first > This sorting will take nlogn time.
        Arrays.sort(arr);

        // This loop will take TC: O(n)
        for (int i = 1; i < arrLength ; i++) {
            // Increases the count if the
            // same element occurs otherwise
            // starts counting new element
            if(temp == arr[i]) {
                count++;
            }
            else{
                count = 1;
                temp = arr[i];
            }

            // update maxCount if count of
            // current element is greater
            if(count > maxCount){
                maxCount = count;
                index = i;
            }
        }

        // if maxCount is greater than n/2
        // return the corresponding element
        if(maxCount > arrLength/2){
            System.out.println(arr[index]);
        }
        else{
            System.out.println("No Majority Element");
        }
    }
}
