#include<iostream>
using namespace std;
class person {
public :
int retrive(string a , int b ,int c){
    cout<<"name is : "<<a<<endl;
    cout<<"age is : "<<b<<endl;
    cout<<"salary is : "<<c<<endl;
} };
class change_age {
public:
    int operator()() {
        int ag;
        cout << "enter new age : ";
        cin >> ag;
        return ag;
    }
};
class change_salary {
public:
    int change_salary() {
        int sa;
        cout << "enter new salary : ";
        cin >> sa;
        return sa;
    }
};
int display(person p, change_age g, change_salary s){
    cout<<"name is : "<<p.a<<endl;
    cout<<"age is : "<<g()<<endl;
    cout<<"salary is : "<<s()<<endl;
};
int main (){

}