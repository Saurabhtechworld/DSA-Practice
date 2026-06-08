#include <iostream>
using namespace std;
int main(){
    //    int n =4;

    // int num=1;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j>0; j--){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // return 0;  

    int n=4;
    //  SPACE : n-i-1
    for(int i=0; i<n; i++){
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
    }
    

    // nums
    for(int j=1; j<=i+1; j++){
        cout<< j;
    }
    

    // nums2
    for (int j = i; j>0; j--)
    {
        cout<< j;
    }
    cout<<endl;
    
}
}