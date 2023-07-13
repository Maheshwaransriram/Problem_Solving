// RichestCustomerWealth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row, col, ele;

    cout << "Enter no of rows : ";
    cin >> row;

    cout << endl << "Enter no of columns : ";
    cin >> col;

    vector<vector<int>> accounts(row, vector<int>(col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << endl << "Enter the element [" << i << "][" << j << "] : ";
            cin >> ele;
            accounts[i][j] = ele;
        }
    }
    
    int len = size(accounts), sum{ 0 }, res{ 0 };

    for (vector<int> amt : accounts) {
        sum = 0;
        for (int i = 0; i < size(amt); i++) {
            sum += amt[i];
        }

        if (res < sum) {
            res = sum;
        }
   
    }
    cout << res;
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
