#include<iostream>
using namespace std;

int checkTemperature(int temperature){
    return temperature;
}
int main(){
    int temp = checkTemperature(32);
    cout << temp <<" Degree celcius\n" ;
    return 0;
}

/*
    --How to define a function?--
returnType functionName(parameters){
    funtion body
}
    --How to call function?--
functionName(argument);   --(if parameter pass the parameter if not don't)
*/