package Leetcode.Strings;

public class LeetCode925 {
    public static void main(String[] args) {
        String name  = "saeed";
        String typed = "ssaaedd";
        boolean result = isLongPressedName(name, typed);
        System.out.println(result);
    }

    private static boolean isLongPressedName(String name, String typed) {
        if (typed.length() < name.length()) return false;

        int namePtr = 0;
        int typedPtr = 0;

        while (typedPtr < typed.length() || namePtr < name.length()) {
            if(typedPtr >= typed.length()) return false;
            if (namePtr < name.length() && name.charAt(namePtr) == typed.charAt(typedPtr)) {
                namePtr++;
                typedPtr++;
            } else if (namePtr != 0 && name.charAt(namePtr - 1) == typed.charAt(typedPtr)) {
                typedPtr++;
            } else {
                return false;
            }
        }
        return true;
    }
}

//    1. If typed.length() < name.length(), it means the name is not typed so return false.
//    2. Take two pointers-
//          a. i -> For traversing the typed string
//          b. j -> For traversing the name string
//    3. Iterate through the typed string
//          a. if j < name.length() i.e. all the characters in name string is not yet traversed
//              i. if name.charAt(j) == typed.charAt(i) i.e. a character of name is matched then increment the j pointer to check for the next
//              ii. if the chars don't match, check if it matches with the previous character, if not return false. This case will occur when we have same consecutive chars in typed string, in the first occurence we have moved the j pointer forward but it is same as the previous char at j.
//          b. if name has been matched completely i.e. j >= name.length(), then all the chars in typed string has to be same to the last character in name string, if not then return false
//    4. Finally, return true if name is completely matched else return false, thus return j == name.length()
