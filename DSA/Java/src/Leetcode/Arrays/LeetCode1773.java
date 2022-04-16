package Leetcode.Arrays;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class LeetCode1773 {
    public static void main(String[] args) {
        String[][] item = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
        ArrayList<List<String>> items = new ArrayList<>();
        for(String[] str : item){
            items.add(Arrays.asList(str));
        }
        String ruleKey = "color";
        String ruleValue = "silver";
        int output = countMatches(items, ruleKey, ruleValue);
        System.out.println(output);
    }

    private static int countMatches(ArrayList<List<String>> items, String ruleKey, String ruleValue) {
        int val = 0;
        switch (ruleKey) {
            case "color" -> val = 1;
            case "name" -> val = 2;
        }
        int count = 0;
        for (List<String> item : items) {
            if (ruleValue.equals(item.get(val))) count++;
        }
        return count;
    }
}
