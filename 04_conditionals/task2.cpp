#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int hour;
    cout << "enter the current hour(0-23): ";
    cin >> hour;
    if(hour >= 8 && hour <= 18){
        cout << "shop is open \n";
    }
    else{
        cout << "shop is close \n";
    }
    return 0;

}