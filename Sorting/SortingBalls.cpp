#include <bits/stdc++.h>
using namespace std;
/*
2 approaches
1)Min heap
2)Right Shift Algorithm
*/

void add(int arr[],int n,int c){
        int ind=c;
/* 
   Here I have used right shift algorithm for placing the ball at correct position after every pickup and select
   First i have to find the 1st ball in already placed array which is just greater than the chosen one
   Then just right shift till last position and and add the ball at its right position
 */
        for(int i=0;i<c;i++){
                if(arr[i]>n){
                        
                        ind=i;
                        for(int i=c-1;i>=ind;i--){
                                arr[i+1]=arr[i];
                        }
                        break;
                }
        }
        
        arr[ind]=n;
        return;
}
void add_by_using_MinHeap(){
/*
Here i have just used a inbuilt priority queue.
We have to just add the ball into the queue and then just print the whole queue and while printing store the poped ball.
Stored poped ball will be again added to the priority queue so that to track the previous balls
*/
        priority_queue<int,vector<int>,greater<int>> pq; //initialsed queue
       
        while(1){
                int n;
                cin>>n;
                if(n>=60 || n<0) return;
                pq.push(n);
                vector<int> v;
                while(!pq.empty()){
                        cout<<pq.top()<<" ";
                        v.push_back(pq.top()); //used to restore the poped value
                        pq.pop();
                }
                for(auto i : v){
                        pq.push(i);
                }
                
        }
        
}
void print(int arr[],int c){ //printing the array after adding every ball to it
        for(int i=0;i<=c;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
}

int main() {
        int arr[60];
        int c;
        // while(1){
        //         int n;
        //         cin>>n;
        //         if(n>=60 || n<0) break;
        //         if(c==0) arr[0]=n,c=1;
        //         else{
        //                 add(arr,n,c);
        //                 print(arr,c);
        //                 c++;
        //         }
        // }
        add_by_using_MinHeap();
} 

