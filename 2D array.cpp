//2D array  row wise sum

#include <iostream>
using namespace std;
int main(){
	int arr[3][3]={1,5,1,2,6,9,1,11,2};
	int sum;
	for(int i=0;i<3;i++){
		sum=0;
		
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
			sum=sum+arr[i][j];
		}
		cout<<"-------->"<<sum<<endl;
	}
}


//
//// 2d array columb wise sum
//
//#include <iostream>
//using namespace std;
//int main(){
//	int arr[3][3]={1,5,1,2,6,9,1,11,2};
//	int sum;
//	for(int i=0;i<3;i++){
//		sum=0;
//		
//		for(int j=0;j<3;j++){
//			cout<<arr[i][j]<<" ";
//			sum=sum+arr[i][j];
//		}
//		cout<<endl;
//	}
//		for(int i=0;i<3;i++){
//		sum=0;
//		
//		for(int j=0;j<3;j++){
//			cout<<arr[j][i]<<" ";
//			sum=sum+arr[j][i];
//		}
//		cout<<"------->"<<sum<<endl;
//	}
//}

//*/
////create a new aarry from exiting arry   arr size  arr[3][3]={1,5,1,2,6,9,1,11,2}; such that it contains only digonal eleiments   1   6  2  
//  
//#include <iostream>
//using namespace std;
//int main(){
//	int arr[3][3]={1,5,1,2,6,9,1,11,2};
//	int sum;
//	for(int i=0;i<3;i++){
//		
//		for(int j=0;j<3;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//		for(int i=0;i<3;i++){
//		
//		for(int j=0;j<3;j++){
//			if(arr[i][j]!=0){
//			
//			arr[i][j]=0;
//	}
////			sum=sum+arr[i][j];
//		}
//		cout<<[i][j]<<endl;
//	}
//}

