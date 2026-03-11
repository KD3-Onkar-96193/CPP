#include<iostream>

using namespace std;

class Box{

    private:
    int length ;
    int width;
    int height;

    public:

     Box( void ){

      this->length =0;
      this->width =0;
      this->height=0;
    }

    Box(int val){

      this->length =val;
      this->width =val;
      this->height=val;
    }

    Box(int length, int width, int height ){

        
        this->length=length;
        this->width=width;
        this->height=height;
    }
 
    void setLength(){
  
       this->length=length;
         
    }

    void setWidth(){
  
       this->width=width;
         
    }

    void setHeight(){
  
       this->height=height;
         
    }

    int getLength(){

        return this->length=length;
    }

     int getWidth(){

        return this->width=width;
    }

     int getHeight(){

        return this->height=height;
    }

   

    void Volume(){

        int vol = this->length*this->width*this->height;
       cout<<"Volume of Box is : "<<vol<<endl;
       
    }
    
};

int main()
{


int choice;
    
    do
    {
       
        cout << "1. Calculate Volume with default values\n";
        cout << "2. Calculate Volume with same length, breadth and height\n";
        cout << "3. Calculate Volume with different length, breadth and height\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                Box b1; 
                 b1.Volume();
                cout << "Volume = "<< endl;
                break;
            }

            case 2:
            {
                int x;
                cout << "Enter value for length, breadth and height: ";
                cin >> x;

                Box b2(x); 
                 b2.Volume() ;
                cout << "Volume = "<< endl;
                break;
            }

            case 3:
            {
                int l, b, h;
                cout << "Enter length, breadth and height: ";
                cin >> l >> b >> h;

                Box b3(l, b, h);
                b3.Volume();
                cout << "Volume = "  << endl;
                break;
            }

            case 4:
                cout << "Exit program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;

}