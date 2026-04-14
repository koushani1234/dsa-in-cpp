#include<iostream>
using namespace std;

int linear_search(int arr[],int target,int n){
    for (int  i = 0; i < n; i++)

    {
       if(arr[i] == target){

       return i;

       }

}
return -1;
}
int main(){
    int n , target;
    int  arr[100];

   
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;

    for( int i =0;i<n;i++){
       
            cin>>arr[i];
        
        
    }

    cout<<"   Array elements are : \n";
    for( int i =0;i<n;i++){
        
            cout<<arr[i]<<"" "\n";
    }

    cout<<"Enter the target element : ";
    cin>>target;
     cout<<linear_search(arr,target,n)<<endl;;

       
    return 0;
    
}