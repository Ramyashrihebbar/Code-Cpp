//o(n)

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentSum = 0 ;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0){
            currentSum = 0;//neget -ve numbers
        }
        maxSum = max(maxSum,currentSum);
    }

    cout<<maxSum;
return 0 ;
}

/*
5
-1 4 -6 7 -4
ans : 7
complexity : o(n)
*/
