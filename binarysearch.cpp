#include<iostream>
using namespace std;

int binarysearch(int arr[], int left, int right, int x){

    if(right>=left){
        int mid = left+(right-left)/2;

        if (arr[mid]==x){
            return mid;
        }

        if (arr[mid]>x){
            return binarysearch(arr,left,mid-1,x);
        }

        if (arr[mid]<x){
            return binarysearch(arr,mid+1,right,x);
        }
    }
    return -1;
}


int main(){
    int n=6;
    int x=7;
    int arr[]={4,5,6,7,8,9};
    int position = binarysearch(arr,0,n-1,x);
    cout<<position;
    return 0;
}