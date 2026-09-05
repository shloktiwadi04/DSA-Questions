#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;
    int b=x;
    long long rev = 0;
if(b>=0){
    while (x != 0) {
        int last = x % 10;
        x = x / 10;
        rev = rev * 10 + last;}

    if (rev >= -2147483648LL && rev <= 2147483647LL){    
    if(b==rev){
    cout<<"Pallindrome";}

if(b!=rev ){
cout<<"Not pallindrome";}}

else{cout << 0;}}

else{ cout<<"not pallindrome";}

return 0;}