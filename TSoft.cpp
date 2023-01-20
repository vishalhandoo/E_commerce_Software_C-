#include<bits/stdc++.h>
using namespace std;

int main(){

    char start;
    float Shop(void);
    char choice;

    startL:                                                                                                                                 /*To reach back Here*/
        cout<<"Please press H for Home Appliance"<<endl;                                                                                    /*For Home Appliances*/
        start:
            cin>>start;

            if(start=='h'||start=='H'){
                float total = Shop();
                time_t t=time(NULL);
                tm* tPtr = localtime(&t);

                cout<<"Bill Date : ";
                cout<<tPtr->tm_mday<<"/";
                cout<<1+tPtr->tm_mon<<"/";
                cout<<1900+tPtr->tm_year<<endl;
                cout<<"Bill time : "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
                cout<<"Total Billed Amount : "<<total<<endl;
                if(total>50000&&total<100000){
                    total=total-(0.05*total);
                    cout<<"Total Discount : 5%"<<endl;
                }
                else if(total>100000&&total<125000){
                    total=total-(0.01*total);
                    cout<<"Total Discount : 10%"<<endl;
                }
                else if(total>125000&&total<150000){
                    total=total-(0.25*total);
                    cout<<"Total Discount : 25%"<<endl;
                }
                else if(total>150000){
                    total=total-(0.5*total);
                    cout<<"Total Discount : 50%"<<endl;
                }
                cout<<"Total Billed Amount after Discount : "<<total<<endl;
                Again:
                    cout<<"Do you want to shop again Y or N"<<endl;
                    cin>>choice;
                    if(choice=='y'||choice=='Y'){
                        goto startL;
                    }
                    else if(choice=='n'||choice == 'N'){
                        cout<<"Thanks For Shopping With Us"<<endl;
                    }
                    else{
                        cout<<"You have entered wrong option please press H"<<endl;
                        goto Again;
                    }
            }
            else{
                cout<<"Youhave entered wrong option press press H to start again"<<endl;
                goto start;
            }

}

float Shop(){                                                                                                                                   /*Differenet Home appliances*/
    shop:
    char choice;
    char product;
    int quantity;
    float bill = 0 ;
    itemL:
        cout<<"*********************Welcome*********************"<<endl;
        cout<<"__Please__follow__the__instruction__"<<endl;
        cout<<"1) Please enter R to order Refrigerator"<<endl;
        cout<<"2) Please enter W to order Washing Machine"<<endl;
        cout<<"3) Please enter T to order Television"<<endl;
        cout<<"4) Please enter M to order MicroWave"<<endl;
        cout<<"5) Please enter A to order AirConditioner"<<endl;
        cin>>choice;

        if(choice=='r'||choice=='R'||choice=='w'||choice=='W'||choice=='t'||choice=='T'||choice=='m'||choice=='M'||choice=='a'||choice=='A'){               /*For selection between Diffeerent products*/
            if(choice=='r' || choice=='R'){
                refrigerator:
                cout<<"________Refrigerator Details__________"<<endl;
                cout<<"1) Whirlpool  => Price : 20000 |"<<endl;
                cout<<"2) Samsung    => Price : 40000 |"<<endl;
                cout<<"3) Haier      => Price : 30000 |"<<endl;
                cout<<"4) Voltas     => Price : 15000 |"<<endl;
                cout<<"5) Panasonic  => Price : 30000 |"<<endl;

                cout<<"Please Enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product=='2'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }else if(product=='3'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }else if(product=='4'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*15000;
                }else if(product=='5'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else{
                    cout<<"You have Entered the wrong Option make selection again"<<endl;
                    goto refrigerator;
                }

            }
            if(choice=='w' || choice=='W'){
                washingMachine:
                cout<<"________Washing Machine Details__________"<<endl;
                cout<<"1) Whirlpool  => Price : 20000 |"<<endl;
                cout<<"2) Samsung    => Price : 40000 |"<<endl;
                cout<<"3) Haier      => Price : 30000 |"<<endl;
                cout<<"4) Voltas     => Price : 15000 |"<<endl;
                cout<<"5) Panasonic  => Price : 30000 |"<<endl;

                cout<<"Please Enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product=='2'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }else if(product=='3'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }else if(product=='4'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*15000;
                }else if(product=='5'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else{
                    cout<<"You have Entered the wrong Option make selection again"<<endl;
                    goto washingMachine;
                }
            }
                if(choice=='t' || choice=='T'){
                television:
                cout<<"________Television Details__________"<<endl;
                cout<<"1) Whirlpool  => Price : 20000 |"<<endl;
                cout<<"2) Samsung    => Price : 40000 |"<<endl;
                cout<<"3) Haier      => Price : 30000 |"<<endl;
                cout<<"4) Voltas     => Price : 15000 |"<<endl;
                cout<<"5) Panasonic  => Price : 30000 |"<<endl;

                cout<<"Please Enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product=='2'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }else if(product=='3'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }else if(product=='4'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*15000;
                }else if(product=='5'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else{
                    cout<<"You have Entered the wrong Option make selection again"<<endl;
                    goto television;
                }

            }
            if(choice=='m' || choice=='M'){
                MicroWave:
                cout<<"________Micro Wave Details__________"<<endl;
                cout<<"1) Whirlpool  => Price : 20000 |"<<endl;
                cout<<"2) Samsung    => Price : 40000 |"<<endl;
                cout<<"3) Haier      => Price : 30000 |"<<endl;
                cout<<"4) Voltas     => Price : 15000 |"<<endl;
                cout<<"5) Panasonic  => Price : 30000 |"<<endl;

                cout<<"Please Enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product=='2'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }else if(product=='3'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }else if(product=='4'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*15000;
                }else if(product=='5'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else{
                    cout<<"You have Entered the wrong Option make selection again"<<endl;
                    goto MicroWave;
                }
            }
                if(choice=='a' || choice=='A'){
                Airconditioner:
                cout<<"________Air Conditioner Details__________"<<endl;
                cout<<"1) Whirlpool  => Price : 20000 |"<<endl;
                cout<<"2) Samsung    => Price : 40000 |"<<endl;
                cout<<"3) Haier      => Price : 30000 |"<<endl;
                cout<<"4) Voltas     => Price : 15000 |"<<endl;
                cout<<"5) Panasonic  => Price : 30000 |"<<endl;

                cout<<"Please Enter your choice"<<endl;
                cin>>product;
                if(product=='1'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*20000;
                }
                else if(product=='2'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*40000;
                }else if(product=='3'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }else if(product=='4'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*15000;
                }else if(product=='5'){
                    cout<<"Enter the Quantity of the product"<<endl;
                    cin>>quantity;
                    bill=bill+quantity*30000;
                }
                else{
                    cout<<"You have Entered the wrong Option make selection again"<<endl;
                    goto Airconditioner;
                }
            }
        }
            else{
                cout<<"You have entered the wrong option Please try Again"<<endl;
                goto shop;
            }
            return bill;
        }
