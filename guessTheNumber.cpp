#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 


using namespace std;

int main() {

    srand((unsigned)time(0));
    int gamenum = rand() % 10 + 1;
    int usernum;
    int x=1;
    int tries = 3;

    cout << "Guess the number between 0 and 10 (3 tries): ";

    do{
        cin >> usernum;
        tries -= 1;
        cout << gamenum << endl;
        if (usernum < gamenum) {
            cout << "Number is higher..." << tries << " tries" << endl;
        }else if(usernum > gamenum) {
            cout << "Number is lower..." << tries << " tries" << endl;
        }else if(usernum = gamenum) {
            x=0;
        }
    }while(x == 1 && tries != 0);

    if (tries == 0){
        cout << "You lost...";
    }else{
        cout << "You won!";
    }

    return 0;
}