#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string teaNaam, int servs): teaName(teaNaam),servings(servs){
            cout<<"Tea constructor called"<<endl;
        }
        virtual void brew() const{
            cout<<"Brewing " << teaName << endl;
        }
        virtual void serv() const{
            cout<<"Serving " << teaName << servings << "cup of Tea" << endl;
        }
        virtual ~Tea(){
            cout << "Tea Distructor Called for"<< teaName << endl;
        }
};

class GreenTea: public Tea{
    public:
        GreenTea(int serv): Tea("GreenTea",serv){
            cout<<"GreenTea constructor called"<<endl;
        }
        void brew() const override{
            cout<<"Brewing " << teaName << "By GreenTea " << endl;
        }
        ~GreenTea(){
            cout<<"Green tea Destructor Called" << endl;
        }
};

class MasalaChai: public Tea{
    public:
        MasalaChai(int serv): Tea("MasalaChai",serv){
            cout<<"MasalaChai constructor called"<<endl;
        }
        void brew() const override final {
            cout<<"Brewing " << teaName << "By MasalaChai" << endl;
        }
        ~MasalaChai(){
            cout<<"Green tea Destructor Called" << endl;
        }
};

class SpicyTea: public MasalaChai{
    public:
        // void brew() const override{
            
        // }
};

int main(){
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaChai(3);
    tea1->brew();
    tea1->serv();
    tea2->brew();
    tea2->serv();
    tea1->~Tea();
    tea2->~Tea();

    return 0;
}