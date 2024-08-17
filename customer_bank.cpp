class bank
{
	string name;
	string password;
	int acc_no;
	float bal;
	static int no;
	bool CheckPassword()
	{
		string code;
		int i;
		for(i=0;i<3;i++)
		{
			cout<<"enter password: "<<endl;
			cin>>code;
			if(password!=code)
			{
				cout<<"wrong password"<<endl;
			}
			else
				return true;
		}
		if(i==3)
		{
			cout<<"Try after 24hrs"<<endl;
			return false;
		}
	}
	public:
	//default constructor
	bank()
	{
		cout<<"In Customer bank acc"<<endl;
		cout<<"enter name: "<<endl;
		cin>>name;
		acc_no=++no;
		cout<<"enter bal: "<<endl;
		cin>>bal;
		cout<<"set password: "<<endl;
		cin>>password;
	}
	void Print()
	{
		cout<<"name:  "<<name<<endl;
		cout<<"acc_no:"<<acc_no<<endl;
	}
	void Deposit(float amt)
	{
		bal=bal+amt;
		cout<<"deposit is successfull"<<endl;
	}
	void Withdrawal(float amt)
	{
		if(amt>bal)
			cout<<"insufficient bal: "<<endl;
		else
		{
			bal=bal-amt;
			cout<<"withdrawal is successfull"<<endl;
		}
	}
	void Balenquiry()
	{
		cout<<"my Balance is: "<<bal<<endl;
	}

	friend class Online;
};
int bank::no=112976;
