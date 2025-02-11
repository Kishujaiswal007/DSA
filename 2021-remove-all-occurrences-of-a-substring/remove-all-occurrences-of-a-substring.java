class Solution {
    public String removeOccurrences(String s, String part) {
        int n = s.length(), m = part.length();
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < n; i++) {
            result.append(s.charAt(i)); // Add current character to result

            // Check if the last part of result matches 'part'
            if (result.length() >= m) {
                boolean isMatch = true;
                for (int j = 0; j < m; j++) {
                    if (result.charAt(result.length() - m + j) != part.charAt(j)) {
                        isMatch = false;
                        break;
                    }
                }
                // If matched, remove the last 'm' characters
                if (isMatch) {
                    result.delete(result.length() - m, result.length());
                }
            }
        }
        return result.toString();
    }
}
