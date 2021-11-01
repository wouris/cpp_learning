#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int age;

    cout << "What is your age? - ";
    cin >> age;
    
    cout << "You are " << age << " years old" << endl;

    // for entering string, you need to use different command other than 'cin'
    string name;

    cin.ignore(); /*!!! cin>> will leave newlines in the buffer when the user presses enter. getline() reads this as the user having pressed enter to "skip" the input.
                  You can use cin.ignore() to get rid of those extra characters before using getline().   !!!*/
    cout << "What is your name? - ";
    // getline (command, variable)
    getline(cin, name);
    cout << "Hello " << name;
    return 0;
}