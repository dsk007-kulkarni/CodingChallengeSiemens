#include <bits/stdc++.h>
using namespace std;
/*
1)Min heap
2)generate own priority queue
3)binary search
4)Just add numbers to there position
5)sort always
*/

void add(int arr[],int n,int c){
        int ind=c;
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
void add_byusingMinHeap(){
        priority_queue<int,vector<int>,greater<int>> pq;
       
        while(1){
                int n;
                cin>>n;
                if(n>=60 || n<0) return;
                pq.push(n);
                 vector<int> v;
                while(!pq.empty()){
                        cout<<pq.top()<<" ";
                        v.push_back(pq.top());
                        pq.pop();
                }
                for(auto i : v){
                        pq.push(i);
                }
                
        }
        
}
void print(int arr[],int c){
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
        add_byusingMinHeap();
} 