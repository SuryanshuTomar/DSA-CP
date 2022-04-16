package DSA.Arrays;

public class SecondLargest {
    public static void main(String[] args) {
//        int[] arr = {3, 5, 23, 65, 75, 23, 45, 6};
        int[] arr = {1,1,1 ,1 , 1,1,1};
        int arrLength = arr.length;

        /*
            Approach :
            1. if a[i] > a[largest] : secondLargest = largest, largest = i;
            2. if a[i] == a[largest] : We simply ignore because we already have this as largest.
            3. if a[i] < a[largest] :
                    -> 1. if secondLargest == -1 : secondLargest = i
                    -> 2. if a[i] <= a[secondLargest] : We simply ignore
                    -> 3. if a[i] > a[secondLargest] : secondLargest = i
         */
        // Time complexity: 0(n)
        findSecondLargestInArray(arr, arrLength);
    }

    private static void findSecondLargestInArray(int[] arr, int arrLength) {
        // here -1 means there is no second largest
        int secondLargest = -1;
        int largest = 0;

        for (int i = 0; i < arrLength ; i++) {
            if(arr[i] > arr[largest]){
                secondLargest = largest;
                largest = i;
            }
            // We are not check the arr[i] == arr[largest] case because even if we do find this
            // case too, then also we have to ignore because we already have the largest number.
            else if(arr[i] < arr[largest]){
                if(secondLargest == -1 || arr[i] > arr[secondLargest]){
                    secondLargest = i;
                }
            }
        }
        if(secondLargest != -1){
            System.out.println(arr[secondLargest]);
        }
        else{
            System.out.println("No second Largest Element present");
        }
    }
}
