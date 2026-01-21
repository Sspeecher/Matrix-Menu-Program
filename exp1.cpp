#include<iostream>
using namespace std;
int main(){
	cout<<"enter size of array";
	int n,m;
	cin>>n>>m;
	cout<<"For A"<<endl;
	int a[n][m];
	cout<<"enter element of array: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Display A:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}
	
	cout<<endl;
	}
	int b[n][m];
	cout<<"enter element for array B:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>b[i][j];
		}
	}
	
	cout<<"Display B:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int result[n][m];
	cout<<"Addition: "<<endl;
	for(int i =0; i<n; i++){
		for(int j=0; j<m; j++){
			result[i][j]= a[i][j] + b[i][j];
		}
	}
	
	cout<<"Addition: "<<endl;
	for(int i =0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	
}