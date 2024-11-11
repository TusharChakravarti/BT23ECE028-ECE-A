# include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
     int size = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0;i<size;i++){
    //     cout<<arr[i]<<endl;
    // }
    // //foreach loop
    // for(int elem:arr){
    //     cout<<elem<<endl;
    // }
    // int i=0;
    // while(i<size){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

char vowels[5];
for(int i=0;i<5;i++){
    cin>>vowels[i];
}
for(int i=0;i<5;i++){
    cout<<vowels[i]<<" ";
}
for(char &elem:vowels){
    cin>>elem;
}
for(int i=0;i<5;i++){
    cout<<vowels[i]<<" ";
}

}