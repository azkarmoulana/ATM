#include <iostream>

using namespace std;
int option1();
int option2();
class banking
{
    int userID;
    int userPassword;

public:
    void setData(int id1, int pw1) //creating an account
    {   int a;
        userID=id1;
        userPassword=pw1;
        cout<<"\n\n\t\t\tThank you! Your account has been created!\n\n\n";
        a=option1();
    }
    void loginCheck(int id2,int pw2)
    {   int b;
        int b1;
        if(userID==id2 && userPassword==pw2)
        {
            cout<<"\n\tAccess Granted\n\n\n\n";
             b1=option2();

        }
        else
        {
            cout<<"\n\n\t\t\t\t---*** LOGIN FAILED ***---\n\n\n\n\n\n";
             //b=option1();
             b=option1();
        }


    }
    void quitMessage()
    {
        cout<<"\n\n\n\n\t\t\t-------------@@@ Thank you for stopping by! @@@-------------";
        cout<<"\n\t\t\t\t\t   > Have a nice day <\n\n\n\n\n\n\n\n\n";

    }

};


class transaction
{
    double total;

public:

    void deposit(double dep)
    {  int d;
       total=total+dep;
       cout<<"\n\t\t >>Deposit Successful<<\n\n";
       d=option2();
    }
    void withdraw(double wid)
    {   int w;
        double wid1;
        wid1=wid;


        if(wid1>total)
        {
            cout<<"\n\t\t\t SORRY!! You don't have enough balance to withdraw\n\n";
            w=option2();
        }
        else
        {
            cout<<"\n\t\tWithdrawal Successful";
            total=total-wid1;
            w=option2();
        }

    }
    void balance()
    {   int b;
        cout<<"\t Your Available Balance is : Rs."<<total;
        b=option2();
    }
    void quitMessage()
    {
        cout<<"\n\n\n\n\t\t\t-------------@@@ Thank you for stopping by! @@@-------------";
        cout<<"\n\t\t\t\t\t   > Have a nice day <\n\n\n\n\n\n\n\n\n";

    }

};


int option1()//option menu 1
{
      cout<<"\n\n\t\tPlease select an option from the menu below:\n\n\n";


        cout<<"\t1 -> Login\n";
        cout<<"\t2 -> Create New Account\n";
        cout<<"\t3 -> Quit\n";
        int x; //input variable
        cout<<"\n\t";
        cin>>x;
    int id1,pw1,id2,pw2;

    banking newOb; // creating object for class banking

    switch(x)
    {

 case 1:
    {   cout<<"Please enter your user id  : ";
        cin>>id2;
        cout<<"\nPlease enter your password :";
        cin>>pw2;
        newOb.loginCheck(id2,pw2);
        break;
    }
 case 2:
     {
        cout<<"Please enter a user id  : ";
        cin>>id1;
        cout<<"\nPlease enter a password :";
        cin>>pw1;
        newOb.setData(id1,pw1);
        break;
     }
 case 3:
    {
        newOb.quitMessage();
        break;
    }
 default:
    {
        cout<<"\n\n\t\t\t Invalid input\n\n\n\n";
    }


    }

}

int option2() //option menu 2
{
        cout<<"\n\n\t\tPlease select an option from the menu below:\n\n\n";


        cout<<"\t1 -> Deposit Money\n";
        cout<<"\t2 -> Withdraw Money\n";
        cout<<"\t3 -> Request Balance\n";
        cout<<"\t4 -> Quit\n";
        int x1; //input variable
        cout<<"\n\t";
        cin>>x1;
        double dep, wid;

        transaction Ob;//creating an object
        switch(x1)
        {
    case 1:
        {
           cout<<"Enter the Amount of Deposit : Rs.";
           cin>>dep;
           Ob.deposit(dep);
        }
    case 2:
        {
            cout<<"Enter the Amount of Withdrawal : Rs.";
            cin>>wid;
            Ob.withdraw(wid);


        }
    case 3:
        {
            Ob.balance();
        }
    case 4:
        {
            Ob.quitMessage();
        }
        }
}





int main()
{
    cout<<"\n\n\t\t\t\t\t------***$$$ Welcome to Mihira's ATM $$$***------\n";
    int z;
    z=option1();

}
