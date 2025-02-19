#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int a=-1;
    int b=-1;
    int r=7;
    int c=7;
     int mat[7][7] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21},
        {22, 23, 24, 25, 26, 27, 28},
        {29, 30, 31, 32, 33, 34, 35},
        {36, 37, 38, 39, 40, 41, 42},
        {43, 44, 45, 46, 47, 48, 49}
    };
  
    int i=0;
    int j=0;
    int t1=4;
    int t2=4;
    while(true){
        cout<<i<<" "<<j<<endl;
        
        if(i==t1 and j==t2){
            break;
        }
        if(i+1<r){
            int x=abs(t1-(i+1));
            int y=abs(t2-j);
            a=x+y;
        }
        else{
            a=-1;
        }
        if(j+1<c){
            int x=abs(t1-i);
            int y=abs(t2-(j+1));
            b=x+y;
        }
        else{
            b=-1;
        }
        if(a!=-1 && a<b){
            i+=1;
        }
        else if(b!=-1 && b<a){
            j+=1;
        }
        else if(a!=-1 && a==b){
            j+=1;
        }
        else{
            break;
        }

}    
}
    
