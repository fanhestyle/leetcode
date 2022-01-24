//#include "origin_leftInRightIn.hpp"
#include "origin_leftInRightEx.hpp"

int main()
{
    std::vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    {
        int target = 70;
        int pos = binarySearch(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        int target = 10;
        int pos = binarySearch(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        int target = 90;
        int pos = binarySearch(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        int target = 0;
        int pos = binarySearch(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        int target = 100;
        int pos = binarySearch(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }

    {
        int target = 17;
        int pos = binarySearch(arr, target);
        std::cout << "target at pos(0-based): " << pos << std::endl;
    }
}
