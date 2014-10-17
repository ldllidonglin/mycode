#include<iostream>
using namespace std;
int main(){
     int date;
     cout<<"pleae input a date";
     cin>>date;
     if(date<1||date>7){
         cout<<"please input one number(1-7)"<<endl;
     }else{
         if(date==1||date==3||date==5){
             cout<<"NO"<<endl;
          }
          else{
              cout<<"YES"<<endl;
          }
     }
     return 0;
  }


     
