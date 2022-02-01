#include "Solution.h"

#include <iostream>
#include <string>

bool execute(std::vector<int> const inputData, bool const test, bool const answer)
{
    std::cout << "Input:\t";
    
    for(int i=0; i<inputData.size(); i++)
        std::cout << inputData[i] << " ";

    std::cout << std::endl;


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

    correct += execute({ 1, 3, 2, 4 }, function({ 1, 3, 2, 4 }), true);
    testNum++;

    correct += execute({ 3, 2, 1 }, function({ 3, 2, 1 }), true);
    testNum++;

    correct += execute({ 1, 1, 1 }, function({ 1, 1, 1 }), true);
    testNum++;

    correct += execute({ 4, 6, 5, 5 }, function({ 4, 6, 5, 5 }), true);
    testNum++;

    correct += execute({ 1, 3, 2, 5, 5, 4, 6 }, function({ 1, 3, 2, 5, 5, 4, 6 }), false);
    testNum++;

    correct += execute({ 1, 0, 0, 0, 1 }, function({ 1, 0, 0, 0, 1 }), true);
    testNum++;

    correct += execute({ 5, 6, 7, 5, 8, 9 }, function({ 5, 6, 7, 5, 8, 9 }), false);
    testNum++;

    correct += execute({ 0, 1, 0, 1, 0, 1 }, function({ 0, 1, 0, 1, 0, 1 }), true);
    testNum++;

    correct += execute({ 12, 12, 1, 2, 4 }, function({ 12, 12, 1, 2, 4 }), false);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
