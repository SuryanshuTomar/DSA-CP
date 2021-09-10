//Question:
//        Fit Square
//
//        PrepBuddy provided you with a rectangular board of M
//        xN dimension. Also, he provided an unlimited number of small blocks of 2x1
//
//        size. You are allowed to rotate the block. You are asked to place as many blocks as possible on the board to meet the following conditions:
//        1. Each block completely covers two squares.
//        2. No two blocks overlap.
//        3. Each block lies entirely inside the board. It is allowed to touch the edges of the board.
//        Find the maximum number of blocks, which can be placed under these restrictions.
//        Input format
//
//        The first line contains an integer T
//        denoting the number of test cases.
//        In each of the next T lines, you are given two integers M and N
//
//        Output format
//
//        Print the maximal number of blocks, which can be placed.
//        Constraints
//
//        1<=T<=15
//
//        1≤M≤N≤16
//
//        Time Limit
//
//        1
//
//        second
//        Example
//        Input
//
//        1
//
//        2 5
//
//        Output
//
//        5

package PrepBytes.SelectionStatement;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class FitSquare {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int test_cases = Integer.parseInt(br.readLine());

        while(test_cases-- > 0){
            int box_area, no_of_boxes;
            int smallbox_area = 2;
            String box_info = br.readLine();
            String [] box = box_info.split(" ");
            int box_length = Integer.parseInt(box[0]);
            int box_breadth = Integer.parseInt(box[1]);

            box_area = box_length * box_breadth;
            no_of_boxes = box_area / smallbox_area;
            System.out.println(no_of_boxes);
        }

    }
}
