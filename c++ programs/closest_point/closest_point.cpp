// closest_point.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

int main()
{
    int x1, y1, x2, y2, best_dist = INT_MAX, dist, no_of_pts, x = 1, bx=0, by=0;

    cout << "Enter x and y: ";
    cin >> x1 >> y1;

    cout << endl << "Enter number of points: ";
    cin >> no_of_pts;

    for (int i = 0; i < no_of_pts; i++) {

        cout << endl << "Enter x" << x << " and y" << x << ":";
        cin >> x2 >> y2;

        dist = static_cast<int>(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
        x++;

        if (best_dist > dist) {
            best_dist = dist;
            bx = x2;
            by = y2;
        }

    }

    cout << "The closest Point is: (" << bx << ", " << by << ")";
    cout << endl << "Distance between the point is: " << best_dist;

    return 0;
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
