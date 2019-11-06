#include <iostream>

class Animal {
public:
    virtual std::string getType() = 0;
    virtual std::string getName() { return ""; }
    virtual std::string getNoise() { return ""; }

    void sound() { 
        std::string type = getType();
        std::string name = getName();
        std::string noise = getNoise();
        if (name == ""){
            std::cout << "A " << type;
        }
        else{
            std::cout << name << " the " << type;
        }
        if (noise == ""){
            std::cout << " doesn't make a sound." << std::endl;
        }
        else{
            std::cout << " says " << noise << std::endl;
        }
        
    }
};

class Dog : public Animal {
private:
    std::string name;
public:
    Dog(const std::string &nm) { name = nm; }
    std::string getType()  { return "dog"; }
    std::string getName()  { return name; }
    std::string getNoise() { return "ouaf! ouaf!"; }
};

/* anonymous */
class Chicken : public Animal {
public:
    std::string getType()  { return "chicken"; }
    std::string getNoise() { return "cot cot codet!"; }
};

/* silent and anonymous */
class Spider : public Animal {
public:
    std::string getType()  { return "spider"; }
};

int main()
{
    Animal **farm = new Animal*[3];

    farm[0] = new Dog("Milou");
    farm[1] = new Chicken;
    farm[2] = new Spider;

    for(int i = 0; i < 3; i ++)
        farm[i]->sound();

    for (int i = 0; i < 3; i++)
        delete farm[i];
    delete[] farm;
}