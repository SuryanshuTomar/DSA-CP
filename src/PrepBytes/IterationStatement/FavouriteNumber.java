package PrepBytes.IterationStatement;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class FavouriteNumber {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int test_cases = Integer.parseInt(br.readLine());

        while(test_cases-- > 0){
            int count = 0;
            int number = Integer.parseInt(br.readLine());
            while (number > 0){
                int rem = number % 10;
                number /= 10;
                if (rem == 5){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
