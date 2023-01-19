#include<iostream>
#include <string>
using namespace std;
class Hero{
    //properties
     private:
    int health;
    public:
    char *name;
  char level;
  Hero(){
    cout<<" default contructor called"<<endl;
    name= new char[100];

  }
  //parameterised constructor
  Hero(int health){
    cout<<"This-> "<< this<<endl;
   this-> health = health;
  }

  Hero(int health, char level){
   this-> level=level;
   this-> health = health;
  }
  //copy constructor
  Hero(Hero &temp){
    cout<<"Copy constructor called"<<endl;
    this-> health= temp.health;
    this->health= health;
  }

  void print(){
    cout<<"health"<< this-> health <<endl;
    cout<<"level"<<this->level<<endl;
  }
  int gethealth(){
    return health;
  }
  char getlevel(){
    return level;
  }
  void sethealth(int h){
    health =h;
  }

  void setlevel(char ch){
    level= ch;
  }
  

};
int main(){
  Hero goten(70, 'c');
  goten.print();
  Hero trunks(goten);

  trunks.print();

   // //object created statically
    // Hero ramesh(10);
    // //cout << "Address of ramesh " << &ramesh << endl;
    // ramesh.print();

    // //dynamically
    // Hero *h =  new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();


/*
    //static allocation
    Hero a;
    a.sethealth(80);
    a.setlevel('b');
    cout<<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.gethealth()<<endl;
    //dynamic allocation
    Hero *b= new Hero;
    cout<<"level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).gethealth()<<endl;

    cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b-> gethealth()<<endl;


    //creating object
  //  Hero gohan;
   //cout<<"gohan health is "<<gohan.gethealth()<<endl;
    //gohan.health= 70;
    //gohan.sethealth(70);
      //  gohan.level= 'B';
    //cout<<"health is "<<gohan.gethealth()<<endl;
   // cout<<"level is "<<gohan.level;
   // cout<<"size "<<sizeof(h1);

*/
}