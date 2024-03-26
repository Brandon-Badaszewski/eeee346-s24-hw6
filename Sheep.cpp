#include "Sheep.h"

const string Sheep::SAYS = "Baa!";

Sheep::Sheep(std::string name, int age, int weight)
    : name(name), age(age), weight(weight){

    }

Sheep::Sheep(Sheep &sheep)
    : Sheep(sheep.name + " Clone", sheep.age, sheep.weight){

    }

void Sheep::incrementAge(){
    age++;
}

void Sheep::setWeight(int weight){
    this->weight = weight;
}

string Sheep::getAnimalType(){
    return "Sheep";
}

ostream& operator<<(ostream& out, Sheep& sheep){
    out << "Name: " << sheep.name << endl;
    out << "Age: " << sheep.age << endl;
    out << "Weight: " << sheep.weight << " lbs" << endl;

    return out;
}

