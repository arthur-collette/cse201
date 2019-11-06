#include <iostream>
#include <string>

class Seat{
     private:
        std::string name = "generic";
    
    public:
        Seat(){
        }

        Seat(std::string name){ 
            this->name = name;}

        void print(){
            for(int i = 0; i < 4; i++){
                std::cout << "A seat of type: " << name << std::endl;
            } 
        };
};

class Engine{
    private:
        std::string name = "generic";
    public:
        Engine(){
        }

        Engine(std::string name){ 
            this->name = name;}

        void print(){
            std::cout << "An engine of type: " << name << std::endl;
        };
};

class Wheel{
    private:
        std::string name = "generic";
    public:
        Wheel(){
        }

        Wheel(std::string name){ 
            this->name = name;}

        void print(){
            for(int i = 0; i < 4; i++){
                std::cout << "A wheel of type: " << name << std::endl;
            } 
        };
};

class Steeringwheel{
    private:
        std::string name = "generic";
    public:
        Steeringwheel(){
        }
        
        Steeringwheel(std::string name){ 
            this->name = name;}

        void print(){
            std::cout << "A steeringwheel of type: " << name << std::endl;
        };
};

class Car {
    private:
        std::string brand;
        std::string type;
        Engine  engine;
        Wheel   wheel;
        Steeringwheel steer;
        Seat    seat;

    public:
        Car() {
            brand = "generic";
            type = "model";
            engine = Engine();
            seat =Seat();
            wheel = Wheel();
            steer = Steeringwheel();
        }

        Car(std::string brand, std::string type, std::string eng, std::string s, std::string w, std::string sw){
            this->brand = brand;
            this->type = type;
            engine = Engine(eng);
            seat = Seat(s);
            wheel = Wheel(w);
            steer = Steeringwheel(sw);
        }

        void print(){
            std::cout << "This car is a " << brand << " " << type << " that is composed by:" << std::endl;
            engine.print();
            seat.print();
            wheel.print();
            steer.print();
        };
        

};

int main() {

    Car c;      
    c.print();  
    
    Car c2("Peugeot","205 Gti", "four cylinders in line", "Konig","Recaro", "Momo");        
    c2.print(); 

}