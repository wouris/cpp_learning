#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string sentence = "wouris learning";
                    // 012345 ...

    // count lenght of 'sentence'
        cout << "The lenght of the 'sentence' - " << sentence.length() << endl;

    // find specific index or word in 'sentence'. This will print number at which index number 'learning' occurs
    // parameters - [symbol , starting from]
        cout << "'learning' in 'sentence' is in position- " << sentence.find("learning",0) << endl;
    
    // this will create a substring
    // parameters - [starting from , lenght]
        cout << sentence.substr(2,7) << endl;
        // you can also store this indormation in a variable and then print it
        string substring = sentence.substr(2,7);
    
    // printing or selecting specific index in 'sentence' 
        cout << "4th index in string 'sentence' - " << sentence[3] << endl;
    
    // can change index in 'sentence'
        sentence[3] = 'B';
        cout << "4th index in string 'sentence' after changing - " << sentence[3] << endl;

    return 0;
}