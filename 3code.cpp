#include <iostream>
using namespace std;

int main(){
    // int age;
    // cout << "enter age : ";
    // cin>> age;

    // if(age >= 18){
    //     cout <<"you can vote\n";
    // } else{
    //     cout<<"you can`t vote\n";
    // }
    // return 0;



    // int n;
    // cout<<"Enter number : ";
    // cin >> n;

    // if(n%2 == 0){
    //     cout<< "even\n";
    // }else{
    //     cout<< "odd\n";
    // }
    // return 0;


    // char ch;
    // cout<< "enter char :";
    // cin>> ch;

    // if(ch >= 'a' && ch <= 'z'){
    //     cout << "lowercase\n";
    // }else{
    //     cout<< "uppercase\n";
    // }
    // return 0; 




    // TERNARY VERSION

    // int n = -45;
    // cout<<(n >= 0 ? "positive" : "negative")<< endl;
    // return 0;  


    




    // LOOPS
// while loop

    // int count = 1;

    // while(count <= 10){
    //     cout<< count << " ";
    //     count++;
    // }
    // cout<<endl;
    // return 0;


    //for loop
    // int n = 20;
    
    // for(int i = 1; i<=n; i++){
    //     cout<< i << " ";
    // }
    // cout<<endl;
    // return 0;



//SUM OF 1 TO NUMBERS

    // int n = 5;
    // int sum = 0;

    // for(int i = 1; i<=n; i++){
    //     sum += i;
    // }
    // cout<< "sum = " << sum <<endl;
    // return 0;


    // int n = 5; 
    // int sum = 0, i=1;

    // while(i<=n){
    //     sum = sum + i;
    //     i++;
    // }
    // cout<<"sum from 1 to "<<n<<" is: "<<sum;
    // return 0;

//PRINT ODD NUMBER
    int n = 10;

    for(int i = 1; i<=n; i++){
        if(i%2 != 0){
            cout<< i<< " ";
        }
      
    }
      cout<< endl;
        return 0;
}