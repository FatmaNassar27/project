#ifndef CAT_H
#define CAT_H
#include <bits/stdc++.h>
#include "Animal.h"

// Derived class
class Cat : public Animal
{
private:

    string Type;
    string hair_Size;
    string Color;

public:

     //counter for cat
    static int Catcnt;

    //Default constructor
    Cat();

    // Parameterized constructor
    Cat(string Type, string hair_Size, string Color);

    //setter function for type
    void set_type(string Type);

    //getter function for type
    string get_type();

    //setter function for hair size
    void set_hairsize(string hair_Size);

    //getter function for hair size
    string get_hairsize();

    //setter function for color
    void set_color(string Color);

    //getter function for color
    string get_color();

    // setter function for cat counter
    void set_catnum(int catnum);

    // function for cat sound
    void animalSound();

    //function for cat info
    void cat_info();

    //function for display cat counter
    int getCatCounter();
};

#endif // CAT_H
