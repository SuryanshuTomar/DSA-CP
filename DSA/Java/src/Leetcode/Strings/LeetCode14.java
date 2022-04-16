package Leetcode.Strings;

public class LeetCode14 {
    public static void main(String[] args) {
        String[] strarr = {"flower","flow","flight"};
        String output = longestCommonPrefix(strarr);
        System.out.println(output);
    }

    // Faster solution
    private static String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) return "";
        String prefix = strs[0];

        for (int i = 1; i < strs.length; i++){
            while (strs[i].indexOf(prefix) != 0) {
                prefix = prefix.substring(0, prefix.length() - 1);
                if (prefix.isEmpty()) return "";
            }
        }
        return prefix;
    }

    //Solution 2 : Slower
    private static String longestCommonPrefix2(String [] strs){
        //check if it is empty
        if(strs.length == 0 || strs == null) return "";
        //this will  be your counter to determine prefix size
        int count = 0;
        StringBuilder x = new StringBuilder();
        //first letter of the first word. Thats all you need!
        for(char a: strs[0].toCharArray()){
            // now compare that letter to the first letters of every other word in the list
            for(int i = 1; i < strs.length; i++){
                //if you exceed the length of the string, or you get a mismatch, return what you have.
                if(count >= strs[i].length() || a !=strs[i].charAt(count))
                    return x.toString();
            }
            //otherwise, add that letter,
            x.append(a);
            //and the count will now move the index to the second letter in the string and continue the comparisons.
            count++;
        }
        return x.toString();
    }
}

