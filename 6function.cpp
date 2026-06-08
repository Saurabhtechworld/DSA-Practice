#include<iostream>
using namespace std;

// void printHello(){
//     cout<<"hello\n";
// }
// int main(){
//    printHello();
// } 

// SUM OF TWO NUMBERS
// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }
// int main(){
//     cout<< sum(10, 5);
//     return 0;
// }



// CALCULATE SUM OF NUMBERS FROM 1 TO N

// int sumN(int n){
//     int sum=0;

//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     return sum;
// }
// int main(){
//     cout<< sumN(5) << endl;
//     cout<< sumN(15) << endl;
//     return 0;
// }




// CALCULATE N FACTORIAL
// int factorialN(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return  fact;
// }
// int main(){
//     cout<< factorialN(4)<<endl;
//     return 0; 
// }



// FUNCTION IN MEMORY
// void fun(){
//     if(condn){

//     }else if(condn){
//         return;
//     }else{

//     }
// }
// int main(){
//     fun();
//     return 0;
// }



// CALCULATE SUM OF DIGITE

// int sumOfDigits(int num){
//     int digSum = 0;

//     while(num > 0){
//       int lastDig = num%10;
//       num /= 10;

//       digSum += lastDig;
//     }
//     return digSum;
// }

// int main(){
//     cout<<"sum = "<<sumOfDigits(2356)<<endl;
//     return 0;
// }


// BINOMIAL COFFICIENT



int factorial(int n){
    int fact = 1;

    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n ,int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int main(){
    int n=8, r=2;
    cout<< nCr(n, r)<<endl;
    return 0;
 

}


