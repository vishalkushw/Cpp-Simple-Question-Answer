#include <iostream>
using namespace std;
int main(){
	int arr[2][3];
	cout<<"Enter array element : ";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Array element : \n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}

}
