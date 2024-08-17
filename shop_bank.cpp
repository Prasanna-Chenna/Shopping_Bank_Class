class HDFC
{
        int acc_no;
        char name[20];
        float bal;
        static int cnt;
        public:HDFC()
               {
                       acc_no=++cnt;
                       cout<<"in shop acct"<<endl;
                       cout<<"enter name: "<<endl;
                       cin>>name;
                       cout<<"enter bal"<<endl;
                       cin>>bal;
               }
               void Deposit(float amt)
               {
                       bal+=amt;
               }
               bool Withdraw(float amt)
               {
                       if(amt<bal)
                       {
                               bal-=amt;
                               return true;
                       }
                       else
                       {
                               return false;
                       }
               }
               void Balenq()
               {
                       cout<<"HDFC balance is: "<<bal<<endl;
               }
                friend class Online;
};
int HDFC::cnt=7865;
