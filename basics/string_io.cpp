/*
Name of the program: String Input/Output
Author's Name: Melusi Gumbi
Date: 21 November 2022
Brief Description: Inform the user that they should enter their name,
    take in the user's name and print it out to the screen with a
    sentence containing the user's name.
*/

//-----------string_io.cpp-------------
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout << "Enter your name: ";
    cin >> str ;
    cout << "Welcome to C++, " << str << endl;
}