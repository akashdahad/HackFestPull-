#include<iostream>
using namespace std;

bool Bsearch(int A[],int s,int l,int x){
 //searching for x in an array A[] from index s upto length l
 if(l==1){
        return A[s]==x;
 }
 int h=l/2; //h-half

 if(x<A[s+h]){
    return Bsearch(A,s,h,x); //searching in the region A[s....s+h-1]
 }
 else{
    return Bsearch(A,s+h,l-h,x); //searching in the region A[s+h.....s+l-1]
  }
}


int main(){
    int A[8]={-3,2,2,5,10,10,15,36};
    cout<<Bsearch(A,0,8,11)<<endl;
    cout<<Bsearch(A,4,3,15)<<endl;
    cout<<Bsearch(A,0,1,2)<<endl;
}
