// merge_sorted_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num1, num2;
    int size_1, size_2, Total_size, element;

    cout << "Enter length of array_1: ";
    cin >> size_1;

    for (int i = 0; i < size_1; i++) {
        cout << endl << "Enter number for array_1 in sorted order[ "<< i <<"]: ";
        cin >> element;
        num1.push_back(element);
    }

    cout << endl << "Enter length of array_2: ";
    cin >> size_2;

    for (int i = 0; i < size_2; i++) {
        cout << endl << "Enter number for array_2 in sorted order[ " << i << "]: ";
        cin >> element;
        num2.push_back(element); 

    }

    Total_size = size_1 + size_2 - 1;
    num1.resize(Total_size + 1);          //vector can dynamically extend its size, this only happens when you use certain functions such as push_back() or insert()

    while (size_1 - 1 >= 0 && size_2 - 1 >= 0) {
        if (num1[size_1 - 1] > num2[size_2 - 1]) {
            num1[Total_size] = num1[size_1 - 1];
            size_1--;
        }
        else {
            num1[Total_size] = num2[size_2 - 1];
            size_2--;
        }
        Total_size--;
    }

    while (size_2 != 0) {
        num1[Total_size] = num2[size_2 - 1];
        size_2--;
        Total_size--;
    }

    for (int element : num1) {
        cout << element << ", ";
    }

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
