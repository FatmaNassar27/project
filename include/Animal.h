#ifndef ANIMAL_H
#define ANIMAL_H
#include <bits/stdc++.h>


using namespace std;

// Base class
class Animal
{
private :

    int Id;
    int Age;
    string Name ;
    bool Availability;
    string Gender;
    double Price ;

public:

    //counter for animal
    static int Animalcount;

    //counter for animal sold
    static int Animalsold;

    //counter for animal bought
    static int Animalbought;

    //counter for gain money
    static int gainmoney;

    //counter for determine the money spent
    static int spentmoney;

    //Default constructor
    Animal();

    // Parameterized constructor
    Animal(string Name,string Gender,int Age,double Price,bool Availability);

    // setter function for animal id
    int setanimalid(int Id);

    // getter function for animal id
    int getanimalID ();

    // setter function for animal counter
    void set_animalnum(int num);

    // getter function for animal counter
    int get_animalnum() const;

    // getter function for animal name
    string getanimalname ();

    // getter function for animal gender
    string getanimalgender ();

     // getter function for animal age
    int getanimalage ();

     // getter function for animal price
    double getanimalprice ();

    //function for get animal info
    void set_animalinfo (string Name,string Gender,int Age,double Price,bool Availability);

    //function for animal sound
    void animalSound();

    //check if animal is available
    void isAvailable();

    // function to get animalinfo
    void get_info();
};
#endif // ANIMAL_H
