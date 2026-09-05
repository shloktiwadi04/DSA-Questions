/* 

By parameterised recursion - 
#include<bits/stdc++.h>
using namespace std;


void add( int n, int sum){

if(n<1){
cout<<sum;
return;}

else {
add(n-1,sum+n);}}

int main (){

int n;
cout<<"Enter the value: ";
cin>>n; 

add(n,0);
return 0;} */


// functional recursion way
#include<bits/stdc++.h>
using namespace std;


int add( int n){

if(n==0){
return 0;}

else {
return n+add(n-1);}}

int main (){

int n;
cout<<"Enter the value: ";
cin>>n; 

int sum = add(n);
cout<<"SUM is "<<sum;

return 0;}