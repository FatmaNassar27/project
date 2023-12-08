#include "Cat.h"

//Default constructor
Cat ::Cat()
{
    Type=" ";
    hair_Size=" ";
    Color=" ";
    Catcnt++;
}

// Parameterized constructor
Cat::Cat (string Type, string hair_Size, string Color)
{
    setanimalid(Catcnt);
    this->Type=Type;
    this->hair_Size=hair_Size;
    this->Color=Color;
    Catcnt++;
}

//setter function for type
void Cat:: set_type(string Type)
{
    this->Type=Type;
}

//getter function for type
string Cat:: get_type()
{
    return Type;
}

//setter function for hair size
void Cat:: set_hairsize(string hair_Size)
{
    this->hair_Size=hair_Size;
}

//getter function for hair size
string Cat:: get_hairsize()
{
    return hair_Size;
}

//setter function for color
void Cat:: set_color(string Color)
{
    this->Color=Color;
}

//getter function for color
string Cat:: get_color()
{
    return Color;
}

// setter function for cat counter
void Cat:: set_catnum(int catnum)
{
    Catcnt+=catnum;
    set_animalnum(catnum);
}

// function for cat sound
void Cat:: animalSound()
{
    cout << "The cat says: muaw muaw \n\n";
}

//function for cat info
void Cat:: cat_info()
{
    cout << " Type is : "<< Type <<endl;
    cout << " color is : "<< Color <<endl;
    cout << " size is : "<< hair_Size <<endl;
    cout <<endl;
}

//function for display cat counter
int Cat:: getCatCounter()
{
    return Catcnt;
}
