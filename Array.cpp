#include<iostream>
using namespace std;
int main(){
	int i,j;
	int a[2][2];
	int b[2][2];
	int result[2][2];
	int choice;
		cout<<"enter element of array A"<<endl;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				
				cin>>a[i][j];
			}
		}
		
		cout<<"enter element of array B"<<endl;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				cin>>b[i][j];
			}
		}
		cout<<"Display A array"<<endl;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		cout<<"Display B array"<<endl;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		do{
			cout<<"Menu"<<endl;
			cout<<"1.Addition"<<endl;
			cout<<"2.Subtraction"<<endl;
			cout<<"3.Multiplication"<<endl;
			cout<<"4.Division"<<endl;
			cin>>choice;
			
			switch(choice){
			case 1:
			cout<<"Addition"<<endl;
			for(int i=0; i<2; i++){
				for(int j=0; j<2; j++){
					result[i][j]= a[i][j]+ b[i][j];
					cout<<result[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
			
			case 2:
			cout<<"Subtraction"<<endl;
			for(int i=0; i<2; i++){
				for(int j=0; j<2; j++){
					result[i][j]= a[i][j] - b[i][j];
					cout<<result[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
			
			case 3:
			cout<<"Multiplication"<<endl;
			for(int i=0; i<2; i++){
				for(int j=0; j<2; j++){
					result[i][j] = 0;
					for(int k=0; k<2; k++){
						result[i][j] += a[i][k] * b[k][j];
					}
						cout<<result[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
			
			case 4:
			cout<<"Division"<<endl;
			for(int i=0; i<2; i++){
				for(int j=0; j<2; j++){
					if(b[i][j]!=0){
						result[i][j] = a[i][j]/b[i][j];
						cout<<result[i][j]<<" ";
					}
					else{
						cout<<"0 ";
					}
				}
				cout<<endl;
			}
			break;
			
			default:
			cout<<"Invalide";
		}
	}
		while(choice!=5);
}