#include<iostream>
using namespace std;

class Car{

    private:
    unsigned int total_car;
    unsigned int paying_cars;
    double total_cash;
    double total_nonpaying_car;


    public:
    Car(void){

        this->total_car=0;
        this->paying_cars=0;
        this->total_cash=0;
        this->total_nonpaying_car+=0;
    
    }

    void payingCars(){
        this->total_car++;
        this->total_cash+=0.50;
        this->paying_cars++;
       
    }

    void nopayCar(){
        this->total_nonpaying_car+=1;
        this->total_car++;
    }

    void printOnConsole(){
        cout<<"total_car: "<<this->total_car<<endl;
        cout<<"total_cash: "<<this->total_cash<<endl;
        cout<<"total_paying_cars:  "<<this->paying_cars<<endl;
        cout<<"total_nonpaying_cars:  "<<this->total_nonpaying_car;
        
    }
};

int main(){

    Car c;
    c.payingCars();
    c.payingCars();
    c.payingCars();
    c.nopayCar();
    c.nopayCar();
    c.printOnConsole();

}