#include<iostream>
using namespace std;


int main(){
    int n;
    cin>> n;
    int revNum = 0;
    int dup = n;
    while(n>0){

        int last digit = n%10;
        revNum = (revNum*10) + last digit;
        n = n/10;


    }
    if(revNum == dup) cout<<"true";
    else cout<<"false";

}