           
		    #include<iostream>
	        using namespace std;
	        int main(){
	        	
	        	int num1, num2 ;
	        	char choise, S,C,R;
				int  square,circle,rectangle;
	        	cout<<"Enter first number : ";
	        	cin>>num1;
	        	cout<<"Enter  second number : ";
	        	cin>>num2;
	        	cout<<"Enter your choise Square'S' circle'C' rectangle 'R' : ";
	        	cin>>choise;
	        	
	        	switch(choise){
	        		
	        		case 'S': square=num1*num1;
	        		cout<<"Square is "<<square;
	        		break;
	        		
	        		case 'C': circle= 3.14*num1*num2;
	        		cout<<"circle is "<<circle;
	        		break;
	        		
	        		case 'R': rectangle=num1*num2;
	        		cout<<"rectangle is "<<rectangle;
	        		break;
	        		
	        		default: cout<<"Invelid choise";
	        		
				}
	        	
	        	
			}
