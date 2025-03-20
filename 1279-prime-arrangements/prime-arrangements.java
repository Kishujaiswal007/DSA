class Solution {
    static final int MOD = 1_000_000_007;

    public int numPrimeArrangements(int n) {
        int primeCount = countPrimes(n);  // Count number of primes in {1,2,...,n}
        int nonPrimeCount = n - primeCount; // Count non-primes

        // Compute (primeCount! * nonPrimeCount!) % MOD
        return (int) ((factorialMod(primeCount) * factorialMod(nonPrimeCount)) % MOD);
    }

    private int countPrimes(int n) {
        if (n < 2) return 0;
        boolean[] isPrime = new boolean[n + 1];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (isPrime[i]) count++;
        }
        return count;
    }

    private long factorialMod(int x) {
        long result = 1;
        for (int i = 2; i <= x; i++) {
            result = (result * i) % MOD;
        }
        return result;
    }
}
