#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();//flush buffer

    int i=0;
    int currlen=0;
    int maxLen=0;
    int st = 0,maxst =0;
    while(true){

        if(arr[i]==' ' || arr[i] == '\0'){
            if(currlen>maxLen){
                    maxLen=currlen;
                    maxst = st;
            }
            

            currlen=0;
            st=i+1;
        }
        else
        currlen++;
        if(arr[i] == '\0')
            break;
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0; i<maxLen ;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}
