#include<iostream>
using namespace std;

class Tea{
    public:
        virtual void prepareTeaIngredients() = 0;//pure virtual function
        virtual void brew() = 0;//pure virtual function
        virtual void serv() = 0;//pure virtual function
        void makeTea(){
            prepareTeaIngredients();
            brew();
            serv();
        }
};

class  GreenTea : public Tea{
public:
    void prepareTeaIngredients() override {
        cout << "green Leaves and water is ready" << endl;
    }
    void brew() override {
        cout << "brewing green tea" << endl;
        cout << "green tea brewed" << endl;
    }
     void serv() override {
        cout << "green tea served" << endl;
    }
};

class  MasalaTea : public Tea{
public:
    void prepareTeaIngredients() override {
        cout << "tea Leaves and water is ready" << endl;
    }
    void brew() override {
        cout << "brewing MasalaTea" << endl;
        cout << "MasalaTea brewed" << endl;
    }
     void serv() override {
        cout << "green tea served" << endl;
    }
};

int main(){
    GreenTea greenTea;
    MasalaTea masalaTea;
    Tea *pgreenTea = &greenTea;
    Tea *pmasalaTea = &masalaTea;
    pgreenTea->makeTea();
    pmasalaTea->makeTea();
}