#include <iostream>
#include <math.h>
#include <string>

int m_pow(const int& value, const int& degree) {
    int result{1};
    for (int i = 0; i < degree; ++i) {
        result *= value;
    }

    return result;
}

int range(const int& valueOne, const int& valueTwo) {
    int result{1};
    for (int i = valueOne; i <= valueTwo; ++i) {
        result += i;
    }

    return result;
}

bool isPerfect(const int& value) {
    int sum{1};
    for (int i = 1; i < value; i++) {
        if (value % i == 0)
            sum += i;
    }
    if (sum == value) {
        return true;
    }
    else {
        return false;
    }
}

int isPerfect(const int& begin, const int& end) {
    bool isPerfectCheck{false};
    int isPerfectValue{1};
    for (int i = begin; i < end; ++i) {
        if (isPerfect(i)) {
            isPerfectCheck = true;
            isPerfectValue = i;
        }
    }
    if (isPerfectCheck) {
        return isPerfectValue;
    }
    else {
        return 0;
    }
}

void card(const char& card, const int& value) {
    std::cout << card << " " << value;
}

int print(const std::string& s)
{
    int result{0};
    for (std::string::size_type i = 0; i <= s.size(); ++i) {
        result += (int)i;
    }

    return result;
}

int main()
{

}

