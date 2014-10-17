#include<iostream>
using namespace std;
int main(){
    int numberinteger,num1,num5,num10;
    int i=0,integer[100];
    num1=num5=num10=0;
    cout<<"please enter number of integer: "<<endl;
   
    cin>>numberinteger;
    cout<<"please enter the integers: "<<endl;
    for(i=0;i<numberinteger;i++){
        cin>>integer[i];
        if(integer[i]==1){
           num1++;
        }else if(integer[i]==5){
           num5++;
        }else if(integer[i]==10){
           num10++;
        }
    }
    cout<<"the number of 1:\n"<<num1<<endl;
    cout<<"the number of 5:\n"<<num5<<endl;
    cout<<"the number of 10:\n"<<num10<<endl;
    return 0;
}
     
