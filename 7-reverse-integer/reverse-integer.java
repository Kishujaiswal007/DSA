class Solution {
    public int reverse(int x) {
        int reversedNumber = 0;

        while (x != 0) {
            int lastDigit = x % 10; // Extract the last digit
            x /= 10; // Remove the last digit

            // Check for overflow before updating the reversed number
            if (reversedNumber > Integer.MAX_VALUE / 10 || 
               (reversedNumber == Integer.MAX_VALUE / 10 && lastDigit > 7)) {
                return 0; // Overflow case
            }
            if (reversedNumber < Integer.MIN_VALUE / 10 || 
               (reversedNumber == Integer.MIN_VALUE / 10 && lastDigit < -8)) {
                return 0; // Underflow case
            }

            // Append the extracted digit
            reversedNumber = reversedNumber * 10 + lastDigit;
        }

        return reversedNumber;
    }
}
