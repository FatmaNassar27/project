#include "Animal.h"

//Default constructor
Animal::Animal()
{
    Age =0;
    Name =" " ;
    Gender =" ";
    double Price =0 ;
    bool Availability = true;
}

// Parameterized constructor
Animal::Animal(string Name,string Gender,int Age,double Price,bool Availability)
{
    this ->Age = Age;
    this ->Name = Name ;
    this ->Gender = Gender;
    this ->Price = Price ;
    this ->Availability=Availability;
}

// setter function for animal id
int Animal:: setanimalid(int Id)
{
    this ->Id=Id;
}

// getter function for animal id
int Animal:: getanimalID ()
{
    return Id;
}

// setter function for animal counter
void Animal:: set_animalnum(int num)
{
    Animalcount+=num;
}

// getter function for animal counter
int Animal:: get_animalnum() const
{
    return Animalcount;
}

// getter function for animal name
string Animal:: getanimalname ()
{
    return Name;
}

// getter function for animal gender
string Animal:: getanimalgender ()
{
    return Gender;
}

// getter function for animal age
int Animal:: getanimalage ()
{
    return Age;
}

// getter function for animal price
double Animal:: getanimalprice ()
{
    return Price;
}

//function for get animal info
void Animal:: set_animalinfo (string Name,string Gender,int Age,double Price,bool Availability)
{
    this ->Age = Age;
    this ->Name = Name ;
    this ->Gender = Gender;
    this ->Price = Price ;
    this ->Availability=Availability;
    Animalcount++;
}

//function for animal sound
void Animal:: animalSound()
{
    cout << "\n The animal makes a sound \n ";
}

//check if animal is available
void Animal:: isAvailable()
{
    if(Availability==true)
    {
        cout << "Available : Yes "<<endl;
    }
    else
    {
        cout << "Available : No"<< endl;
    }
}

// function to get animalinfo
void Animal:: get_info()
{
    cout << " Name : "<< Name <<endl;
    cout << " Age : "<< Age <<endl;
    cout << " Id : "<< Id <<endl;
    cout << " Gender : "<< Gender <<endl;
    cout << " price : "<< Price <<endl;
    isAvailable();
}
