#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string pack(std::vector <int> data)
{
    return std::to_string(data[0]) + std::to_string(data[1]) + ":" + std::to_string(data[2]) + std::to_string(data[3]) + ":" + std::to_string(data[4]) + std::to_string(data[5]);
}

std::string function(int a, int b, int c, int d, int e, int f)
{
    std::vector <int> data{ a, b,c,d,e,f };

    sort(data.begin(), data.end());

    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i];
    }

    std::cout << std::endl;

    int zero{ 0 };

    for (int i = 0; i < data.size(); i++)
        if (data[i] == 0)
            zero++;

    if (zero < 6 && zero > 0)
    {
        std::swap(data[zero], data[1]);

        if (zero == 3 || zero == 4)
            std::swap(data[zero+1], data[3]);
    }

        /*
        if (zero == 5) // 1 liczba
        {
            int change{};
            change = data[1];
            data[1] = data[5];
            data[5] = change;
        }
        else if (zero == 4) // 2 liczby
        {
            int change{};
            change = data[1];
            data[1] = data[4];
            data[4] = change;

            change = data[3];
            data[3] = data[5];
            data[5] = change;
        }
        else if (zero == 3) // 3 liczby
        {
            int change{};
            change = data[1];
            data[1] = data[3];
            data[3] = change;

            change = data[3];
            data[3] = data[4];
            data[4] = change;
        }
        else if (zero == 2) // 4 liczby
        {
            int change{};
            change = data[1];
            data[1] = data[2];
            data[2] = change;
        }
        */

    bool isError{ false };

    if (zero != 6)
    {
        // Visualisation:
        // X X : X X : X X
        // 0 1 : 2 3 : 4 5
        
        if (data[0] > 2)
            isError = true;

        if (isError != true && data[0] == 2 && data[1] > 3)
            isError = true;

        if (isError != true && data[4] > 5)
            if (data[3] < 6)
            {
                std::swap(data[3], data[4]);
            }
            else if (data[0] < 2)
            {
                std::swap(data[1], data[4]);
            }
            else
            {
                isError = true;
            }

        if (isError != true && data[2] > 5)
            if (data[0] < 2)
            {
                std::swap(data[1], data[4]);
            }
            else
            {
                isError = true;
            }

        if (isError != true && data[2] > data[4])
            std::swap(data[2], data[4]);

        if (isError != true && data[1] > data[3])
            std::swap(data[1], data[3]);
    }

    if (isError == true)
        return "ERROR";
    else
        return pack(data);
}
