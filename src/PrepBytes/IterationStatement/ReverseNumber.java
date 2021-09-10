package PrepBytes.IterationStatement;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ReverseNumber {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int number = Integer.parseInt(br.readLine());

        int reversed_number = 0;

        while(number > 0){
            int rem = number % 10;
            reversed_number = (reversed_number * 10) + rem;
            number = number / 10;
        }
        System.out.println(reversed_number);
    }
}
