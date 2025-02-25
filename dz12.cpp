#include <iostream>

int main()
{
    const size_t SIZE = 10;
    int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int evenSum = 0;
    int oddSum = 0;

    for (size_t i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    std::cout << "Even numbers: " << evenSum << "\n";
    std::cout << "Odd numbers: " << oddSum << std::endl;

    return 0;
}
