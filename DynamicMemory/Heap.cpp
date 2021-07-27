#include<iostream>
using namespace std;

int main(){
    int a=10; //stored in stack
    int *p=new int(); //allocate memory in heap
    *p=10;
    delete(p);//dealocate memory in heap

    p= new int[4]; //array in heap(reuse)

    delete[] p; //block of memory allocated will be deleted

    p=NULL;//deleting pointer(after main execution p destroyed automatically)
    return 0;
}
