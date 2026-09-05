#include<bits/stdc++.h>
using namespace std;

int main (){
int x;
cout<<"enter the number: ";
cin>>x;

int count=0;

for( int i=1 ; i<=x ; i++){
if(x%i==0){
count++;}}

if(count==2){
cout<<"Primenumber";}

else {cout<<"Not a Primenumber";}

return 0;}