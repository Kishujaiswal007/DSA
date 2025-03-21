class Solution {
    public boolean isPalindrome(String s) {
        // Preprocess: Remove non-alphanumeric characters and convert to lowercase
        String cleaned = cleanString(s);
        return checkPalindrome(cleaned, 0, cleaned.length() - 1);
    }

    // Function to clean string (remove non-alphanumeric & convert to lowercase)
    private String cleanString(String s) {
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            if (Character.isLetterOrDigit(c)) {
                sb.append(Character.toLowerCase(c));
            }
        }
        return sb.toString();
    }

    // Recursive function to check palindrome
    private boolean checkPalindrome(String s, int left, int right) {
        // Base case: If left >= right, it is a palindrome
        if (left >= right) return true;

        // If characters don't match, return false
        if (s.charAt(left) != s.charAt(right)) return false;

        // Recursive call: Move inward
        return checkPalindrome(s, left + 1, right - 1);
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println(sol.isPalindrome("A man, a plan, a canal: Panama"));  // true
        System.out.println(sol.isPalindrome("race a car"));  // false
        System.out.println(sol.isPalindrome(" "));  // true
    }
}
