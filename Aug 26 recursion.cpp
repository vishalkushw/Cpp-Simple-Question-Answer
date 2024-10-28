//#include <iostream>
//using namespace std;
//
//void natural_sum(int n){
//	if (n==11)
//	 return;
//	  natural_sum(n+1);  //head recurion
//	 cout<<n<<" ";
//	// natural_sum(n+1); //tail recusion
//}
//
//int main(){
//	natural_sum(1);
//}

#include <iostream>
using namespace std;

void natural_sum(int n){
	int sum=0;
	if (n==6)
	 return;
	 sum=sum+n;
	 cout<<sum<<" ";
	
	 natural_sum(n+1); //tail recusion
	  
}

int main(){
	natural_sum(1);
}
