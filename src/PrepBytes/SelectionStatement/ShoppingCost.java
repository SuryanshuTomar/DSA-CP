// Question:
//        Shopping Cost
//
//        Tina is preparing a shopping list containing N
//        items. She knows the quantity and price of each item on the list.
//        The shop is offering a 20% discount on the items with a quantity of more than 100 units.
//        Given the quantity and price of each of the N items,
//        your task is to calculate how much each item will cost.
//
//        Input format
//        The first line of the input contains an integer N
//        denoting the number of items
//        Each of the next N lines contains two space-separated
//        integers denoting the quantity and price of the item.
//
//        Output format
//        Print the final cost that Tina has to bear for each item. Print till a single digit after the decimal point.
//        Constraints
//
//        1<=N<=10
//
//        1<=quantity,price<=103
//
//        Time Limit
//
//        1
//
//        second
//        Example
//        Input
//
//        3
//
//        100 120
//        200 100
//        50 50
//
//        Output
//
//        12000.0
//
//        16000.0
//        2500.0

package PrepBytes.SelectionStatement;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class ShoppingCost {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int no_of_items = Integer.parseInt(br.readLine());

        while(no_of_items-- > 0){
            float item_cost = 0.0f;
            String item_info = br.readLine();
            String[] item = item_info.split(" ");
            int quantity = Integer.parseInt(item[0]);
            int price = Integer.parseInt(item[1]);

            if(quantity > 100){
                item_cost = (price * quantity) - (price * quantity * 0.2f);
            }
            else{
                item_cost = price * quantity;
            }
            System.out.printf("%.1f%n",item_cost);
        }
    }
}
