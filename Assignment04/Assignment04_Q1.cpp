#include<iostream>

using namespace std;

class Time{
    int hour;
    int min;
    int sec;
    public:
    Time(void):hour(0), min(0),sec(0){}

    Time(int h, int m, int s): hour(h), min(m), sec(s){

    }

    void addTime(){
        cout<<"Enter hours"<<endl;
        cin>>hour;
        cout<<"ENter min"<<endl;
        cin>>min;
        cout<<"Enter sec"<<endl;
        cin>>sec;
    }

    void setHour(int h){
        hour=h;
    }

    void setMin(int min){
        this->min=min;
    }

    void setSec(int sec){
        this->sec=sec;
    }

    int getHour(){
        return hour;

    }
    int getMin(){
        return min;
    }

    int getSec(){
        return sec;
    }
    void printTime(){
        cout<<hour<<":"<<min<<":"<<sec<<endl;

    }
};

int main(){

    int size;
    int choice;

    cout<<"Enter no of objects u want to create"<<endl;
    cin>>size;

    Time *arr = new Time[size];

    do{
        cout<<"0. Exit"<<endl;
        cout<<"1.Add Time"<<endl;
        cout<<"2. Display All Time"<<endl;
        cout<<"3. Display only hrs of all time object"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            for(int i=0;i<size;i++){
                cout<<"Object"<<i+1<<endl;
                cout<<"  ";
                arr[i].addTime();
            }
            break;
        
            case 2:
            for(int i=0;i<size;i++){
                cout<<"Object "<<i+1<<endl;
                arr[i].printTime();
            }
            break;
            case 3:
            for(int i=0;i<size;i++){
                cout<<"Object "<<i+1<<endl;
                cout<<arr[i].getHour()<<endl;
            }
        }
    }while(choice!=0);
}