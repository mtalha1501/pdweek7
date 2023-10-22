#include<iostream>
using namespace std;
bool prime(int num){
    int count=0;
    for(int x=2;x<=num;x++){
        if (num%x==0){
            count=count+1;
        }
    }
        if (count==1){
            return 1;
        }
        if (count!=1){
            return 0;
        }

}
main(){
    int num;
    cout<<"Enter Number: ";
    cin>> num;
    int result = prime(num);
    cout<<result;
}