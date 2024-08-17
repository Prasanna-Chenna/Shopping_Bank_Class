#define max 5
class Online
{
	typedef struct shopping
	{
		string name;
		int price;
		int quant;
	}S;
	S s[max];
	int amt;
	static int cnt;
	void Add_cart()
	{
		if(cnt==max)
		{
			cout<<"cart is full"<<endl;
		}
		else
		{
			cout<<"enter name of the product:"<<endl;
			cin>>s[cnt].name;
			cout<<"enter price:"<<endl;
			cin>>s[cnt].price;
			cout<<"enter quantity:"<<endl;
			cin>>s[cnt].quant;
			cnt++;
		}
	}
	void View_cart()
	{
		for(int i=0;i<cnt;i++)
		{
			cout<<"product: "<<s[i].name<<endl;
			cout<<"price: "<<s[i].price<<endl;
			cout<<"quantity: "<<s[i].quant<<endl;
			cout<<endl;
		}
	}
	void Cal_bill()
	{
		for(int i=0;i<cnt;i++)
		{
			amt+=s[i].price * s[i].quant;
		}
		cout<<"Total amt is: "<<amt<<endl;
	}
	public:
	void Paybill(bank &obj,HDFC &obj1)
	{

		if(amt<obj.bal)
		{
			obj.bal-=amt;
			obj1.bal+=amt;
		}
		else
			cout<<"insufficient bal:"<<endl;

	}
	Online()
	{
		amt=0;
	}
	void menu()
	{
		int c;
		while(1)
		{
			cout<<"1:Add_to_cart 2:Bill 3:View_cart 4:exit"<<endl;
			cout<<"enter choice"<<endl;
			cin>>c;
			switch(c)
			{
				case 1:Add_cart();
				       break;
				case 2:Cal_bill();
				       break;
				case 3:View_cart();
				       break;
				case 4:return ;
			}
		}
	}
};
int Online::cnt;
