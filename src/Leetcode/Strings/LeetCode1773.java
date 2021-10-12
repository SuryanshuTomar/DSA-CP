package Leetcode.Strings;

public class LeetCode1773 {
    public static void main(String[] args) {
        String[][] items = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
        String ruleKey = "color";
        String ruleValue = "silver";
        int output = countMatches(items, ruleKey, ruleValue);
        System.out.println(output);
    }

    private static int countMatches(String[][] items, String ruleKey, String ruleValue) {
        int value;
        if(ruleKey.equals("type")){
            value = 0;
        } else if (ruleKey.equals("color")){
            value = 1;
        } else {
            value = 2;
        }

        int count = 0;
        for(String[] item : items){
            if(item[value].equals(ruleValue)){
                count++;
            }
        }
        return count;
    }
}
