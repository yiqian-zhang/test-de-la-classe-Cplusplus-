#include<iostream>
#include"Area.h"
using namespace std;
int main(){
    double h1,w1,h2,w2;
    cout<<"���뷽�εĸ�:";
    cin>>h1;
    cout<<"���뷽�εĿ�:";
    cin>>w1;
    Box box(h1,w1);
    cout<<"���="<<box.Area()<<endl;
    cout<<"������������εĸ�:";
    cin>>h2;
    cout<<"������������εĿ�:";
    cin>>w2;
    Isosceles iso(h2,w2);
    cout<<"���="<<iso.Area()<<endl;
    system("Pause");
    return 0;
}    

