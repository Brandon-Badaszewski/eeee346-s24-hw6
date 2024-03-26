#include "Cow.h"

const string Cow::SAYS = "Moo!";

Cow::Cow(string name, int age, int weight)
    : name(name), age(age), weight(weight){

    }

void Cow::incrementAge(){
    age++;
}

void Cow::setWeight(int weight){
    this->weight = weight;
}

string Cow::getAnimalType(){
    return "Cow";
}

ostream& operator<<(ostream& out, Cow& cow){
    out << "Name: " << cow.name << endl;
    out << "Age: " << cow.age << endl;
    out << "Weight: " << cow.weight << " lbs" << endl;

    return out;
}