//finding the bit(0 or 1) at given position

#include<iostream>
using namespace std;

int getBit(int n , int pos){
    return  ((n & (1<<pos))!-=0);
}
int main(){

    cout<<getBit(5,2);
    return 0;
}
