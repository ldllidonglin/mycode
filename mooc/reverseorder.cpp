#include<iostream>
using namespace std;
int main(){
    int num,numbers[100],i;
    cout<<"please enter number of figure:"<<endl;
    cin>>num;
    cout<<"please enter figures: "<<endl;
    for(i=0;i<num;i++){
        cin>>numbers[i];
    }
    int changenum=0;
    changenum=num/2;
    for(i=0;i<changenum;i++){
        int temp=numbers[i];
        numbers[i]=numbers[num-i-1];
        numbers[num-i-1]=temp;
     }
     for(i=0;i<num;i++){
        cout<<numbers[i]<<" ";
      }
      return 0;
} 
