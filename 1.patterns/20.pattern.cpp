#include <iostream>
using namespace std;

int main() {
int n = 10; 

int space=2*(n-1);
for( int i =1 ; i<=n ; i++){
for( int j =1 ; j<=i ; j++){
cout<<"*";}


for ( int k=1 ; k<=space ; k++){
cout<<" ";}



for( int j =1 ; j<=i ; j++){
cout<<"*";}
cout<<endl;
space=space-2;} 


int bspace=2;
for ( int i =1 ; i<=n-1 ; i++){
for( int j=1 ; j<=n-i ; j++){
cout<<"*";}


for( int k=1 ; k<=bspace ; k++){
cout<<" ";}

for( int j=1 ; j<=n-i ; j++){
cout<<"*";}

bspace=bspace+2;
cout<<endl;}
return 0;}