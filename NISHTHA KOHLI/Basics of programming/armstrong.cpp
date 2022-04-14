#include<iostream>
using namespace std;
int main(){
	int n, a[25];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				cout<<a[i];
			}
		}
	}
}
