package PrepBytes.IterationStatement;

import java.util.Arrays;
import java.util.Scanner;

public class FascinatingNumber {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int number_count = scan.nextInt();

        while (number_count-- > 0) {
            int n = scan.nextInt();
            do{
                n++;
            }while(!checkDistinct(n));
            System.out.println(n);
        }
    }

    static Boolean checkDistinct(int n) {
        Boolean[] visited = new Boolean[10];
        Arrays.fill(visited, Boolean.FALSE);

        while(n>0){
            if(visited[n%10]){
                return false;
            }
            visited[n%10] = true;
            n /= 10;
        }
        return true;
    }
}
