#include<bits/stdc++.h>
using namespace std;
int main() {
//     Write your code here.
int n1,m1;
cin>>n1>>m1;
int a1[n1][m1];
for(int i=0;i<n1;i++)
{
    for(int j=0;j<m1;j++)
    {
        cin>>a1[i][j];
    }
}
int n2,m2;
cin>>n2>>m2;
int a2[n2][m2];
for(int i=0;i<n2;i++)
{
    for(int j=0;j<m2;j++)
    {
        cin>>a2[i][j];
    }
}
int pro[m1][n2];
for(i=0;i<n1;i++)    
{    
for(j=0;j<m2;j++)    
{    
pro[i][j]=0;    
for(k=0;k<m2;k++)    
{    
pro[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
}
