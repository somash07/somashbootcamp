//diamond problem 2
#include<iostream>
#include<string.h>
using namespace std;
#include<conio.h>
class person{
    protected: 
    char name[50];
    int code;
    public: 
        person(char *n,int c){
            strcpy(name,n);
            code=c;
        }
        void display(){
            cout<<"name: "<<name<<endl
                <<"code:  "<<code<<endl;
        }
};
class account: virtual public person{
    protected: 
    float salary;
    public: 
        account(char *n,int c,float s): person(n,c){
            salary=s;
        }
        void display(){
            cout<<"salary: "<<salary<<endl;
        }
};
class admin: virtual public person{
    protected: 
        float exp;
    public: 
     admin(char *n,int c,int e): person(n,c){
         exp=e;
     }
     void display(){
         cout<<"no of yrs of experience: "<<exp<<endl;
     }
};
class record:public account ,public admin{
    float rec_no;
    public: 
        record(char *n,int c,float s,int e,int r): account(n,c,s), admin(n,c,e),person(n,c){
              rec_no=r;
        }
        void display(){
            cout<<"record no: "<<rec_no<<endl;
        }
};
int main(){
    record o1("somash",201,3000.00,15,201443);
    o1.person::display();
    o1.account::display();
    o1.admin::display();
    o1.display();
}
