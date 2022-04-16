package DSA.SlidingWindow;

/*
    The Sliding Window pattern is used to perform a required operation on a specific window size
    of a given array or linked list, such as finding the longest sub-array containing all 1s.
    Sliding Windows start from the 1st element and keep shifting right by one element and adjust
    the length of the window according to the problem that you are solving.
    In some cases, the window size remains constant and in other cases the sizes grows or
    shrinks.

    Following are some ways you can identify that the given
    problem might require a sliding window:
        1. The problem input is a linear data structure such as a linked list, array, or string
        2. You’re asked to find the longest/shortest substring, sub-array, or a desired value


    Common problems you use the sliding window pattern with:
       1. Maximum sum sub-array of size ‘K’ (easy)
       2. Longest substring with ‘K’ distinct characters (medium)
       3. String anagrams (hard)
 */
/*
    Q- Given an array of non-negative integers and a sub-array size k,
     Find the maximum sum of k consecutive elements.

    Approach 1: Brute Force Approach or Naive Approach:
        1. In this approach, we first traverse the array using a loop.
        2. And run a second loop inside the first loop till the size of the sub-array(till k)
        3. Calculate and store the current max.
        4. Compare the current max with the previous max and if the current max is greater than
            replace the previous max with the current max.
        5. TC: 0(n^2) and AS: 0(1)

    Approach 2: Sliding window Technique:
        FLOW:
        1. Identification (if the problem can be solved using sliding window)
            A- Question is of either of these Array, String, list, etc.
            B- Asking about Sub-array or Sub-string etc.
            C- Given window size(fixed) or any condition to find the window size(variable).
        2. Problem Statement -> Understand the Input and output of the program.
        3. Abstract Code
        4. Code

        STEPS:
        1. First we need to define and calculate the start index of the window and
           the end index of the window.
        2. Once the window size is calculated we need to maintain the size of window by
           adding one element at the end of the window array and removing one element
           from the start of the array (we can do this by incrementing the start and
           end pointer of the window array). To keep sliding the window while calculating
           the maximum sub-array.
        3. TC: 0(n) and AS: 0(1)
 */

public class WindowSlidingTechnique {
    public static void main(String[] args) {
        int[] arr = {2, 5, 1, 8, 2, 9, 6};
        int windowSize = 3;
        int arrLength =arr.length;

        //Approach 1: Brute Force
        findMaxSubArray1(arr, arrLength, windowSize);

        //Approach 2: Sliding Window- Approach 1
        findMaxSubArray2(arr, arrLength, windowSize);

        //Approach 3: Sliding Window - Approach 2
        findMaxSubArray3(arr, arrLength, windowSize);
    }

    private static void findMaxSubArray3(int[] arr, int arrLength, int windowSize) {
        int maxSum = 0;
        int currentSum = 0;

        for (int i = 0; i < windowSize ; i++) {
            currentSum += arr[i];
        }

        maxSum = currentSum;

        for (int i = windowSize; i < arrLength; i++) {
            currentSum += arr[i] - arr[i-windowSize];
            maxSum = Math.max(maxSum, currentSum);
        }

        System.out.println(maxSum);
    }

    private static void findMaxSubArray1(int[] arr, int arrLength, int windowSize) {
        int maxSum = Integer.MIN_VALUE;
        // Running the loop from start till the start of the window.
        for (int i = 0; i <= arrLength - windowSize ; i++) {
            int currentSum = 0;
            // Second loop for calculating the sum of window at every iteration.
            for (int j = i; j < i + windowSize ; j++) {
                currentSum += arr[j];
                maxSum = Math.max(maxSum, currentSum);
            }
        }
        System.out.println(maxSum);
    }

    private static void findMaxSubArray2(int[] arr, int arrLength, int windowSize) {
        int maxSum = 0;
        int startWindow = 0;
        int endWindow = 0;
        int currentSum = 0;

        while (endWindow < arrLength){

            if((endWindow  - startWindow) + 1 <= windowSize){
                currentSum += arr[endWindow];
                endWindow++;
            }

            else if((endWindow - startWindow) + 1 > windowSize){
                currentSum -= arr[startWindow];
                currentSum += arr[endWindow];
                startWindow++;
                endWindow++;
            }
            maxSum = Math.max(maxSum, currentSum);
        }
        System.out.println(maxSum);
    }
}
