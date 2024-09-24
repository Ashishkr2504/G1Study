#include <bits/stdc++.h>
using namespace std;

// Helper method to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Helper method to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {  // Optimize by checking up to sqrt(num)
        if (num % i == 0) return false;
    }
    return true;
}

int countUniqueValidPairs(int n) {
    set<pair<int, int>> uniquePairs;
    int count = 0;

    for (int x = 0; x <= n; x++) {
        for (int y = x; y <= n; y++) {  // Start from y = x to avoid duplicate pairs
            // Calculate sum of digits of x and y
            int sumX = sumOfDigits(x);
            int sumY = sumOfDigits(y);

            // Check if the sum of these two digit sums is prime
            if (isPrime(sumX + sumY)) {
                pair<int, int> p = {sumX, sumY};
                pair<int, int> p1 = {sumY, sumX};

                // Only add the pair if it's unique
                if (uniquePairs.find(p) == uniquePairs.end() || uniquePairs.find(p1) == uniquePairs.end() && x!=y) 
                {
                    uniquePairs.insert(p);
                    uniquePairs.insert(p1);
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    int result = countUniqueValidPairs(n);
    cout << "Number of unique valid pairs: " << result << endl;

    return 0;
}
