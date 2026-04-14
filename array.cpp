#include<iostream>
using namespace std;
int main(){
    int n;
    int marks[100];
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;

    for( int i =0;i<n;i++){
       
            cin>>marks[i];
        
        
    }
    cout<<"Array elements are : ";
    for( int i =0;i<n;i++){
        
            cout<<marks[i]<<"" "\n";
        
        
    }
    cout<<sizeof(marks)/sizeof(int)<<"\n";


//smallest number finiding........

int smallest = INT16_MAX;//INT_MAX = POSITIVE INFINTY
for(int i = 0;i< n;i++){
if(marks[i]<smallest){
    smallest = marks[i];
    //smalest = min(marks[i],smallest)
}

}
cout<<"Samllest marks is : "<<smallest;



//largest number finiding............

int largest = INT16_MIN;//INT_MAX = NEGATIVE INFINTY
for(int i = 0;i< n;i++){
if(marks[i]>largest){
    largest = marks[i];

    //largest = max(marks[i],largest)
}

}
cout<<"largest marks is : "<<largest;











    return 0;
}


