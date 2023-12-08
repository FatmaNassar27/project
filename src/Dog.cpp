#include "Dog.h"

//Default constructor
Dog::Dog()
{
    setanimalid(Dogcnt+1);
    Type=" ";
    Size=" ";
    Color=" ";
    Dogcnt++;
}

// Parameterized constructor
Dog::Dog(string Type, string Size, string Color)
{
    setanimalid(Dogcnt+1);
    this->Type=Type;
    this->Size=Size;
    this->Color=Color;
    Dogcnt++;
}
//setter function for type
void  Dog:: set_type(string Type)
{
    this->Type=Type;
}

//getter function for type
string  Dog:: get_type()
{
    return Type;
}

//setter function for size
void Dog::set_size(string Size)
{
    this->Size=Size;
}

//getter function for size
string Dog:: get_size()
{
    return Size;
}

//setter function for color
void Dog:: set_color(string Color)
{
    this->Color=Color;
}

//getter function for color
string Dog:: get_color()
{
    return Color;
}

// setter function for dog counter
void Dog:: set_dognum(int dognum)
{
    Dogcnt+=dognum;
    set_animalnum(dognum);
}

//getter function for dog counter
int Dog:: getDogCounter()const
{
    return Dogcnt;
}

// function for dog sound
void Dog:: animalSound()
{
    cout << "The dog says: bow wow \n \n";
}

//function for dog info
void Dog:: dog_info()
{
    cout << " Type is : "<< Type <<endl;
    cout << " color is : "<< Color <<endl;
    cout << " size is : "<< Size <<endl;
    cout<<endl;
}
