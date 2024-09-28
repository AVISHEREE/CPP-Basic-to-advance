#include <iostream>
#include<string>
using namespace std;

int main() {
    string enterYouchoice;
    cout << "Enter your choice: ";
    getline(cin,enterYouchoice);
    if(enterYouchoice == "Green Tea"){
        cout << "we have this tea \n";
    }
    return 0;
}