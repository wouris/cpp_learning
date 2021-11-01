#include <iostream>
#include <string>

using namespace std;

int main() {

    int luckyNumbers[20] = {4, 8, 15, 16, 22, 42};

    luckyNumbers[10] = 19;
    cout << luckyNumbers[10];

    return 0;
}