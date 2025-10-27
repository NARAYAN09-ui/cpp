#include<iostream>
using namespace std;
int volume (int a, int b, int c){
    return a*b*c;
}
float volume(int r){
    return (4/3)*3.14*r*r*r;
}
int main(){
    cout<<"the volume of sphere is : "<<volume(4)<<endl;
    cout<<"the "
} <<"volume of cuboid is : "<<volume(4,5,6)<<endl;
    return 0;