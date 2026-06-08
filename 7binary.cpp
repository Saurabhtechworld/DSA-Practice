#include<iostream>
using namespace std;
 
// int decTobinary( int decNum){
//     int ans = 0, pow = 1;

//     while(decNum > 0){
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;
// }

// int main(){
//     int decNum = 50;

//     cout<< decTobinary (decNum)<< endl;
//     return 0;
// }




// BINARY TO DECIMAL
int binToDecimal (int binNum){
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum%10;
        ans += rem*pow;
        
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int binNum = 101;
    cout<< binToDecimal(binNum)<<endl;
}