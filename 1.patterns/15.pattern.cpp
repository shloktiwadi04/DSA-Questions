#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    

    for (int i = 1; i <= n; i++) {
    for( int j=65 ; j<=65+n-i; j++){
    cout<<(char)j;}
    cout<<endl;}
    
    
    return 0;}