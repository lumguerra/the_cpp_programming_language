#include <iostream>

using namespace std;

bool accept()
{
    cout << "wish to proceed? y/n \n";

    char answer = 0;
    cin >> answer;

    if ( answer == 'y') return true;
    return false;
}