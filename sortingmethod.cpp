#include<iostream>
using namespace std;
int main(){
	int n;
	int choice;
	cout<<"enter size of array: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"enter element of array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	cout<<"enter which method we want to use for sorting: "<<endl;
	cout<<"1.Bubble Sort:"<<endl;
	cout<<"2.Selection Sort :"<<endl;
	cout<<"3.Insertion Sort :"<<endl;
	cout<<"4.Quick Sort :"<<endl;
	cout<<"5.Marge Sort :"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
		for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
			int temp = a[j+1];
			a[j+1] = a[j];
			a[j] = temp;
			}
		}
		cout<<endl;
	}
	break;
	
	case 2:
		for(int i=0;i<n-1;i++){
		int min=i;

		for(int j=i+1;j<n;j++){
			if(a[j] < a[min])
            min=j;
		}

    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
break; 
case 3:
	for(int i=1;i<n;i++){
    int key=a[i];
    int j=i-1;

    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;
    }

    a[j+1]=key;
}
break;
default:
	cout<<"invalid input: ";
	return 0;
}

cout<<"sorted array: "<<endl;
for(int i=0; i<n; i++){
	cout<<a[i]<<" ";
}
return 0;
}