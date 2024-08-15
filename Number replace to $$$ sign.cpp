 // string "APPLE 123 apple" upper case charecter change into lower case 
 // and vice versa , number change into $$$ sign 
 
 
#include <iostream>
using namespace std;
int main(){
	string name= "APPLE 123 apple";
	int size= name.size();
	
	for(int i=0; i<size;i++){
		if(isupper(name[i])){
	     name[i]=tolower(name[i]);
     }
    else if(islower(name[i])){
	     name[i]=toupper(name[i]);
     }
     
     else if(isdigit(name[i])){
	     name[i]='$';
     }
       
   }
   cout<<name;
}
