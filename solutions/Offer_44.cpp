class Solution {
public:
    int findNthDigit(int n) {
        long long i = 1, num = 9, base = 1;
        while (n > i * num) {
            n -= i * num;
            i ++;
            num *= 10;
            base *= 10;
        }

        int number = base + (n + i - 1) / i - 1;
        int r = n % i ? n % i : i;
        for (int j = 0; j < i - r; j ++ ) number /= 10;
        return number % 10;
    }
};