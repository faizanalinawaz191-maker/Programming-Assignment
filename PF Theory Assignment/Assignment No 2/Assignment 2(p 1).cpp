#include<iostream>	
using namespace std;

string customerName;
int customerId;
string customerType;
int meters;

double rates[8]={12.21,14.53,31.51,38.41,41.62,43.04,44.18,49.10};

void registerCustomer()
{
    cout<<"Enter Customer Name: ";
    cin>>customerName;

    cout<<"Enter Customer ID: ";
    cin>>customerId;

    cout<<"Enter Customer Type (Household/Commercial): ";
    cin>>customerType;

    cout<<"Enter Installed Meters (1 or 2): ";
    cin>>meters;
}

double calculateBill(int units)
{
    double rate;

    if(units<=100)
        rate=rates[0];

    else if(units<=200)
        rate=rates[1];

    else if(units<=300)
        rate=rates[2];

    else if(units<=400)
        rate=rates[3];

    else if(units<=500)
        rate=rates[4];

    else if(units<=600)
        rate=rates[5];

    else if(units<=700)
        rate=rates[6];

    else
        rate=rates[7];

    return units*rate;
}

double gst(double bill)
{
    return bill*0.18;
}

double incomeTax(double bill)
{
    if(customerType=="Household")
        return bill*0.10;

    else
        return bill*0.15;
}

double electricityDuty(double bill)
{
    return bill*0.015;
}

double fixedCharges(int units)
{
    if(units<=300)
        return 0;

    else if(units<=400)
        return 200;

    else if(units<=500)
        return 400;

    else if(units<=600)
        return 600;

    else if(units<=700)
        return 800;

    else
        return 1000;
}

double newConnection()
{
    double charges;

    if(customerType=="Household")
    {
        if(meters==1)
            charges=2500;

        else
            charges=5000;
    }

    else
    {
        if(meters==1)
            charges=35000;

        else
            charges=70000;
    }

    return charges+250000;
}

void displayBill()
{
    int units;

    cout<<"Enter Units Consumed: ";
    cin>>units;

    double bill=calculateBill(units);
    double gstAmount=gst(bill);
    double tax=incomeTax(bill);
    double duty=electricityDuty(bill);
    double fixed=fixedCharges(units);

    double meterRent=250;
    double tvFee=35;

    double total=bill+gstAmount+tax+duty+fixed+meterRent+tvFee;

    cout<<"\n===== LESCO BILL =====\n";

    cout<<"Customer Name: "<<customerName<<endl;
    cout<<"Customer ID: "<<customerId<<endl;
    cout<<"Customer Type: "<<customerType<<endl;
    cout<<"Units: "<<units<<endl;

    cout<<"Electricity Charges: "<<bill<<endl;
    cout<<"GST: "<<gstAmount<<endl;
    cout<<"Income Tax: "<<tax<<endl;
    cout<<"Electricity Duty: "<<duty<<endl;
    cout<<"Fixed Charges: "<<fixed<<endl;
    cout<<"Meter Rent: "<<meterRent<<endl;
    cout<<"TV Fee: "<<tvFee<<endl;

    cout<<"Total Bill: "<<total<<endl;
}

void customerDetails()
{
    cout<<"\nCustomer Name: "<<customerName<<endl;
    cout<<"Customer ID: "<<customerId<<endl;
    cout<<"Customer Type: "<<customerType<<endl;
    cout<<"Installed Meters: "<<meters<<endl;
}

int main()
{
    int choice;

    registerCustomer();

    do
    {
        cout<<"\n1. Calculate Bill"<<endl;
        cout<<"2. New Connection"<<endl;
        cout<<"3. Customer Details"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        if(choice==1)
        {
            displayBill();
        }

        else if(choice==2)
        {
            cout<<"New Connection Charges: "
                <<newConnection()<<endl;
        }

        else if(choice==3)
        {
            customerDetails();
        }

        else if(choice==4)
        {
            cout<<"Program Ended";
        }

        else
        {
            cout<<"Invalid Choice";
        }

    }while(choice!=4);

    return 0;
}

