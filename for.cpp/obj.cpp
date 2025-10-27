#include<iostream>
using namespace std;
class person {
string name;
int age;
int salary;
public :
person() {
    name = "pushpa";
    age = 19;
    salary = 150;
}

int retrive(){
    cout<<"name is : "<<name<<endl;
    cout<<"age is : "<<age<<endl;
    cout<<"salary is : "<<salary<<endl;
    return 0;
} };
class change_age {
public:
    int operator(){
        int new_age;
        cout << "enter new age : ";
        cin >> new_age;
        return new_age;
    }
};
class change_salary {
public:
    int operator()() {
        int new_salary;
        cout << "enter new salary : ";
        cin >> new_salary;
        return new_salary;
    }
};
int display(person p, change_age g, change_salary s){
    cout<<"name is : "<<p.retrive()<<endl;
    cout<<"age is : "<<g()<<endl;
    cout<<"salary is : "<<s()<<endl;
    return 0;
};
int main (){
    person p;
    change_age g;   
    change_salary s;
    display(p, g, s);
    return 0;
}   
