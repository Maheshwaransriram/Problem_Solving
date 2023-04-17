// Dist_btw_pts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>

int main()
{
    int p1, p2, p3, p4, dist;

    std::cout << "Enter p1 and p2:";
    std::cin >> p1 >> p2;

    std::cout << std::endl << "Enter p3 and p4:";
    std::cin >> p3 >> p4;

    dist = sqrt(pow(p3 - p1,2) + pow(p2 - p4,2));
    std::cout << std::endl << "Distance between two points:" << dist;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
