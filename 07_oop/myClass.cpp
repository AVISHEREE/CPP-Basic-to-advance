#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        //dataType attributes;
        string teaName;
        int servings;
        vector<string> ingredients;//list of ingredients for the tea
        //Member Functions
        void displayChaiDetails(){
            cout << "tea names: " << teaName << endl;
            cout << "servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingrident:ingredients){
                cout << ingrident << " ";
            }
            cout << endl;
        }
};

int main(){
    Chai chaiOne;
    chaiOne.teaName = "Kadak chai";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"water","milk","tea","adhrak","ilaichi"};
    chaiOne.displayChaiDetails();
    Chai chaiTwo;
    chaiTwo.teaName = "lemon tea";
    chaiTwo.servings = 1;
    chaiTwo.ingredients = {"water","milk","tea","lemon"};
    chaiTwo.displayChaiDetails();

    return 0;
}