#include<iostream>
#include"Area.h"
using namespace std;
int main(){
    double h1,w1,h2,w2;
    cout<<"输入方形的高:";
    cin>>h1;
    cout<<"输入方形的宽:";
    cin>>w1;
    Box box(h1,w1);
    cout<<"面积="<<box.Area()<<endl;
    cout<<"输入等腰三角形的高:";
    cin>>h2;
    cout<<"输入等腰三角形的宽:";
    cin>>w2;
    Isosceles iso(h2,w2);
    cout<<"面积="<<iso.Area()<<endl;
    system("Pause");
    return 0;
}    

