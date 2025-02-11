class Solution {
    public String removeOccurrences(String s, String part) {
        int m = part.length();
        StringBuilder result = new StringBuilder();

        for (char c : s.toCharArray()) {
            result.append(c);

            if (result.length() >= m && result.substring(result.length() - m).equals(part)) {
                result.setLength(result.length() - m); // Efficiently remove last 'm' characters
            }
        }
        return result.toString();
    }
}