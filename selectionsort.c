# include<stdio.h>
void printArray(int arr[],int n){
for(int i= 0 ;i<n;i++){
    printf("%d\n",arr[i]);
}}

void seleactionsort(int arr[],int n){

    int indexofmin;
    int temp;
    int j,i;
    for( i = 0;i<n-1;i++){
        indexofmin = i;
        for(j = i+1;j<n;j++){
             if(arr[j]<arr[indexofmin]){
            indexofmin=j;}
}
            
                 temp = arr[i];
        arr[i]=arr[indexofmin];
        arr[indexofmin]=temp;
    

        }

      
}

int main(){
    int arr[100]={3,5,2,13,12};
    int n = 5;
    seleactionsort(arr,n);
    printArray(arr,n);
}