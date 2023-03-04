#include <iostream>
#include <math.h>
#include <string>

int m_pow(const int& value, const int& degree) {
    int result{ 1 };
    for (int i = 0; i < degree; ++i) {
        result *= value;
    }

    return result;
}

int range(const int& valueOne, const int& valueTwo) {
    int result{ 1 };
    for (int i = valueOne; i <= valueTwo; ++i) {
        result += i;
    }

    return result;
}

bool isPerfect(const int& value) {
    int sum{ 1 };
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
    bool isPerfectCheck{ false };
    int isPerfectValue{ 1 };
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
    int result{ 0 };
    for (std::string::size_type i = 0; i <= s.size(); ++i) {
        result += (int)i;
    }

    return result;
}

void fillArrayRand(int* array, const int& SIZE) {
    srand(time(NULL));

    for (size_t i = 0; i < SIZE; ++i) {
        array[i] = 1 + rand() % 100;
    }
}

void fillArrayLinear(int* array, const int& SIZE) {
    for (size_t i = 0; i < SIZE; ++i) {
        array[i] = i + 1;
    }
}

int linearSearch(int* array, const int& SIZE, const int& value) {
    for (size_t i = 0; i < SIZE; ++i) {
        if (array[i] == value) {
            return i;
        }
    }
}

//PERFORMED MENTALLY
int binarySearch(int* array, int min, int max) {

    if (max < min)
        std::cout << "MAX < MIN";
    int mid = (min + max) / 2;
    char choice{};

    std::cout << "Your value: " << " > " " OR " << " < " << mid << " ? ";
    std::cout << "\nY - YES   :   N - NO   :   =   ";
    std::cin >> choice;
    switch (choice)
    {
    case '<':
            return binarySearch(array, min, mid - 1);
        break;
    case '>':
            return binarySearch(array, mid + 1, max);
        break;
    case '=':
        std::cout << "Value is find: " << mid;

        return 1;

        break;
    default:
        break;
    }
}

int main()
{
    const int SIZE = 100;
    int array[SIZE]{};
    int choice{ 0 }, value{}, begin{}, end{};

    std::cout
        << "1. Linear Search. "
        << "\n2. Binary Search. ";

    std::cout << "\nEnter choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");

        std::cout << "Linear Search. ";

        std::cout << "Enter value for search: ";
        std::cin >> value;

        system("cls");

        fillArrayRand(array, SIZE);
        std::cout << "Value: " << value << "Is find on key: " << linearSearch(array, SIZE, value);
        break;
    case 2:
        system("cls");
        
        std::cout << "Binary Search. ";
        std::cout << "\nMake a number in your mind.";

        std::cout << "\nEnter range: ";
        std::cout << "\nBegin = "; std::cin >> begin;
        std::cout << "\nEnd = "; std::cin >> end;
        int* arrayForBinary = new int[end];

        system("cls");

        fillArrayLinear(arrayForBinary, end);
        binarySearch(arrayForBinary, begin, end);
        break;
    }
}