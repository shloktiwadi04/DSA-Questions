/* #include<bits/stdc++.h>
using namespace std;

int main (){
// phele 2 numbers lunga

int a,b;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;


for( int i = min(a,b) ; i>=1 ; i--){
if(a%i==0 && b%i==0){
cout<<"GCD is "<<i;
break;}}

return 0;}

*/

// by eucliodean method
#include<bits/stdc++.h>
using namespace std;

int main (){

int a,b;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;


while ( a> 0 && b>0){

if(a>b){
a=a%b;}

else { b=b%a;}}

if(a==0){
cout<<"GCD:"<<b;}

else{ cout<<"GCD:"<<a;}

return 0;}