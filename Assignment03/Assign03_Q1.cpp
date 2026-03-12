#include<iostream>
using namespace std;

class Cylinder{
  
    private:
    static double p;
    double radius;
    double height;

    public:
    Cylinder(): radius(0.0), height(0.0){

    }
    Cylinder(double radius, double height){

        this->radius=radius;
        this->height=height;
    }

    void setRadius(){

        this->radius=radius;
    }
    void setHeight(){
        this->height=height;
    }
    double getRadius(){
        return this->radius;
    }
    double getHeight(){
        return this->height;
    }
    
    // static void setPI(double p){
      
    //   Cylinder :: p=p; 

    // }

    void calculateVolume(){
       
        cout<<"Volume of Cylinder: "<<p*this->radius*this->radius*this->height;
    }
};

double Cylinder :: p = 3.14;

int main(){

    Cylinder c(3,6);
  //  c.setPI(10);
    c.calculateVolume();
    return 0;
}