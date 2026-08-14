class Solution {
public:
    int fib(int n) {
        
        // Base Cases
        if (n == 0) return 0;
        if (n == 1) return 1;

        int a = 0, b = 1;

        // Calculate Fibonacci value iteratively
        for (int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }

        return b;
    
    }
};