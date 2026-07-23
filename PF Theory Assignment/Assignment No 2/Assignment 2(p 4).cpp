#include<iostream>
using namespace std;
	
int main()
{
    string name, email, city;
    int customerType;

    cout<<"Enter Name: ";
    cin>>name;

    cout<<"Enter Email: ";
    cin>>email;

    cout<<"Enter City: ";
    cin>>city;

    cout<<"\n1. New Customer";
    cout<<"\n2. Returning Customer";
    cout<<"\nEnter Customer Type: ";
    cin>>customerType;

    int choice, quantity;
    double total = 0;

    do
    {
        cout<<"\n===== PRODUCTS =====";
        cout<<"\n1. T-Shirt = 1200";
        cout<<"\n2. Jeans = 3500";
        cout<<"\n3. Shoes = 5000";
        cout<<"\n4. Watch = 2500";
        cout<<"\n5. Handbag = 4200";
        cout<<"\n6. Headphones = 3000";
        cout<<"\n7. Mobile Cover = 700";
        cout<<"\n8. Perfume = 2800";
        cout<<"\n9. Exit";

        cout<<"\nEnter Choice: ";
        cin>>choice;

        if(choice>=1 && choice<=8)
        {
            cout<<"Enter Quantity: ";
            cin>>quantity;

            if(choice==1)
                total = total + (1200 * quantity);
            else if(choice==2)
                total = total + (3500 * quantity);
            else if(choice==3)
                total = total + (5000 * quantity);
            else if(choice==4)
                total = total + (2500 * quantity);
            else if(choice==5)
                total = total + (4200 * quantity);
            else if(choice==6)
                total = total + (3000 * quantity);
            else if(choice==7)
                total = total + (700 * quantity);
            else if(choice==8)
                total = total + (2800 * quantity);
        }

    }while(choice!=9);

    double gst = total * 0.17;

    double deliveryCharges;

    if(city=="Lahore" || city=="Karachi" || city=="Islamabad")
        deliveryCharges = 250;
    else
        deliveryCharges = 500;

    double customerDiscount;

    if(customerType==1)
        customerDiscount = total * 0.05;
    else
        customerDiscount = total * 0.10;

    double orderDiscount = 0;

    if(total>=5000 && total<=10000)
        orderDiscount = total * 0.05;
    else if(total>10000)
        orderDiscount = total * 0.12;

    int paymentMethod;

    cout<<"\n1. Cash On Delivery";
    cout<<"\n2. Debit/Credit Card";
    cout<<"\nEnter Payment Method: ";
    cin>>paymentMethod;

    double paymentCharges = 0;

    if(paymentMethod==2)
        paymentCharges = total * 0.025;

    double finalBill =
    total + gst + deliveryCharges + paymentCharges
    - customerDiscount - orderDiscount;

    cout<<"\n\n===== ONLINE SHOPPING BILL =====";

    cout<<"\nUser Name: "<<name;
    cout<<"\nEmail: "<<email;
    cout<<"\nCity: "<<city;

    cout<<"\nProduct Total: "<<total;
    cout<<"\nGST: "<<gst;
    cout<<"\nDelivery Charges: "<<deliveryCharges;
    cout<<"\nCustomer Discount: "<<customerDiscount;
    cout<<"\nOrder Discount: "<<orderDiscount;
    cout<<"\nPayment Charges: "<<paymentCharges;

    cout<<"\n--------------------------------";

    cout<<"\nFinal Payable Amount: "<<finalBill;

    cout<<"\nThank You For Shopping :)";

    return 0;
}





	
	
	


