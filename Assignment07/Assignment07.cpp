#include<iostream>
#include<typeinfo>
using namespace std;
class Employee {
    protected:
    int id;
    double salary;
    public:
    Employee():id(0),salary(0){

    }
    Employee(int id,double salary ){
        this->id=id;
        this->salary=salary;
    }
    void setId(int id){
        this->id=id;
    }
    int getId(){
        return id;
    }
    void setSalary(double salary){
        this->salary=salary;

    }
    double getSalary(){
        return salary;

    }
   virtual void accept(){
        cout<<"Enter id :"<<endl;
        cin>>id;
        cout<<"Enter salary :"<<endl;
        cin>>salary ;

    }
   virtual void display(){
        cout<<"ID :"<<id;
        cout<<"Salary :  "<<salary;
    }

};
class Manager : virtual public Employee{
    protected:
    double bonus;
    public :
    Manager():bonus(0){
     
    }
    Manager(int id,double salary, double bonus):Employee(id,salary){
        this->bonus=bonus;
    }
    void setBonus(double bonus){
        this->bonus=bonus;
    }
    double getBonus(){
        return bonus;
    }
    void accept(){
        Employee::accept();
        acceptManager();
        
        
    }
    void display(){
           Employee::display();
           displayManger();
        
    }
    protected:
    void acceptManager(){
      cout<<"enter bonus"<<endl;
      cin>>bonus;

    }
    void displayManger(){
       
      cout<<"Bonus :"<<bonus<<endl;
    }
};
class Salesman :virtual public Employee{
    protected:
    double commission;
    public:
    Salesman():commission(0){

    }
    Salesman(int id, double salary ,double commission):Employee(id,salary){
              this->commission=commission;
    }
    void setCommission(double commission){
        this->commission=commission;
    }
    double getCommission(){
        return commission;
    }
    void accept(){
             Employee::accept();
             acceptSalesman();
             
       
    }
    void display(){
        Employee::display();
        displaySalesman();
        
    }
    protected:
    void acceptSalesman(){
     cout<<"Enter Commission"<<endl;
        cin>>commission;
    }
    void displaySalesman(){
         cout<<"Enter Commission"<<commission<<endl;
    }
};
class SalesManager : public Manager ,public  Salesman{
public :
SalesManager(){

}
SalesManager(int id , double salary, double bonus ,double commission ):Employee(id,salary),Manager(id,salary,bonus),Salesman(id,salary,commission){

}
void accept(){
    Employee::accept();
    Manager::acceptManager();
    Salesman::acceptSalesman();


}
void display(){
    Employee::display();
    Manager::display();
    Salesman::display();
    

}
};
int main(){
    int j=0;
    Employee *arr[j];
    int m=0;
    int s=0;
    int sm=0;
    int choice;
    do{
      cout<<"1.ADD MANAGER"<<endl;
      cout<<"2.ADD SALEMAN"<<endl;
      cout<<"3.ADD SALESMANAGER"<<endl;
      cout<<"4.DISPLAY THE COUNT OF ALL EMPLOYES WITH RECPECT TO DESIGNATION "<<endl;
      cout<<"5.DISPLAY ALL MANAGER"<<endl;
      cout<<"6.DISPLAY ALL SALESMAN"<<endl;
      cout<<"7.DISPLAY ALL SALESMANAGER"<<endl;
      cout<<"8.EXIT"<<endl;
      cout<<"no employee added "<<j<<endl;
      cin>>choice;

    switch (choice)
    {
    case 1:
        arr[j] = new Manager();
        arr[j]->accept();
        j++;
        break;
    case 2:
        arr[j]=new Salesman();
        arr[j]->accept();
        j++;
        break;
    case 3:
        arr[j]=new SalesManager();
        arr[j]->accept();
        j++;
        break;        
    case 4:
         for(int i=0;i<j;i++){
            
            if(typeid(*arr[i])==typeid(Manager)){
                 m++;
            }
            else if(typeid(*arr[i])==typeid(Salesman)){
                s++;
            }
            else if(typeid(*arr[i])==typeid(SalesManager)){
                sm++;
            }
         }
         cout<<"Count Manager : "<<m<<endl;
         cout<<"Count Salesman :"<<s<<endl;
         cout<<"Count salesmanger :"<<sm<<endl;

        break;
    case 5:
          for(int i=0;i<j;i++){
            
            if(typeid(*arr[i])==typeid(Manager)){
                 arr[i]->display();
            }
        }
            break;
         case 6:
         for(int i=0;i<j;i++){
            if(typeid(*arr[i])==typeid(Salesman)){
                 arr[i]->display();
            }}
        break;
        case 7:
        for(int i=0;i<j;i++){
            if(typeid(*arr[i])==typeid(SalesManager)){
                 arr[i]->display();
            }
        }
        break;
   
    }
    }while (choice!=8);
    
    

}