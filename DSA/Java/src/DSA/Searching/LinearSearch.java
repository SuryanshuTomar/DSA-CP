package DSA.Searching;

public class LinearSearch {
    public static void main(String[] args) {
        int[] arr = {2, 0, -1, 42, 34, 13};
        int target = 13;
        int result = linearSearch(arr, target);
        System.out.println(result);
    }

    private static int linearSearch(int[] arr, int target) {
        for (int index = 0; index < arr.length; index++) {
            if(target == arr[index]){
                return index;
            }
        }
        return -1;
    }
}
