#include<bits/stdc++.h>
using namespace std;


void name ( int i, int n){

if(i>n){
return;}

else {

cout<<"Shlok Tiwadi"<<endl;
name(i+1,n);}}

int main (){

int n;
cout<<"Enter the value: ";
cin>>n; 

name(1,n);


return 0;}