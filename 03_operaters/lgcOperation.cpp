#include<iostream>
#include<string>

using namespace std;

int main(){
    bool isStudent;
    int numberOfCups;
    cout << "are you a student (1 for YES 0 for NO): ";
    cin >> isStudent;
    cout << "How many cups have you purchased";
    cin >> numberOfCups;
    if(isStudent || numberOfCups > 15){
        cout << "you are eligible for a disount " << endl;
    }
    else{
        cout << "you are NOT eligible for a disount " << endl;
    }

    return 0;
}