#include<bits/stdc++.h>
using namespace std;
int a[10],b[10],n,T[10][10];
void bsort(){
    int temp;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            if(b[i]>=b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

}
void lics(){
    bsort();
    for(int i =0;i<=n;i++){
        for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    T[i][j]=0;
                }
                else if(a[i-1]==b[j-1]){
                    T[i][j] = 1+T[i-1][j-1];
                }
                else{
                    T[i][j] = max(T[i-1][j],T[i][j-1]);
                }
        }
    }
     
    cout<<"Length: "<<T[n][n]<<endl;
    
}
int main(){
cout<<"Enter size: "<<endl;
cin>>n;
cout<<"Enter matrix: "<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
    b[i] = a[i];
}
lics();
return 0;
}
