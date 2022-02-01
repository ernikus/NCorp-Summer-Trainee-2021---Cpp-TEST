#include "Solution.h"

#include <iostream>
#include <string>

bool execute(std::string const inputData, std::string const test, std::string const answer)
{
    std::cout << "Input:\t" << inputData << std::endl;
    std::cout << "Output:\t" << test << std::endl;
    std::cout << "Answer:\t" << answer << std::endl;

    if (test == answer)
    {
        std::cout << "Correct Answer!" << std::endl << std::endl;
        return true;
    }

    else
    {
        std::cout << "Bad Answer!" << std::endl << std::endl;
        return false;
    }
}

int main()
{
    int correct{ 0 }, testNum{ 0 };
    
    correct += execute("0, 0, 0, 0, 0, 0", function(0, 0, 0, 0, 0, 0), "00:00:00");
    testNum++;
    
    correct += execute("0, 0, 0, 1, 1, 1", function(0, 0, 0, 1, 1, 1), "01:01:01");
    testNum++;

    correct += execute("1, 3, 6, 4, 4, 9", function(1, 3, 6, 4, 4, 9), "13:46:49");
    testNum++;

    correct += execute("1, 1, 8, 9, 5, 3", function(1, 1, 8, 9, 5, 3), "11:38:59");
    testNum++;

    correct += execute("1, 1, 8, 9, 8, 3", function(1, 1, 8, 9, 8, 3), "18:18:39");
    testNum++;

    correct += execute("2, 5, 8, 9, 8, 6", function(2, 5, 8, 9, 8, 6), "ERROR");
    testNum++;

    correct += execute("0, 1, 7, 7, 4, 6", function(0, 1, 7, 7, 4, 6), "06:17:47");
    testNum++;

    correct += execute("2, 4, 5, 6, 7, 2", function(2, 4, 5, 6, 7, 2), "22:46:57");
    testNum++;

    correct += execute("2, 1, 0, 0, 0, 0", function(2, 1, 0, 0, 0, 0), "01:02:00");
    testNum++;

    correct += execute("0, 2, 4, 9, 9, 9", function(0, 2, 4, 9, 9, 9), "09:29:49");
    testNum++;

    correct += execute("1, 2, 3, 0, 0, 0", function(1, 2, 3, 0, 0, 0), "01:02:03");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
