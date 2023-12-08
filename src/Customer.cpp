#include "Customer.h"

// Parameterized constructor
Customer::Customer (int id,string name,string gender,int age,double walletAmount,string email,string address)
    {
        this->id=id;
        this->name=name;
        this->gender=gender;
        this->age=age;
        this->walletAmount=walletAmount;
        this->email=email;
        this->address=address;
        Dogcnt--;
        Catcnt--;
        Birdcnt--;
    }

    //setter function for Customer name
    void Customer:: set_customername(string name)
    {
        this->name=name;
    }

    //getter function for Customer name
    string Customer:: get_customername()
    {
        return name;
    }

     //setter function for Customer gender
    void Customer:: set_customergender(string gender)
    {
        this->gender=gender;
    }

    //getter function for Customer gender
    string Customer:: get_customergender()
    {
        return gender;
    }

     //setter function for Customer address
    void Customer:: set_customeraddress(string address)
    {
        this->address=address;
    }

    //getter function for Customer address
    string Customer:: get_customeraddress()
    {
        return address;
    }

     //setter function for Customer id
    void Customer:: set_customerid(int id)
    {
        this->id=id;
    }

    //getter function for Customer id
    int Customer:: get_customerid()
    {
        return id;
    }

     //setter function for Customer email
    void Customer:: set_customeremail(string email)
    {
        this->email=email;
    }

    //getter function for Customer email
    string Customer:: get_customeremail()
    {
        return email;
    }

     //setter function for Customer age
    void Customer:: set_customerage(int age)
    {
        this->age=age;
    }

    //getter function for Customer age
    int Customer:: get_customerage()
    {
        return age;
    }

     //setter function for Customer wallet amount
    void Customer::set_customerwalletamount(double walletAmount)
    {
        this->walletAmount=walletAmount;
    }

    //getter function for Customer wallet amount
    double Customer:: get_customerwalletamount()
    {
        return walletAmount;
    }

    //getter function for CustomerInfo
    void Customer::getCustomerInfo()
    {
        cout << " Id is : "<< id <<endl;
        cout << " Name is : "<< name <<endl;
        cout << " Gender is : "<< gender <<endl;
        cout << " Age is : "<< age <<endl;
        cout << " Wallet amount is : "<< walletAmount <<endl;
        cout << " Email : "<< email <<endl;
        cout << " Address : "<< address <<endl;
    }

    //buyAnimal
    void Customer:: buyAnimal(int animalid ,string type_name,double Price)
    {
        if (type_name=="dog")
        {
            for (int i=0;i<Dogcnt;i++)
            {
                if(animalid==i&&Price<=walletAmount)
                {
                   cout << "\n process done successfully\n\n"<<endl;
                   walletAmount-=Price;
                   Animalsold++;
                   gainmoney+=Price;
                   Dogcnt--;
                   Animalcount--;
                   return;
                   // depandency injection
                }
            }
            if(Price>walletAmount)
                {
                   cout << "\n process has been filed your money is not enough\n\n"<<endl;
                   return;
                }
            else
                {
                   cout << "\n oh!! sorry this id of dog is not exist\n\n"<<endl;
                   return;
                }
        }

        //to buy cat
        else if (type_name=="cat")
        {
            for (int i=0;i<Catcnt;i++)
            {
                if(animalid==i&&Price<=walletAmount)
                {
                   cout << "\n process done successfully\n\n"<<endl;
                   walletAmount-=Price;
                   Catcnt--;
                   Animalcount--;
                   Animalsold++;
                   gainmoney+=Price;
                   return;
                }
            }
            if(Price>walletAmount)
                {
                   cout << "\n process has been filed your money is not enough\n\n"<<endl;
                   return;
                }
            else
                {
                   cout << "\n oh!! sorry this id of cat is not exist \n\n"<<endl;
                   return;
                }
        }
         //to buy bird
         if (type_name=="bird")
        {
            for (int i=0;i<Birdcnt;i++)
            {
                if(animalid==i&&Price<=walletAmount)
                {
                   cout << "\n process done successfully\n\n"<<endl;
                   walletAmount-=Price;
                   Birdcnt--;
                   Animalcount--;
                   Animalsold++;
                   gainmoney+=Price;
                   return;
                }
            }
            if(Price>walletAmount)
                {
                   cout << "\n process has been filed your money is not enough\n\n"<<endl;
                   return;
                }
            else
                {
                   cout << "\n oh!! sorry this id of bird is not exist\n\n"<<endl;
                   return;
                }
        }

        //if id and type of animal not exist
        else
        {
            cout << "\n oh!! sorry that animal is not exist\n\n"<<endl;
        }

    }

    //function to sell animal
    void Customer::sellAnimal(string type_name,double Price)
    {
        if(type_name=="dog")
        {
            Dogcnt++;
            Animalcount++;
            walletAmount+=Price;
            Animalbought++;
            spentmoney+=Price;
            cout<<"selling process done successfully\n"<<endl;
        }

        else if(type_name=="cat")
        {
            Catcnt++;
            Animalcount++;
            walletAmount+=Price;
            spentmoney+=Price;
            Animalbought++;
            cout<<"selling process done successfully"<<endl;
        }

        else if(type_name=="bird")
        {
            Birdcnt++;
            Animalcount++;
            walletAmount+=Price;
            spentmoney+=Price;
            Animalbought++;
            cout<<"selling process done successfully"<<endl;
        }
        else
        {
           cout<<"\n oh!! we can not buy this type of animal\n\n"<<endl;
        }
    }

    //function to add money
    void Customer::addmoney(double money)
    {
        walletAmount+=money;
    }
