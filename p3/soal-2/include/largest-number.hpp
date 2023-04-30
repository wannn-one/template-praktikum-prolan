#ifndef LARGESTNUMBER_HPP
#define LARGESTNUMBER_HPP

#include <vector>
#include <string>

class LargestNumber{
    private:
        std::vector<int> nums;
    public:
        LargestNumber();
        bool compare(int a, int b);
        void readInput();
        void sortNumbers();
        std::string getLargestNumber();
};

#endif