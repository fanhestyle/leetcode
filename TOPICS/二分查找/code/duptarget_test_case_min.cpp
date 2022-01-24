//#include "dup_bsearch_min_1.hpp"
#include "dup_bsearch_min_2.hpp"

int main()
{
    std::vector<int> arr = {10, 10, 20, 20, 30, 40, 50,
                            50, 60, 60, 70, 80, 90, 90};

    {
        // 0
        int target = 10;
        int pos = binarySearch_min(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        // 2
        int target = 20;
        int pos = binarySearch_min(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        // 11
        int target = 90;
        int pos = binarySearch_min(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        // -1
        int target = 15;
        int pos = binarySearch_min(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        // -1
        int target = 0;
        int pos = binarySearch_min(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        // -1
        int target = 100;
        int pos = binarySearch_min(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }
}