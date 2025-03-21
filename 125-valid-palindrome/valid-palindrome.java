class Solution {
    public boolean isPalindrome(String s) {
        return checkPalindrome(s, 0, s.length() - 1);
    }

    private boolean checkPalindrome(String s, int left, int right) {
        // Base case: If pointers have crossed, it is a palindrome
        if (left >= right) return true;

        char leftChar = s.charAt(left);
        char rightChar = s.charAt(right);

        // Skip non-alphanumeric characters
        if (!Character.isLetterOrDigit(leftChar)) return checkPalindrome(s, left + 1, right);
        if (!Character.isLetterOrDigit(rightChar)) return checkPalindrome(s, left, right - 1);

        // Compare characters (case insensitive)
        if (Character.toLowerCase(leftChar) != Character.toLowerCase(rightChar)) return false;

        // Recursive call moving both pointers inward
        return checkPalindrome(s, left + 1, right - 1);
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println(sol.isPalindrome("A man, a plan, a canal: Panama"));  // true
        System.out.println(sol.isPalindrome("race a car"));  // false
        System.out.println(sol.isPalindrome(" "));  // true
    }
}
 