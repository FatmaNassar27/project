#include <bits/stdc++.h>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "Customer.h"
#include "Owner.h"

using namespace std;

//intialization animal counter
int Animal::Animalcount=0;
int Animal::Animalsold=0;
int Animal::Animalbought=0;
int Dog::Dogcnt=0;
int Cat::Catcnt=0;
int Bird::Birdcnt=0;
//counter for gain money
int Animal::gainmoney=0;
//counter for spent money
int Animal::spentmoney=0;

int main()
{
    Owner owner ("Fatma","female",22,100000,201033891974,"fatmanassar@gmail.com","Menofia Egypt");
    owner.get_ownerinfo();
    cout << endl;

    Dog dog1("hasxy","small","black");
    dog1.set_animalinfo("Juno","female",2,500,false);
    dog1.get_info();
    dog1.dog_info();
    dog1.animalSound();

    Dog dog2("Barbet","large","black and white");
    dog2.set_animalinfo("Xena","female",4,300,true);
    dog2.dog_info();
    dog2.animalSound();

    Dog dog3("Vizsla","small","white");
    dog3.set_animalinfo("Aspen","female",5,800,true);
    dog3.dog_info();
    dog3.animalSound();

    Dog dog4("Sussex spaniel","medium","yellow");
    dog4.set_animalinfo("Louie","male",7,400,false);
    dog4.dog_info();
    dog4.animalSound();

    Dog dog5("Lagotto Romagnolo","large","black and white");
    dog5.set_animalinfo("Bandit","male",2,1000,true);
    dog5.dog_info();
    dog5.animalSound();

    Dog dog6("Nederlandse Kooikerhondje","medium","white");
    dog6.set_animalinfo("Stella","female",3,3500,true);
    dog6.dog_info();
    dog6.animalSound();

    Dog dog7("Labrador retriever","small","yellow");
    dog7.set_animalinfo("Thor","male",10,1900,false);
    dog7.dog_info();
    dog7.animalSound();

    Dog dog8("Golden retriever","large","yellow");
    dog8.set_animalinfo("Nova","female",8,5500,true);
    dog8.dog_info();
    dog8.animalSound();

    Dog dog9("Chesapeake Bay retriever","small","black");
    dog9.set_animalinfo("Lucky","male",2,3400,true);
    dog9.dog_info();
    dog9.animalSound();

    Dog dog10("Bracco Italiano","medium","white");
    dog10.set_animalinfo("Hazel","female",5,1600,true);
    dog10.dog_info();
    dog10.animalSound();

    Dog dog11("Field spaniel","large","black and white");
    dog11.set_animalinfo("Chandler","male",7,8000,true);
    dog11.dog_info();
    dog11.animalSound();

    Dog dog12("Weimaraner","small","yellow and white");
    dog12.set_animalinfo("Ginger","female",6,2450,false);
    dog12.dog_info();
    dog12.animalSound();

    Dog dog13("Nederlandse Kooikerhondje","large","black and white");
    dog13.set_animalinfo("Finn","male",6,6500,true);
    dog13.dog_info();
    dog13.animalSound();

    Dog dog14("Irish water spaniel","medium","black and white");
    dog14.set_animalinfo("Paisley","female",1,750,true);
    dog14.dog_info();
    dog14.animalSound();

    Dog dog15("Bracco Italiano","small","white");
    dog15.set_animalinfo("Kobe","male",3,1850,false);
    dog15.dog_info();
    dog15.animalSound();

    Cat cat1("hasxy","small","black");
    cat1.set_animalinfo("Juno","female",2,500,false);
    cat1.cat_info();
    cat1.animalSound();

    Cat cat2("Barbet","large","black and white");
    cat2.set_animalinfo("Xena","female",4,300,true);
    cat2.cat_info();
    cat2.animalSound();

    Cat cat3("Vizsla","small","white");
    cat3.set_animalinfo("Aspen","female",5,800,true);
    cat3.cat_info();
    cat3.animalSound();

    Cat cat4("Sussex spaniel","medium","yellow");
    cat4.set_animalinfo("Louie","male",7,400,false);
    cat4.cat_info();
    cat4.animalSound();

    Cat cat5("Lagotto Romagnolo","large","black and white");
    cat5.set_animalinfo("Bandit","male",2,1000,true);
    cat5.cat_info();
    cat5.animalSound();

    Cat cat6("Nederlandse Kooikerhondje","medium","white");
    cat6.set_animalinfo("Stella","female",3,3500,true);
    cat6.cat_info();
    cat6.animalSound();

    Cat cat7("Labrador retriever","small","yellow");
    cat7.set_animalinfo("Thor","male",10,1900,false);
    cat7.cat_info();
    cat7.animalSound();

    Cat cat8("Golden retriever","large","yellow");
    cat8.set_animalinfo("Nova","female",8,5500,true);
    cat8.cat_info();
    cat8.animalSound();

    Cat cat9("Chesapeake Bay retriever","small","black");
    cat9.set_animalinfo("Lucky","male",2,3400,true);
    cat9.cat_info();
    cat9.animalSound();

    Cat cat10("Bracco Italiano","medium","white");
    cat10.set_animalinfo("Hazel","female",5,1600,true);
    cat10.cat_info();
    cat10.animalSound();

    Bird bird1("hasxy","small","black");
    bird1.set_animalinfo("Juno","female",2,500,false);
    bird1.bird_info();
    bird1.animalSound();


    Bird bird2("Barbet","large","black and white");
    bird2.set_animalinfo("Xena","female",4,300,true);
    bird2.bird_info();
    bird2.animalSound();

    Bird bird3("Vizsla","small","white");
    bird3.set_animalinfo("Aspen","female",5,800,true);
    bird3.bird_info();
    bird3.animalSound();

    Bird bird4("Sussex spaniel","medium","yellow");
    bird4.set_animalinfo("Louie","male",7,400,false);
    bird4.bird_info();
    bird4.animalSound();

    Bird bird5("Lagotto Romagnolo","large","black and white");
    bird5.set_animalinfo("Bandit","male",2,1000,true);
    bird5.bird_info();
    bird5.animalSound();

    Bird bird6("Nederlandse Kooikerhondje","medium","white");
    bird6.set_animalinfo("Stella","female",3,3500,true);
    bird6.bird_info();
    bird6.animalSound();

    Bird bird7("Labrador retriever","small","yellow");
    bird7.set_animalinfo("Thor","male",10,1900,false);
    bird7.bird_info();
    bird7.animalSound();

    Bird bird8("Golden retriever","large","yellow");
    bird8.set_animalinfo("Nova","female",8,5500,true);
    bird8.bird_info();
    bird8.animalSound();

    Bird bird9("Chesapeake Bay retriever","small","black");
    bird9.set_animalinfo("Lucky","male",2,3400,true);
    bird9.bird_info();
    bird9.animalSound();

    Bird bird10("Bracco Italiano","medium","white");
    bird10.set_animalinfo("Hazel","female",5,1600,true);
    bird10.bird_info();
    bird10.animalSound();

    Customer c1(100,"Ahmed","male",30,5000,"ahmed@gimal.com","menofia");
    c1.getCustomerInfo();
    cout<<endl;
    cout << c1.get_customerwalletamount()<<"L.E in your wallet "<<endl;
    c1.buyAnimal(1,"dog",500);
    c1.sellAnimal("dog",1000);
    cout<<endl;

    Customer c2(102,"Mariam","female",22,1400,"mariam@gimal.com","tanta");
    c2.getCustomerInfo();
    cout<<endl;
    cout << c2.get_customerwalletamount()<<"L.E in your wallet "<<endl;
    c2.buyAnimal(7,"cat",1900);
    c2.sellAnimal("dog",400);
    cout<<endl;

    Customer c3(103,"Rokia","female",27,6000,"rokia@gimal.com","geza");
    c3.getCustomerInfo();
    cout<<endl;
    cout << c3.get_customerwalletamount()<<"L.E in your wallet "<<endl;
    c3.buyAnimal(20,"dog",3000);
    c3.sellAnimal("bird",800);
    cout<<endl;

    Customer c4(104,"Aly","male",32,10000,"aly@gimal.com","cairo");
    c4.getCustomerInfo();
    cout<<endl;
    cout << c4.get_customerwalletamount()<<"L.E in your wallet "<<endl;
    c4.buyAnimal(8,"cat",5500);
    c4.sellAnimal("cat",9000);
    cout<<endl;

    Customer c5(105,"Rawda","female",21,6000,"rawda@gimal.com","sheben");
    c5.getCustomerInfo();
    cout<<endl;
    cout << c5.get_customerwalletamount()<<"L.E in your wallet "<<endl;
    c5.buyAnimal(2,"snake",1500);
    c5.sellAnimal("bird",1400);
    cout<<endl;

    Customer c6(106,"Naden","female",23,3000,"naden@gimal.com","alexandria");
    c6.getCustomerInfo();
    cout<<endl;
    cout << c6.get_customerwalletamount()<<"L.E in your wallet "<<endl;
    c6.sellAnimal("cat",500);
    c6.buyAnimal(9,"bird",3400);
    cout<<endl;

    Customer c7(107,"Mena","male",25,1500,"mena@gimal.com","cairo");
    c7.getCustomerInfo();
    cout<<endl;
    cout << c7.get_customerwalletamount()<<" L.E in your wallet "<<endl;
    c7.buyAnimal(5,"dog",1000);
    c7.sellAnimal("cat",3500);
    cout<<endl;

    owner.add_money(15000);
    cout << endl;
    cout<<owner.get_animalsold()<<" animal has been sold ."<<endl;
    cout << endl;
    cout<<owner.get_animalbought()<<" animal has been bought ."<<endl;
    cout << endl;
    cout<<owner.get_gain()<<" L.E you have gain ."<<endl;
    cout << endl;
    owner.get_money(5000);
    cout << endl;
    cout<<"you have "<<owner.get_ownerbankaccount()<<" L.E in your bank account ."<<endl;
    cout << endl;

    cout<<"There are "<<dog15.get_animalnum()<<" animals in your pet ."<<endl;
    return 0;
}
