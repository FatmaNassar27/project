#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <bits/stdc++.h>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Owner.h"

using namespace std;


class Customer : public Animal,public Dog,public Cat,public Bird
    {
    private:
        int id;
        string name;
        string gender;
        int age;
        double walletAmount;
        string email;
        string address;

    public:
        // Parameterized constructor
        Customer(int id,string name,string gender,int age,double walletAmount,string email,string address);

        //setter function for Customer name
        void set_customername(string name);

        //getter function for Customer name
        string get_customername();

        //setter function for Customer gender
        void set_customergender(string gender);

        //getter function for Customer gender
        string get_customergender();

        //setter function for Customer address
        void set_customeraddress(string address);

        //getter function for Customer address
        string get_customeraddress();

        //setter function for Customer id
        void set_customerid(int id);

        //getter function for Customer id
        int get_customerid();

        //setter function for Customer email
        void set_customeremail(string email);

        //getter function for Customer email
        string get_customeremail();

        //setter function for Customer age
        void set_customerage(int age);

        //getter function for Customer age
        int get_customerage();

        //setter function for Customer wallet amount
        void set_customerwalletamount(double walletAmount);

        //getter function for Customer wallet amount
        double get_customerwalletamount();

        //getter function for CustomerInfo
        void getCustomerInfo();

        //buyAnimal
        void buyAnimal(int animalid,string type_name,double Price);

        //function to sell animal
        void sellAnimal(string type_name,double Price);

        //function to add money
        void addmoney(double money);
    };
#endif // CUSTOMER_H
