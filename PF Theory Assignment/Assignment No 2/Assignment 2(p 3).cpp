#include<iostream>
#include<string>
using namespace std;
	string itemNames[8]={"Rice 1 KG","Sugar 1 KG","Cooking Oil 1Liter","Milk Pack","Tea Pack","Flour 5 KG","Egg Dozen","Detergent"};
double Prices[8]={350,180,580,220,450,950,320,600};
void registerCustomer(string &name,string &id,string &type,string &payment){
	cout<<"Name:";
	cin>>name;
		cout<<"Type:";
	cin>>type;
		cout<<"ID:";
	cin>>id;
		cout<<"Payment:";
	cin>>payment;	
}
void displayList(){
	for(int i=0;i<8;i++)
	cout<<i+1<<"."<<itemNames[i]<<"(Price:"<<Prices[i]<<")"<<endl;	
}
double calculateTax(int choice,double price){
	return (choice<=7)?(price * 0.05):(price * 0.10);
}
double calcMemDiscount(string type,double bill){
	return (type=="Member")? (bill * 0.07): 0;
}
double calcBillDiscount(double bill){
	if(bill>10000)return bill *0.10;
	if(bill>=5000)return bill*0.05;
	return 0;
}
double calcCardCharges(string method,double bill){
	return (method=="Card")?(bill*0.02):0;
}


int main(){
	string name,id,type,payment;
	double gross=0,tax=0;
	registerCustomer(name,id,type,payment);
	displayList();
	
int choice;
while(true){
	cout<<"Choose an item or press 0 to stop";
	cin>>choice;
	if(choice==0)
	break;
	gross+= Prices[choice-1];
	tax+=calculateTax(choice,Prices[choice-1]);
}
double memD=calcMemDiscount(type,gross);
double billD=calcBillDiscount(gross);
double cardC=calcCardCharges(payment,gross);
double finalBill=gross+tax-memD-billD+cardC;

int newPoints=gross/100;
int existing;
cout<<"Enter Existing Points:";
cin>>existing;
int totalPoints=existing+newPoints;

cout<<"Total Payable:"<<finalBill<<endl;
cout<<"Updated Loyalty Points:"<<totalPoints<<endl;

return 0;


}

