#ifndef BIRD_H
#define BIRD_H
#include <bits/stdc++.h>
#include "Animal.h"

// Derived class
class Bird : public Animal
{
private:

    string Type;
    string wing_Size;
    string plumage_Color;

public:

     //counter for bird
    static int Birdcnt;

    //Default constructor
    Bird();

    // Parameterized constructor
    Bird(string Type, string wing_Size, string plumage_Color);

    //setter function for type
    void set_type(string Type);

    //getter function for type
    string get_type();

    //setter function for wing size
    void set_wingsize(string wing_Size);

    //getter function for wing size
    string get_wingsize();

    //setter function for plumage color
    void set_plumagecolor(string plumage_Color);

    //getter function for plumage color
    string get_plumagecolor();

    // setter function for bird counter
    void set_birdnum(int birdnum);

    //getter function for bird counter
    int getBirdCounter()const;

    // function for bird sound
    void animalSound();

    //function for bird info
    void bird_info();
};
#endif // BIRD_H
