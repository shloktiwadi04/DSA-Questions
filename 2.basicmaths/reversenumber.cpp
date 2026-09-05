#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;

    long long rev = 0;

    while (x != 0) {
        int last = x % 10;
        x = x / 10;
        rev = rev * 10 + last;}

    if (rev >= -2147483648LL && rev <= 2147483647LL){
        cout << rev;}
    else{cout << 0;}

    return 0;}