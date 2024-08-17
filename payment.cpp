#include<iostream>
using namespace std;
class HDFC;
#include"customer_bank.cpp"
#include"shop_bank.cpp"
#include"online_shopping.cpp"
int main()
{
        bank bobj;
        HDFC bobj1;
        Online sobj;

        //bal initially
        bobj.Balenquiry(); //my account bal
        bobj1.Balenq();

	sobj.menu();
        sobj.Paybill(bobj,bobj1);
	cout<<"payment is done"<<endl;

        //bal after transaction
        bobj.Balenquiry(); //my account bal
        bobj1.Balenq(); //shop account bal
}
