#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool function(const std::vector<int> input)
{
    std::vector<int> copyVec;

    copyVec = input;

    std::sort(copyVec.begin(), copyVec.begin() + copyVec.size());

    /*
    for (int i = 0; i < input.size(); i++)
    {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < copyVec.size(); i++)
    {
        std::cout << copyVec[i] << " ";
    }
    std::cout << std::endl;
    */

    int changes = 0;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] != copyVec[i])
        {
            //std::cout << i;
            //std::cout << "Input: " << input[i] << "; Copy: " << copyVec[i] << "; Changes: " << changes << std::endl;
            changes++;
        }

        if (changes > 2)
            return false;
    }

    return true;
}