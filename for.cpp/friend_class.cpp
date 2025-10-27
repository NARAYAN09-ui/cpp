#include<iostream>
using namespace std;
class two; 
class one{
    friend class two;
    int a=23;
    public:
    void display(){
        cout<<"the value of a is: "<<a<<endl;
    }
};

class two{
   friend class one;
    int b=45;
    public:
    void display(){
        cout<<"the value of b is: "<<b<<endl;
    }
    void sum(one o){
        cout<<"the sum of a and b is: "<<o.a + b<<endl;
    }
};
int main(){    
    one o;
    two t;
    o.display();
    t.display();
    t.sum(o);
    return 0;
}
