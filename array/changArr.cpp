//call by reference.........

#include<iostream>
using namespace std;


void doubleArr(int arr[],int n){
    for( int i =0;i<n;i++){
        arr[i] = 2*arr[i];

       
    }

}


int main(){
    int n;
    int arr[100];
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;

    for( int i =0;i<n;i++){
       
            cin>>arr[i];
        
        
    }

    cout<<" prev  Array elements are : ";
    for( int i =0;i<n;i++){
        
            cout<<arr[i]<<"" "\n";
    }

    doubleArr(arr,n);

    cout<<" final Array elements are : ";
    for( int i =0;i<n;i++){
        
            cout<<arr[i]<<"" "\n";
        
        
    }


}
