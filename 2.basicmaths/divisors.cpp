#include<bits/stdc++.h>
using namespace std;

int main (){
int x;
cout<<"enter the number: ";
cin>>x;

cout<<"Divisors are : ";
for( int i=1; i<=x ; i++){
if(x%i==0){
cout<<i<<" ";}}

return 0;}