# include<stdio.h>

int linearsearch(int arr[],int elem,int n);
int binarysearch(int arr[],int elem,int n);


int main(){

    int arr[100],n,elem;

    printf("enter the array size");
    scanf("%d",&n);
printf("enter the elements of an  array");


for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);

    /* code */
}

printf("enter the element to be found");
scanf("%d",&elem);

//  printf("%d",linearsearch(arr,elem,n));
 printf("%d",binarysearch(arr,elem,n));

return 0;
}
 
int linearsearch(int arr[],int elem, int n){
   
for (int i = 0; i < n; i++)
 
{


if(arr[i] == elem){
    return i;
    }

    
    /* code */
}
return -1;
}

int binarysearch(int arr[],int elem,int n){
    int min = 0 ,max = n-1 ,mid;
    // keep searching until low<=high

    while(max>=min){
         mid = (max+min)/2;

        
   
   

    // if(elem == arr[mid] ){

    //     return mid;
    // }
    // if(arr[mid]>elem){
    // max = mid-1;
    // }
    
    // else{
    //     min = mid+1;
    // }
    } 
    return -1;

}
