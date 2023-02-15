#include <stdio.h>

const int k = 1;
const int c = k-1;

int r_sum(int arr[],int sum, int left, int right){
    if(left<=right){
    sum = sum + arr[left];
    left++;
    r_sum(arr,sum,left,right);}
    else{
    return sum;}
}

int sum(int arr[]){
    int sum = 0;
    int result = r_sum(arr,sum,0,c);
    return result;
}

int main(){
    int arr[1] = {1};
    printf("%d", sum(arr));
    return 0;
}