// Print character A to Z   
#include <iostream>
using namespace std;
int main(){
	char n;
	cout<<"Enter character 'U' for uppercase and 'L' for lovercase : ";
	cin>>n;
	
   	if(n=='U'){
	    for(char i='A';i<='Z';i++){
			cout<<i<<" "; 
        }
    }
    else if(n=='L') {
        for(char i='a';i<'z'; i++){
		    cout<<i<<" ";
	   }
	}      
	else{
	    cout<<"no match";
		}
}

