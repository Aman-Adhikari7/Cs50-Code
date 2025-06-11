
#include <bits/stdc++.h>
using namespace std;



// int reverseDigit(int n) {
    
//     int reversed=0;
//     while(n !=0){

//         int digit=n%10;

       

//         if( reversed > INT32_MAX /10 || reversed < INT32_MIN /10  ){
//             return 0;
//         }




//         reversed=reversed *10 + digit;
//         n=n/10;


//     }
//     return reversed;
// }


// int checkPalindrome(int x){

//     int realnum = x;
//     int reversed=0;
//     while( x !=0){
//           int remainder= x% 10;

//           if( reversed > INT32_MAX /10 || reversed < INT32_MIN /10  ){
//             return 0;
//           }

//           reversed= reversed *10 + remainder;
//           x=x/10;
//     };

//     return realnum == reversed;


// }

// int armStrongNumber(int x){
//       int realnum=x;
//      int total=0;
//      int digitcount=0;

//        while (realnum > 0) {
//         digitcount++;  // Counting the digits
//         realnum /= 10;
//     } 

//     realnum = x;


//       while( x > 0){
//          int remainder= x% 10;

//          if( total > INT32_MAX /10 || total< INT32_MIN /10  ){
//             return 0;
//            }

//            total  += round(pow(remainder, digitcount));
//              x=x/10;

//       }
//       return total == realnum;

// }



// using namespace std;

// void Divisor(int x) {  
//     vector<int> numbers;
//     int i = 1;  

//     while (x >= i) {  
//         if (x % i == 0) {
//             numbers.push_back(i);
//         }
//         i++;
//     }

   
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;  
// }

//  int checkPrime(int x){
//       int counter=0;
//     for(int i=1; i*i<=x;i++){
        
//         if(x% i ==0){
//            counter++;
//         }
//         if((x/i) !=i){
//             counter++;
//         }
        
//     }
//     if(counter == 2){
//             cout << true;
//         } else cout << false;
//  }


//  int GCD(int n1,int n2){
     
//     for(int i=min(n1,n2);i>=1;i--){
//         if(n1 % i == 0 && n2 % i == 0){
//             cout << i;
//             break;
//         }
//     }
//  }

int gcdAlgo(int x,int y){
      int num1 = x;
      int num2 =y;
        int gcd;
     while (num1 >0 && num2 >0){

        if(num1 > num2){
            num1= num1% num2;
        }else if(num2 > num1){
             num2 = num2% num1;
        }
     }
     if( num1 ==0){
        cout << num2;
     }else if( num2 == 0){
        cout << num1;
     }

}
  


int main() {
    int num1 = 52;
    int num2 = 10;

    gcdAlgo(num1,num2);

    return 0;
}



