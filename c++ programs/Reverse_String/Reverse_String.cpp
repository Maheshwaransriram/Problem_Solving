// Reverse_String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

using namespace std;

void reverse_string(char* string) {
    int len = strlen(string);

    for (int i = 0; i < len / 2; i++) {
        char temp = string[len - i - 1];
        string[len - i - 1] = string[i];
        string[i] = temp;
    }
}
 
int main()
{
    char string[100];

    fgets(string, sizeof(string), stdin);
    reverse_string(string);

    cout << string;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
