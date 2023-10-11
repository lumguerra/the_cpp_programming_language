#include <iostream>

using namespace std;

bool accept2()
{
    cout << "wish to proceed? y/n \n";

    char answer = 0;
    cin >> answer;

    switch (answer){
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no\n";
            return false;
    }
}