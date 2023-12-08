#include "Owner.h"

// Parameterized constructor
Owner::Owner(string NAME,string GENDER,int AGE,double BANK_ACCOUNT,long long int PHONE_NUMBER,string EMAIL,string ADDRESS)
{
    this->NAME=NAME;
    this->GENDER=GENDER;
    this->AGE=AGE;
    this->BANK_ACCOUNT=BANK_ACCOUNT;
    this->PHONE_NUMBER=PHONE_NUMBER;
    this->EMAIL=EMAIL;
    this->ADDRESS=ADDRESS;
    Dogcnt--;
    Catcnt--;
    Birdcnt--;
}

//function to get owner info
void Owner::get_ownerinfo()
{
    cout << " Name is : "<< NAME <<endl;
    cout << " Gender is : "<< GENDER <<endl;
    cout << " Age is : "<< AGE <<endl;
    cout << " Bank Account is : "<< BANK_ACCOUNT <<endl;
    cout << " Phone number is : "<< PHONE_NUMBER <<endl;
    cout << " Email : "<< EMAIL <<endl;
    cout << " Address : "<< ADDRESS <<endl;
}

//function to get owner bank account
double Owner::get_ownerbankaccount()
{
    BANK_ACCOUNT-=spentmoney;
    return BANK_ACCOUNT;
}

//function to determine gain
double Owner::get_gain()
{
    return gainmoney;
}

//function to determine number of animal has been sold
int Owner::get_animalsold()
{
    return Animal::Animalsold;
}

//function to determine number of animal has been bought
int Owner::get_animalbought()
{
     return Animal::Animalbought;
}

//function to add money to his bank account
void Owner::add_money(double money)
{
    BANK_ACCOUNT+=money;
}

//function to get money from his bank account
void Owner::get_money(double money)
{
    BANK_ACCOUNT-=money;
    cout << "you have taken "<<money<<" L.E from your bank account "<<endl;
}


