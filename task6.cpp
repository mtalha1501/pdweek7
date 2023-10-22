#include<iostream>
using namespace std;
int primorial(int num);
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    int result = primorial(num);
    cout<<result;
}
int primorial(int num)
{
    int primeNumbers=0, NumberCount=0, primorial=1;
    while(NumberCount<=num){
        if((primeNumbers==2||primeNumbers==3)||(primeNumbers%2!=0||primeNumbers%3!=0)){
            NumberCount=NumberCount+1;
            primorial=primorial*primeNumbers;
        }
        primeNumbers++;
    }
    return primorial;
    } 
    
    
