#include"circle.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//#include<time.h>
Circle::Circle(){
    srand(time(NULL));
    for(int i=0;i<20;i++)
    num[i]=rand()%100;
    sum_max=0;
    sum_min=0;
    for(int j=0;j<4;j++){
        Max[j]=0;
        Min[j]=0;
    }
}
void Circle::FindMax_Min(){
    int i,j;
    int sum[20];
    for(i=0;i<20;i++)
    sum[i]=num[i%20]+num[(i+1)%20]+num[(i+2)%20]+num[(i+3)%20];
    sum_max=sum[0];
    sum_min=sum[0];
    for(i=1;i<20;i++){
        if(sum[i]>sum_max){
            sum_max=sum[i];
            for(j=0;j<4;j++)
            Max[j]=num[(i+j)%20];
        }
        if(sum[i]<sum_min){
            sum_min=sum[i];
            for(j=0;j<4;j++)
            Min[j]=num[(i+j)%20];
        }
    }
}
void Circle::Show(){
    int i;
    for(i=0;i<20;i++)
    cout<<num[i]<<" ";
    cout<<endl;
    cout<<"连续数之和最大的4个数：";
    for(i=0;i<4;i++)
    cout<<Max[i]<<'\t';
    cout<<endl;
    cout<<"其和为：";
    cout<<sum_max<<endl;
    cout<<"连续数之和最小的4个数：";
    for(i=0;i<4;i++)
    cout<<Min[i]<<'\t';
    cout<<endl;
    cout<<"其和为：";
    cout<<sum_min<<endl;  
}               





