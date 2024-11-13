#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;
        
        //delligetting constructor
        Chai(string name): Chai(name,1,{"water","tea","jagery"}){}

        //main constructor
        Chai(string name,int serv,vector<string> ingr){
            teaName = name;
            servings = serv;
            ingredients = ingr;
            cout << "main constructor called" <<endl;
        }
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
    Chai quickChai("Quick Chai");
    Chai quickChai2("Quick Chai",2,{"water","tea"});
    quickChai.displayChaiDetails();
    quickChai2.displayChaiDetails();

    return 0;
}