#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool is_all_digits_prime(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (!is_prime(digit))
            return false;
        num /= 10;
    }
    return true;
}

bool is_sum_of_digits_prime(int num) {
    int digit_sum = 0;
    while (num > 0) {
        digit_sum += num % 10;
        num /= 10;
    }
    return is_prime(digit_sum);
}

int count_pure_primes(int start, int end) {
    int count = 0;
    for (int num = start; num <= end; num++) {
        if (is_prime(num) && is_all_digits_prime(num) && is_sum_of_digits_prime(num)) {
            count++;
        }
    }
    return count;
}

int main() {
    int num_test_cases;
    cin >> num_test_cases;

    for (int i = 0; i < num_test_cases; i++) {
        int start, end;
        cin >> start >> end;
        int result = count_pure_primes(start, end);
        cout << result << endl;
    }

    return 0;
}
