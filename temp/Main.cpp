#include <iostream>
#include <vector>
#include "Header.h"

void sort(std::vector<Complex>& vec)
{
    for (int i = 0; i < vec.size() - 1; ++i)
    {
        for (int j = 0; j < vec.size() - i - 1; ++j)
        {
            if (vec[j].abs() > vec[j + 1].abs())
                std::swap(vec[j], vec[j + 1]);
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<Complex> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i].a >> numbers[i].b;
    }

    sort(numbers);

    for (int i = 0; i < n; ++i)
    {
        std::cout << numbers[i].a << ' ' << numbers[i].b << "\n";
    }

    return 0;
}
