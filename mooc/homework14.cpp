#include<iostream>
using namespace std;
int main(){
    int num,inters[10],count[10],i=0,counttemp=0;
    cout<<"please enter num of group:"<<endl;
    cin>>num;
    cout<<"please enter inters"<<endl;
    for(i=0;i<num;i++){
        cin>>inters[i];
    }
    for(i=0;i<num;i++){
        int temp;
        temp =inters[i];
        counttemp=0;
        while(temp>0){
           if(temp%2!=0){
               counttemp++;
               temp=temp/2;
            }else{
               temp=temp/2;
            }
         }
         count[i]=counttemp;
    }
    for(i=0;i<num;i++){
       cout<<count[i]<<endl; 
    }
    return 0;
}
         

