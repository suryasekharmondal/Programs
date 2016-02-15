#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
                             /*Supports four functions to input time, to convert time entered in a particular
                                          format to another and displaying time*/
class TIME{
	public:
		string time;// store time entered in any format
		char *a;// convert the time stored in string into a character array
		void inputTime(void);
		void convert_to_24(void);
		void convert_to_12(int);
		void time_display(int);		
};

void TIME::inputTime(){ // function which interacts with the user to input time
	int size, flag=0, i=0;
	char ch;
	int ch1;
	cout<<"Enter time in any format(24 hour/AM-PM): ";
	getline(cin,time);
	size= time.size();
	
	/*Allocating memory to the character array and copying the string in the array*/
	a= new char[size+1];
	a[size]='\0';
	memcpy(a,time.c_str(),size);
	while(a[i]!='\0'){ //detects whether time is entered in 12 hour format or AM-PM format
		if(isalpha(a[i++])) flag=1;
	}
	if(flag==1){
		cout<<"Since you have entered the time in AM-PM format, would you want to display it in 24 hour format?(y/n) ";
		cin>>ch;
		if(ch=='y') convert_to_24(); //converting AM-PM format to 24 hour format
		else{
			cout<<"1)Display as it is"<<"\n"<<"2)Exit"<<"\n"<<"Enter your choice: ";
			cin>>ch1;
			switch(ch1){
				case 1: time_display(4);
				        break;
				case 2: exit(EXIT_SUCCESS);
				        break;
				default: cout<<"Wrong option"<<"\n";
			}
		}
	}
	else{
		cout<<"Since you have entered teh time in 24 hour format, would you want to display it in AM-PM format?(y/n) ";
		cin>>ch;
		if(ch=='y') convert_to_12(size); // converting 24 hour format to AM-PM format
		else{
			cout<<"1)Display as it is"<<"\n"<<"2)Exit"<<"\n"<<"Enter your choice: ";
			cin>>ch1;
			switch(ch1){
				case 1: time_display(4);
				        break;
			
			}
		}
	}
}
                            
                            /*Function converting 24 hour format to AM-PM format*/
void TIME::convert_to_12(int size){ 
	int i=0;
	char ch;
	int p=(a[0]-'0')*10;
	int q=(a[1]-'0')*1;
	if((p+q)<=12){
		if(a[0]=='0' && a[1]=='0'){
			cout<<"12:00:00AM";
			exit(EXIT_SUCCESS);
		}
		if(a[0]=='1' && a[1]=='2'){
			cout<<"12:00:00PM";
			exit(EXIT_SUCCESS);
		}
	    time_display(1);
	}
	else{
		int r=(a[0]-'0')-1;
		int s=(a[1]-'0')-2;
		a[0]=r+'0';
		a[1]=s+'0';
		time_display(2);
	}
}
                            /*Function converting AM-PM format to 24 hour format*/
void TIME::convert_to_24(){
	int i=0;
	while(a[i]!='\0'){
		if(a[i]=='A' || a[i]=='a'){
		   if(a[0]=='1' && a[1]=='2'){
		   	   a[0]=a[1]='0';
		   }	
		 time_display(3);
	    }
		else if(a[i]=='P' || a[i]=='p'){
			if(a[0]=='1' && a[1]=='2'){
				cout<<"12:00:00";
				exit(EXIT_SUCCESS);
			}
			int p=(a[0]-'0')+1;
			int q=(a[1]-'0')+2;
			a[0]=p+'0';
			a[1]=q+'0';
			
			time_display(3);
		}
		i++;
	}
} 
                                /*Function to display time*/
void TIME::time_display(int flag){
   int i=0;
   if(flag==1){
   	 while(a[i]!='\0'){
   	    cout<<a[i];
		i++; 	
	}
	 cout<<"AM";
   }	
   if(flag==2){
   	  while(a[i]!='\0'){
   	  	cout<<a[i];
   	  	i++;
		 }
		 cout<<"PM";
   }
   if(flag==3){
   	  while(!(isalpha(a[i]))){
   	  	    cout<<a[i];
   	  	    i++;
		 }
   }
   if(flag==4){
   	  while(a[i]!='\0'){
   	  	cout<<a[i];
   	  	i++;
	  }
   }
} 

int main(void){
	TIME t;
	t.inputTime();
}
