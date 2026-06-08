#include<iostream>
#include<vector>
using namespace std;

// int main(){
    // vector<int> vec = {1, 2, 3};
    // vector<int> vec(3,0);
    // cout<< vec[0] << endl;

//     vector<char> vec = {'a', 'b', 'c', 'd'};
//     cout<<"size = "<< vec.size()<< endl;
//     for(char val: vec){
//         cout << val << endl;
//     }
//     return 0;
// }



// int main(){
//     vector<int> vec;

//     cout << "size ="<< vec.size() << endl;
//     vec.push_back(25);
//     vec.push_back(25);
//     vec.push_back(25);

//     cout << "after push back size ="<< vec.size() <<endl;
// }



// int main(){
//     vector<char> vec = {'a', 'b', 'c', 'd'};

//     cout<< "size = "<< vec.size() << endl; //SIZE

//     vec.push_back('e');
//     cout<< "after push back size = "<< vec.size() << endl; //PUSH FUNCTION

    // cout << "Vector element : ";
    // for(char ch : vec){
    //     cout<< ch << " ";
    // } 
 
    // vec.pop_back(); //POP FUNCTION
    //     for(char val : vec){
    //     cout<< val << endl;
    // }

    // cout<< vec.front()<< endl; //FRONT FUNCTION

    //     cout<< vec.back()<< endl; //BACK FUNCTION

    //         cout<< vec.at(0)<< endl; // AT FUNCTION

//     return 0;
// }




// STATIC VS DYNAMIC ALLOCATION

int main(){
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);



    cout<< vec.size() << endl;
    cout<< vec.capacity() << endl;

    return 0; 
}



