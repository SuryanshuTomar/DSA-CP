package DSA.Arrays;

public class FindingMax {
    public static void main(String[] args) {
        int[] arr = {12, 34, 65, 76, 97, 86, 53};

        System.out.println(findMax(arr));
    }

    static int findMax(int[] arr) {
        if(arr.length == 0){
            return -1;
        }

        int max = arr[0];

        for(int element: arr){
            if (max < element){
                max = element;
            }
        }
    return max;
    }
}
