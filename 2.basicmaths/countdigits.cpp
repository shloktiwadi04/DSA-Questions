#include<bits/stdc++.h>
using namespace std;
int main () {

int x;
cout<<"enter any digit: ";
cin>>x;

int count=0;
while(x!=0){   // this code not work if the digit start from 0 like 045,034
int last =x%10;
x=x/10;
count++;}

cout<<"Number of digits= "<<count;
return 0;}

