#include <iostream>

bool isPerfectSquare(int num)
{
    if (num < 2)
    {
        return true;
    }

    long left = 2;
    long right = num / 2;

    while (left <= right)
    {
        long mid = left + (right - left) / 2;
        long square = mid * mid;

        if (square == num)
        {
            return true;
        }
        else if (square < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return false;
}

int main()
{
    int number = 16;

    if (isPerfectSquare(number))
    {
        std::cout << number << " is a valid perfect square." << std::endl;
    }
    else
    {
        std::cout << number << " is not a perfect square." << std::endl;
    }

    return 0;
}
