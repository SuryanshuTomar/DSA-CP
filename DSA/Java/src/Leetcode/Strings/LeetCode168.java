package Leetcode.Strings;

public class LeetCode168 {
    public static void main(String[] args) {
        int columnNumber = 2147483647;
        System.out.println(convertToTitle(columnNumber));
    }

    private static String convertToTitle(int columnNumber) {
        StringBuilder sb = new StringBuilder();
        while(columnNumber > 0){
            columnNumber--;
            sb.insert(0, (char) (columnNumber % 26 + 'A'));
            columnNumber /= 26;
        }
        return sb.toString();
    }
}

//        168. Excel Sheet Column Title
//        The test point for this question is knowledge of mathematics and ASCII table.
//
//        As we know,in the division operation of Java,$6\div3=2$,$7 \div3=2$.And in ASCII table.We can use it like this
//
//        'A'=0+'A'
//        'B'=1+'A'
//        'C'=2+'A'
//        So let's see this question
//
//        1-1=0 0%26=0 0+'A'='A'
//        2-1=1 1%26=1 1+'A'='B'
//        26-1=25 25%26=25 25+'A'='Z'
//        And what if the number is greater than 26
//
//        28-1=27 27%26=1 1+'A'='B' 27/26=1 1-1=0 0%26=0 0+'A'='A'
//        This question is need to return String,so we can use StringBuffer.It is very easy thinking.
