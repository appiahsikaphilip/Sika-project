#include <iostream>


using namespace std;
int main() {
	string option,old_pin,new_pin,receiver_num,amount;
	bool pin_out;
	int pin_count;
	int pin_limit;
	pin_limit=2;
	pin_count=0;
	pin_out=false;
	
	cout<<"Welcome to ASP Mobile Money Service"<<endl;
	cout<<"";
	cout<<"1,Authentication"<<endl;
	cout<<"2,Reset pin"<<endl;
	cout<<"3,Check Balance"<<endl;
	cout<<"4,Send Money"<<endl;
	cout<<"";
	cout<<"Select option by entering 1-4"<<endl;
	cin>>option;
	if(option=="1"){
	while(old_pin != "0000"and not(pin_out)){
	
	if (pin_count<=pin_limit){
		cout <<"enter your pin to accept withdrawal of 200cedis:";
		cin >>old_pin;
		pin_count+=1;}
		
		else(pin_out=true);
		}

if(pin_out==true){
cout << "your account is blocked for too many attempts";
}
else{
	cout<<"you have successfully withdrawn 200 cedis from your account";
	
}

}
else if(option=="2"){
	while(old_pin!= "0000" and not(pin_out)){
	 if (pin_count<=pin_limit){
	 cout <<"enter old pin:";
	 cin>>old_pin;
	 pin_count+=1;}
	 
	 else(pin_out=true);
}
if(pin_out==true){
	cout << "your account is blocked for too many attemps";
}
else{
	cout<<"enter new pin:";
	cin>>new_pin;
	if (new_pin==old_pin){
		cout<<"pin already exist";
	}
	cout << "your pin has been resetted successfully";}
}

else if (option== "3"){
	while (old_pin != "0000" and not(pin_out)){
		
		if(pin_count<=pin_limit){
			cout <<"enter pin";
			pin_count+=1;}
			
			else(pin_out=true);}
		}
		if (pin_out==true){
		cout<< "your account is blocked for too many attempts";
	}
	
	else{
	cout << "your balance is 1000 cedis";	
}
    if(option == "4"){
	cout << "enter receiver number:"<<endl;
	cin>>receiver_num;
	cout << "enter amount to be sent:"<<endl;
	cin>>amount;
	
	while(old_pin !="0000" and not(pin_out)){
		if(pin_count<=pin_limit)(pin_out);{
			cout << "enter pin"<<endl;
			cin>>old_pin;
			pin_count+=3;}
			
			if (pin_out=true){
				cout<<"your account is blocked for too many attempts";
				cout<<"Exiting Program"<<endl;	
	}
}
	
	return 0;
}}
