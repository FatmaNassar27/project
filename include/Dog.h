#ifndef DOG_H
#define DOG_H
#include <bits/stdc++.h>
#include<vector>
#include "Animal.h"

// Derived class
class Dog : public Animal
{
private:

    string Type;
    string Size;
    string Color;

public:

    //counter for dog
    static int Dogcnt;

    //Default constructor
    Dog();

    // Parameterized constructor
    Dog(string Type, string Size, string Color);

    //setter function for type
    void set_type(string Type);

    //getter function for type
    string get_type();

    //setter function for size
    void set_size(string Size);

    //getter function for size
    string get_size();

    //setter function for color
    void set_color(string Color);

    //getter function for color
    string get_color();

    // setter function for dog counter
    void set_dognum(int dognum);

    //getter function for dog counter
    int getDogCounter()const;

    // function for dog sound
    void animalSound();

    //function for dog info
    void dog_info();

};
#endif // DOG_H
