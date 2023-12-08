#ifndef OWNER_H
#define OWNER_H
#include <bits/stdc++.h>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"

// Parameterized constructor
class Owner: public Animal,public Dog,public Cat,public Bird
{
private:
    string NAME;
    string GENDER;
    int AGE;
    double BANK_ACCOUNT;
    long long int PHONE_NUMBER;
    string EMAIL;
    string ADDRESS;
public:
    Owner(string NAME,string GENDER,int AGE,double BANK_ACCOUNT,long long int PHONE_NUMBER,string EMAIL,string ADDRESS);

    //function to get owner info
    void get_ownerinfo();

    //function to get owner bank account
    double get_ownerbankaccount();

    //function to determine gain
    double get_gain();

    //function to determine number of animal has been sold
    int get_animalsold();

    //function to determine number of animal has been bought
    int get_animalbought();

    //function to add money to his bank account
    void add_money(double money);

    //function to get money from his bank account
    void get_money(double money);
};

#endif // OWNER_H
