#include <string>
#include <iostream>

class Seat{
     private:
        std::string name;
    public:
        Seat(string name){ 
            this->name = name}

        void print(){
            for(int i = 0; i < 4; i++){
                std::cout << "A seat of type: " << name << endl;
            } 
        }
}

class Engine{
    private:
        std::string name;
    public:
        Engine(string name){ 
            this->name = name}

        void print(){
            std::cout << "An engine of type: " << name << endl;
        }
}

class Wheel{
    private:
        std::string name;
    public:
        Wheel(string name){ 
            this->name = name}

        void print(){
            for(int i = 0; i < 4; i++){
                std::cout << "A wheel of type: " << name << endl;
            } 
        }
}

class Steeringwheel{
    private:
        std::string name;
    public:
        Steeringwheel(string name){ 
            this->name = name}

        void print(){
            std::cout << "A steeringwheel of type: " << name << endl;
        }
}

class Car {
    private:
        std::string brand;
        std::string type;

    public:
        Car(){
            brand = "generic"
            type = "model"
            Engine engine("generic");
            Seat seat("generic");
            Wheel wheel("generic");
            Steeringwheel steer("generic");
        }

        Car(std::string brand, std::string type, std::string eng, std::string s, std::string w, std::string sw){
            this->brand = brand;
            this->type = type;
            Engine engine(eng);
            Seat seat(s);
            Wheel wheel(w);
            Steeringwheel steer(sw);
        }

        void print(){
            std::cout << "This car is a" << brand << " " << type << "that is composed by:" << endl;
            engine.print();
            seat.print();
            wheel.print();
            steer.print();
        } 
        

}

int main() {

    Car c;      
    c.print();  
    
    Car c2("Peugeot","205 Gti", "four cylinders in line", "Konig","Recaro", "Momo");        
    c2.print(); 

}