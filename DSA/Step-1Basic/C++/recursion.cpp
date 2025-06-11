#include <bits/stdc++.h>
using namespace std;


// void f(int i,int n){
//     if(n ==0){
//         return;
//     }
//     if(i> n){
//         return ;
//     }
//     cout << "Name ";

//     f(i+1,n);
// }


// void printN(int c,int n){
     
//     if(c>n){
//         return;
//     }

//     cout << c;
//     printN(c+1,n);

// }

// void printNto1(int current, int n){

//     if(current>n){
//          return;
//     }

//     cout << n-current+1;;
//     printNto1(current+1,n);


// }


// void printNto1(int current, int n){

//     if(current< 1){
//          return;
//     }

//     cout << current;;
//     printNto1(current-1,n);


// }

// void printNto1BackTrack(int i, int n){
       
//     if(i > n){
//         return;
//     }

//     printNto1BackTrack(i+1,n);

//     cout << i;
    
// }

// int sumOfN(int i, int n){

//     if(i > n){
//         return 0;
//     }

    
//    return i + sumOfN(i+1,n);

// }

void Reversal(int i,int arr[],int n){
       
    if(i >= n){
        return ;
    }
    Reversal(i+1, arr, n);
    cout << arr[i] << " ";
}

int main(){
    int arr[]= {1,2,3,4};
    int n=sizeof(arr)/ sizeof(arr[0]);

       if (!(cin >> n)) {
        cout << "Invalid input! Please enter a valid integer.\n";
        return 1;  // Exit program
    }
    if (n == 0) {
        cout << "No output because n is zero.\n";
        return 0;
    }

    // cin >> n;
    
    Reversal(0,arr,n);
    
}