#include<bits/stdc++.h>
using namespace std;

int main (){
int x;
cout<<"enter the number: ";
cin>>x;


int a=x;
int b=x;
int arm=0;
double cube;
int count=0;


while(x!=0){
int last=x%10;
x=x/10;
count++;} 



while(a!=0){
int last = a%10;
a=a/10;
cube=pow(last,count);
arm = arm + cube;}


if(arm==b){
    cout<<b<<" is a armstrong number";}

else { cout<<b<<" is not a armstrong number";}


return 0;}