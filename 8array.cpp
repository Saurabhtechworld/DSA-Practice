#include<iostream>
using namespace std;
// int main(){
//     int size = 5;

//     int marks[size];

//     for(int i=0; i<size; i++){
//         cin >> marks[i];
//     }

//     // double price[] = {23.4, 23.3, 33.3, };
 
//     // cout<<marks[0] << endl;


//     // LOOPS
//     for(int i = 0; i<size; i++){
//          cout<< marks[i]<<endl;
//     }
//     return 0;
// }



// int main(){
//     int nums[] = {5, 15, 22, 1, -15, -24};
//     int size = 6;

//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;

//     for(int i = 0; i<size; i++){
//         // if(nums[i] < smallest){
//         //     smallest = nums[i];
//         // }


//          smallest = min(nums[i] , smallest);
//          largest = max(nums[i] , largest);
//     }



//     cout << "smallest = "<< smallest << endl;
//     cout << "largest = "<< largest << endl;

//     return 0;
// }




// LINEAR sEARCH

// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;

// }

// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;
//     int target = 8;

//     cout<< linearSearch(arr, sz, target)<< endl;
//     return 0;
// }
  

// REVERSE ARRAY

void reverseArray(int arr[], int sz){
    int start = 0, end= sz-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start ++ ;
        end --;
    }
}
int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    reverseArray(arr, sz);

    for(int i = 0; i<sz; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}