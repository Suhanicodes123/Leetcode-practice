#include<iostream>
using namespace std;


int main(){
    int n;
    cin>> n;
    dup = n;
    sum = 0;
    while(n>0){

        int last digit = n%10;
        sum = sum +(last digit*last digit*last digit);
        n = n/10;


    }
    if(sum == dup) cout<<"true";
    else cout<<"false";
}