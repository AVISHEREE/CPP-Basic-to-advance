#include<iostream>
#include<string>

using namespace std;

int main(){
    int totalNumberOfCups;
    cout << "Enter Total number of cup: ";
    cin >> totalNumberOfCups;
    if(totalNumberOfCups > 20){
        cout << "congatultion you got GOLD badge";
    }
    else if(totalNumberOfCups >= 10){
        cout << "congatultion you got silver badge";
    }
    cout << "your total cup is " << totalNumberOfCups << endl;
    
    return 0;
}