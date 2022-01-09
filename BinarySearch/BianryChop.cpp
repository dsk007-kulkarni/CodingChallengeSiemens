#include <bits/stdc++.h>
using namespace std;

int BinaryChop_Iterative(int key,int arr[],int n){
        int low=0,high=n-1;
        while(low<high){
                int mid=low+(high-low)/2;
                if(arr[mid]==key) return 1;
                else if(arr[mid]>key) high=mid-1;
                else low=mid+1;
        }
        return 0;
}
int BinaryChop_Recursive_Util(int arr[],int key,int low,int high){
        if(low<high){
                int mid=low+(high-low)/2;
                if(arr[mid]==key) return 1;
                else if(arr[mid]>key) return BinaryChop_Recursive_Util(arr,key,low,mid-1);
                else return BinaryChop_Recursive_Util(arr,key,mid+1,high);
        }
        return 0;
}
int BinaryChop_Recursive(int key,int arr[],int n){
        int low=0,high=n-1;
        return BinaryChop_Recursive_Util(arr,key,low,high);
}


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
          cin>>arr[i];
  }
  cout<<BinaryChop_Iterative(10,arr,n);
  cout<<BinaryChop_Recursive(1,arr,n);
} 