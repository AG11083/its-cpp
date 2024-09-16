// Learning C++
// ask the name of the user
// and print a message with the name just inserted

#include <iostream>
#include <string>

using namespace std;

int main () {
    string name;

    cout << "Enter a name: " << flush;
    cin >> name;

    cout << "Hi " << name << endl;

    cout << endl << endl;

    return(0);
}
