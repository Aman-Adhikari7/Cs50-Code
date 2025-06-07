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

    // void print3(int n){
    //          int half=(n+1)/2;
    //          for(int i=0; i < half; i++){
    //         //space
    //         for(int j = 0; j < half-i+1; j++){
    //             cout << " ";
    //         }
    //         for(int j = 0; j < 2*i+1; j++){
    //             cout << "*";
    //         }
    //         // star
    //         // space
    //         for(int j = 0; j < half-i+1; j++){
    //             cout << " ";
    //         }
           
    //         cout << endl;
    //     }

        
    //     for(int i=n/2-1; i >= 0; i--){
    //         //space
    //         for(int j = 0; j < half-i+1; j++){
    //             cout << " ";
    //         }
    //         for(int j = 0; j < 2*i+1; j++){
    //             cout << "*";
    //         }
    //         // star
    //         // space
    //         for(int j = 0; j < half-i; j++){
    //             cout << " ";
    //         }
           
    //         cout << endl;
    //     }
    // }

    // void print4(int n){
            
    //     for(int i=0;i<n;i++){

    //         //space

    //         //stars
    //         for(int j =0; j<n ;j++){
    //             cout << "*"
    //         }
    //     }
    // }

    // void Diamondhalf(int n){
    //     int half=(n+1)/2;
    //     for(int i=0;i < half;i++){
    //         for(int j=0; j<=i;j++){
    //               cout << "*";
    //         }
    //         cout << endl;
    //     }
    //     for(int i=half-1;i>0;i--){
    //         for(int j=0;j < i;j++){
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    // }

    // void print5(int n){
    //     int start =1;
    //      for(int i=0;i< n;i++){

    //         if(i%2 ==0) start =1;
    //         else start =0;

    //         for(int j=0;j <i+1;j++){
    //             cout << start;
    //             start =1 - start;
    //         }
    //         cout << endl;
    //      }
    // }

    // void print6(int n){
        
    //      for(int i=1;i<=n;i++){

    //         for(int j=1;j<=i;j++){
    //             cout << j;

    //         }
    //         for(int j=0;j<2*(n-i);j++){
    //                cout << " ";
    //         }

    //         for(int j=i;j>=1;j--){
    //             cout <<j;
    //         }
    //         cout << endl;
    //      }
    // }
    // void print7(int n){
    //     int start=0;
    //      for(int i=1;i<=n;i++){
            
    //         for(int j=1;j<=i;j++){
    //             cout << start+1;
    //             start++;
    //             cout << " ";

    //         }
               
    //         cout << endl;
    //      }
    // }
    // void print8(int n){
        
    //      for(int i=0;i<n;i++){
            
    //      for(char ch= 'A'; ch <='A'+i; ch++){
    //              cout << ch;
    //      }
               
    //         cout << endl;
    //      }
    // }
    // void print9(int n){
        
    //      for(int i=n;i>=0;i--){
            
    //      for(char ch= 'A'; ch <'A'+i; ch++){
    //              cout << ch;
    //      }
               
    //         cout << endl;
    //      }
    // }
    // void print10(int n){
    //      char letter='A';
    //      for(int i=1;i<=n;i++){
            
    //      for(char ch= 'A'; ch <'A'+i; ch++){
    //              cout << letter;
    //      }
    //          letter='A'+i;
               
    //         cout << endl;
    //      }
    // }

    // void print11(int n){
    //     for(int i=0;i < n;i++){

    //      for(int j=0;j<n-i-1;j++){
    //         cout << " ";
    //      }
    //      //character
    //      char ch= 'A';
    //      int breakpoint =(2*i+1)/2;
    //      for(int j=0;j<2*i+1;j++){
    //           cout << ch;
    //          if( j >= breakpoint){
    //             ch--;
    //          }else{
    //             ch++;
    //          }
    //      }

    //      for(int j=0;j<n-i-1;j++){
    //         cout << " ";
    //      }
               
    //         cout << endl;
    //      }
    // }

    // void print12(int n){
        
    //     for(int i=0;i< n;i++){

    //         for(char ch='E'-i; ch <= 'E';ch++){
    //               cout << ch << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    // void print13(int n){
    //          int half=(n+1)/2;
    //          for(int i=0; i < half; i++){
    //         //space
    //         for(int j = 0; j < half-i; j++){
    //             cout << "*";
    //         }
    //         for(int j = 0; j < 2*i; j++){
    //             cout << " ";
    //         }
    //         // star
    //         // space
    //         for(int j = 0; j < half-i; j++){
    //             cout << "*";
    //         }
           
    //         cout << endl;
    //     }

        
    //     for(int i=n/2-1; i >= 0; i--){
    //         //space
    //         for(int j = 0; j < half-i; j++){
    //             cout << "*";
    //         }
    //         for(int j = 0; j < 2*i; j++){
    //             cout << " ";
    //         }
    //         // star
    //         // space
    //         for(int j = 0; j < half-i; j++){
    //             cout << "*";
    //         }
           
    //         cout << endl;
    //     }
    // }

    // void print13(int n){

    //     int spc=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=1;j<=n-i;j++){
    //             cout << "*";
    //         }
    //         for( int j=0; j<spc;j++){
    //             cout << " ";
    //         }

    //         for(int j=1;j<=n-i;j++){
    //             cout << "*";
    //         }

    //         spc+=2;
    //         cout << endl;
    //     }
    //      int space2=8;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<=i;j++){
    //             cout << "*";
    //         }
    //          for( int j=0; j<space2;j++){
    //             cout << " ";
    //         }
    //         for(int j=0;j<=i;j++){
    //             cout << "*";
    //         }
            
    //         space2-=2;
    //         cout << endl;
    //     }
    // }

    // void print14(int n){
    //     int spaces=2 * (n - 1);
       
    //     for(int i=0;i < n;i++){

    //         for(int j=0; j<=i;j++){
    //             cout << "*";
    //         }
    //         for(int j=0; j<spaces;j++){
    //             cout << " ";
    //         }
    //          for(int j=0; j<=i;j++){
    //             cout << "*";
    //         }
    //         spaces-=2;
    //         cout << endl;
    // }
            
    //         int spaces2=2;
           
    //         for(int i=1;i<n;i++){
                
    //             for(int j=0;j<n-i;j++){
    //                cout << "*";
    //             }
    //             for(int j=0;j<spaces2;j++){
    //                 cout << " ";
    //             }
    //             for(int j=0;j<n-i;j++){
    //                cout << "*";
    //             }
    //             spaces2 +=2;
    //             cout << endl;
                
    //         }
        
    // }

    // void print15(int n){

    //     //upper half
    //     int spaces2=0;
    //     for(int i=0;i<n;i++){

    //         for(int j=n-i;j>0;j--){
    //             cout << "*";
    //         }
    //         for(int j=0;j< spaces2;j++){
    //             cout << " ";
    //         }
    //         for(int j=n-i;j>0;j--){
    //             cout << "*";
    //         }
    //         spaces2+=2;
    //         cout << endl;
    //     }



    //     // Lower half
    //     int spaces=n*2-2;
    //     for(int i=0;i<n;i++){

    //         for(int j=0;j<=i;j++){
    //             cout << "*";
    //         }
    //         for(int j=0;j<spaces;j++){
    //             cout << " ";
    //         }
    //         for(int j=0;j<=i;j++){
    //             cout << "*";
    //         }
    //         spaces-=2;
    //         cout << endl;
    //     }
    // }

    // void print16( int n){
    //     for(int i=0;i<n;i++){
    //         for(int j =0;j<n;j++){
    //           if(i==0 || j==0 || i == n-1 || j== n-1){
    //             cout << "*";
    //           }else cout << " ";
    //         }
    //         cout << endl;
    //     }
    // }

// int main(){
//     int x;
//     cin >> x;
//     print16(x);

// }

void explainSet(){
  set<int>st;
  st.insert(1); 
  st.emplace(2);
  st.insert(3);
  auto it= st.find(3);
   st.erase(1);

      for (int val : st) {
         cout << val << " ";
       }

    cout << endl;

  
}

int main() {
    explainSet();
}


