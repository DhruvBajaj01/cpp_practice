#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int c=n;

    int rev=0;
    while(n>0){
       int ld=n%10;
      // rev=rev*10 +ld;
       rev+= pow(ld,3);
       n=n/10;


    
    }
    if(c==n){
        cout<<"amstrong";
    }
    else{
        cout<<"not ams";
    }
    return 0;
}