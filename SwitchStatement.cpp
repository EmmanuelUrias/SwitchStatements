#include <iostream>

int main()
{
    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January";
        break;
    case 2:
        std::cout << "Febuary";
        break;
    case 3:
        std::cout << "March";
        break;
    }
    return 0;
}