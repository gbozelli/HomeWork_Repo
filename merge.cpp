#include <iostream>
using namespace std;

void merge(int v[],int l,int r,int m){
    int a[r];
    for(int i=0;i<r;i++){
        a[i] = v[i];
    }//creates array that will be the auxiliar array for merge
    int i = l;
    int j = m+1;
    int k = l;
    //index that divide the array in two parts
    while(j<=r && i<=m){
        if(a[i]<=a[j]){
        v[k]=a[i];
        i++;}
        else{
        v[k]=a[j];
        j++;}
    k++;}//select the biggest number beetwen two index, and add in the original array
    while(i<=m){
        v[k]=a[i];
        i++;
        k++;}
    while(j<=r){
        v[k]=a[j];
        j++;
        k++;}
}//add the remaining numbers

void mergeSort(int v[], int l, int r){
    if(l>=r){
        return;}
    else{
        int m=(r-l)/2;//create the middle
        mergeSort(v,l,m);
        mergeSort(v,m+1,r);//separate the array in two, until the array have the lenght of 1
        merge(v,l,r,m);}
}

void print_array(int M[],int r){
    cout << "[ ";
    for(int i =0;i<r;i++){
        cout << M[i] << " ";}
    cout  << "]";
}

int search(int v[], int t, int l, int r){
    int m = (r-l)/2;
    if(l>=r){
        return false;
    }
    if(v[m]>t){
        search(v,t,l,m);
    }
    else{
        search(v,t,m,r);
    }
    if(v[m]==t){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int l = 0;
    int r = 8;
    int v[r-l]={1,5,2,4,9,8,6,3};
    mergeSort(v,l,r);
    int k = 8;
    print_array(v,k);
    int x = search(v,k,l,r);
    cout << x;
    return 0;}