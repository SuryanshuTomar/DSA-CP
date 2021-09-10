package DSA.Arrays;

//Maximum Sum SubArray


public class KadaneAlgorithm {
    public static void main(String[] args) {
//        int[] arr = {-5, 1, -2, 3, -1, 2, -2};
        int[] arr = {-1,2,-1,2};
        int arrLength = arr.length;

        // Approach 1: Brute Force Method
        // TC: O(n^2) and AS: O(1)
        maxSubArraySum1(arr, arrLength);

        // Approach 2: Kadane's Algorithm
        // TC: O(n)
        /*
            The simple idea of Kadane’s algorithm is to look for all positive contiguous
            segments of the array (max_ending_here is used for this).
            And keep track of maximum sum contiguous segment among all positive segments
            (max_so_far is used for this).
            Each time we get a positive-sum compare it with max_so_far and
            update max_so_far if it is greater than max_so_far

            But this approach doesn't handle well when all the numbers in an array are negative.
         */
        maxSubArraySum2(arr, arrLength);

        // Approach 3: Best Approach - Optimized Kadane's Algorithm
        // This approach uses Optimal substructures -
        // (the maximum sub-array ending ar each position is calculated merely from
        // a related but smaller and overlapping sub-problem: the maximum sub-array
        // ending at the previous position),
        // This algo can be viewed as a simple example of Dynamic Programming.
        // TC: O(n)
        maxSubArraySum3(arr, arrLength);
    }

    private static void maxSubArraySum2(int[] arr, int arrLength) {
        int maxSum = Integer.MIN_VALUE;
        int curSum = 0;

        for (int i = 0; i < arrLength; i++) {
            curSum += arr[i];
            if(curSum > maxSum){
                maxSum = curSum;
            }
            if(curSum < 0){
                curSum = 0;
            }
        }
        System.out.println(maxSum);
    }

    private static void maxSubArraySum3(int[] arr, int arrLength) {
        int maxEnding = arr[0];
        int result = arr[0];

        for (int i = 1; i < arrLength; i++) {
            maxEnding = Math.max(maxEnding + arr[i], arr[i]);
            result = Math.max(result, maxEnding);
        }

        System.out.println(result);
    }

    static void maxSubArraySum1(int[] arr, int arrLength) {
        int maxSum = 0;

        for (int i = 0; i < arrLength; i++) {
            int currentSum = 0;
            for (int j = i; j < arrLength; j++) {
                currentSum += arr[j];
                if (maxSum <= currentSum){
                    maxSum = currentSum;
                }
            }
        }
        System.out.println(maxSum);
    }
}
