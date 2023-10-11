#include <iostream>

using namespace std;

bool accept2()
{
    int tries = 1;
    while( tries < 4){
        cout << "wish to proceed? y/n \n";
        char answer = 0;
        cin >> answer;

        switch (answer){
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "Sorry, I don't understand \n";
            ++ tries;
        }
    }
}