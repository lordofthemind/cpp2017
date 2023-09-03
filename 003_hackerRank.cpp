#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int fi, si;
    cin >> fi;
    cin >> si;
    for(int i = fi; i <= si; i++){
        if (i >= 1 && i <= 9) {
            if (i == 1) {
                cout << "one" << endl;
            } else if (i == 2) {
                cout << "two" << endl;
            } else if (i == 3) {
                cout << "three" << endl;
            } else if (i == 4) {
                cout << "four" << endl;
            } else if (i == 5) {
                cout << "five" << endl;
            } else if (i == 6) {
                cout << "six" << endl;
            } else if (i == 7) {
                cout << "seven" << endl;
            } else if (i == 8) {
                cout << "eight" << endl;
            } else{
                cout << "nine" << endl;
            }
        } else if (9 < i) {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int fi, si;
    cin >> fi >> si;
    
    string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = fi; i <= si; i++) {
        if (i >= 1 && i <= 9) {
            cout << numbers[i - 1] << endl;
        } else if (i > 9) {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    
    return 0;
}
