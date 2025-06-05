#include <bits/stdc++.h>
using namespace std;



    // int, long, long long, float, double
    // get string line
    
    // string str;
    // getline(cin,str);
    // cout << str ;
    // return 0;
    
    // char

    //  int age;
    //  cin >> age;
    // if( age > 18 ){
    //     cout << "true";
    // }else{
    //      cout << "false";
    // }

    // int marks;
    // cin >> marks;
    // if(marks < 25){
    //     cout << "F";

    // }else if(marks >= 25 && marks < 45){
    //     cout << "E";
    // }
    // else if(marks >= 45 && marks < 50){
    //     cout << "D";
    
    // }else if(marks >= 50 && marks < 60){
    //     cout << "C";
    
    // }else if(marks >= 60 && marks < 80){
    //     cout << "B";
    
    // }else if(marks >= 80 && marks < 100){
    //     cout << "A";
    // };
    
     
    // int day;
    // cin >> day;

    // switch(day){
    //  case 1 :
    //      cout << "Monday";
    //      break;
    //  case 2 :
    //       cout << "Tuesday";
    //      break;
    //  case 3 :
    //      cout << "Wedmesday";
    //      break;
    //  case 4 :
    //     cout << "Thursday";
    //      break;
    //  case 5 :
    //     cout << "Friday";
    //      break;
    //  case 6 :
    //      cout << "Saturday";
    //      break;
      
    //  case 7 :
    //      cout << "Sunday";
    //      break;
    // }

    // Array and Strings 


    // for(int i= 0; i <= 10 ; i++){
    //     cout << "Aman" << endl;
    // }

    // int i=1;
    // while( i <= 1){
    //     cout << "Aman" << 1 << endl;
    //     i = i+1;
    // }
    // return 0;

    // do while 


    // void print1(int n){
    //     for(int i=0; i< n; i++){
    //         for(int j = 0; j< n-i; j++){
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    // }
    // void print2(int n){
    //     for(int i=0; i< n; i++){
    //         for(int j = 1; j<= n-i; j++){
    //             cout << j;
    //         }
    //         cout << endl;
    //     }
    // }
    // void print3(int n){
    //     for(int i=n-1; i >= 0; i--){
    //         //space
    //         for(int j = 0; j < n-i; j++){
    //             cout << " ";
    //         }
    //         for(int j = 0; j < 2*i+1; j++){
    //             cout << "*";
    //         }
    //         // star
    //         // space
    //         for(int j = 0; j < n-i; j++){
    //             cout << " ";
    //         }
           
    //         cout << endl;
    //     }
    // }

    void print3(int n){
        
        for(int i=n-1; i >= 0; i--){
            //space
            for(int j = 0; j < n-i; j++){
                cout << " ";
            }
            for(int j = 0; j < 2*i+1; j++){
                cout << "*";
            }
            // star
            // space
            for(int j = 0; j < n-i; j++){
                cout << " ";
            }
           
            cout << endl;
        }
    }

    // void print4(int n){
            
    //     for(int i=0;i<n;i++){

    //         //space

    //         //stars
    //         for(int j =0; j<n ;j++){
    //             cout << "*"
    //         }
    //     }
    // }


int main(){
    int x;
    cin >> x;
    print3(x);

}


