#include "Bird.h"

Bird::Bird ()
{
    Type=" ";
    wing_Size=" ";
    plumage_Color=" ";
    Birdcnt++;
}

// Parameterized constructor
Bird ::Bird (string Type, string wing_Size, string plumage_Color)
{
    setanimalid(Birdcnt);
    this->Type=Type;
    this->wing_Size=wing_Size;
    this->plumage_Color=plumage_Color;
    Birdcnt++;
}

//setter function for type
void Bird:: set_type(string Type)
{
    this->Type=Type;
}

//getter function for type
string Bird:: get_type()
{
    return Type;
}

//setter function for wing size
void Bird:: set_wingsize(string wing_Size)
{
    this->wing_Size=wing_Size;
}

//getter function for wing size
string Bird:: get_wingsize()
{
    return wing_Size;
}

//setter function for plumage color
void Bird:: set_plumagecolor(string plumage_Color)
{
    this->plumage_Color=plumage_Color;
}

//getter function for plumage color
string Bird:: get_plumagecolor()
{
    return plumage_Color;
}

// setter function for bird counter
void Bird:: set_birdnum(int birdnum)
{
    Birdcnt+=birdnum;
    set_animalnum(birdnum);
}

//getter function for bird counter
int Bird:: getBirdCounter()const
{
    return Birdcnt;
}
// function for bird sound
void Bird:: animalSound()
{
    cout << "The bird says: sew sew \n \n";
}

//function for bird info
void Bird:: bird_info()
{
    cout << " Type is : "<< Type <<endl;
    cout << " color is : "<< plumage_Color <<endl;
    cout << " size is : "<< wing_Size <<endl;
    cout<<endl;
}
