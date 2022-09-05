#include<iostream>
using namespace std;
int main(){
    int n,i,a[n],max=INT16_MIN,min=INT16_MAX;
    cout<<"enter the size of array  :";
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"the max number is "<<max<<endl;
    cout<<"the min number is "<<min<<endl;
}
