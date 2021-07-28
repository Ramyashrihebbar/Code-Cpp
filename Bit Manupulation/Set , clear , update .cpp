//set the bit(0 or 1) at given position

#include<iostream>
using namespace std;

int setBit(int n , int pos){
    return  (n | (1<<pos));
}

int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return  n & mask;
}
int updateBit(int n , int pos, int  value){
    int mask = ~(1<<pos);
    n = n &mask;
    return (n | (value<<pos));
}
int main(){

    //cout<<setBit(5,1);
    //cout<<clearBit(5,2);
    cout<<updateBit(5,1,1);
    return 0;
}
