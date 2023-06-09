/*Given an array of nonnegative integers, design a linear algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)*/
#include<stdio.h>
int linear_search(int* A,int k,int n){
    int i,count=0;
    for(i=0;i<n;i++){
        count++;
        if(A[i]==k){
            return count;
        }
    }
    return count;
}
int main(){
    int t,n,arr[50],k;
    printf("Enter Number of test Cases: ");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("Enter Size of an Array : ");
        scanf("%d",&n);
        printf("Enter Elements\n");
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        printf("Enter key to Search : ");
        scanf("%d",&k);
        int c=linear_search(arr,k,n);
        if(c!=n){
            printf("Present\n");
            printf("Total comparision %d\n",c);
        }
        else{
            printf("Not Present \n");
            printf("Total comparision %d\n",c);
        }
    }
}