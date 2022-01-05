#include <iostream>
using namespace std;

class ComplexNumber{
    private:
        int real;
        int imaginery;
    
    public:
        int getReal(){
            return real;
        }

        int getImaginery(){
            return imaginery;
        }

        void display(){
            cout << "Complex Number: ";
            cout << real << "+" << imaginery << "i" << endl;
        }

        //constructor
        ComplexNumber(int r, int i){
            real = r;
            imaginery = i;
        }

        void add(ComplexNumber const &c2){
            this -> real += c2.real;
            this -> imaginery += c2.imaginery;
        }

        void multiply(ComplexNumber const &c2){
            this -> real *= c2.real;
            this -> imaginery *= c2.imaginery;
        }
};

int main(){
    int real1, imaginery1, real2, imaginery2;
    cout << "Enter two parts of complex number 1: ";
    cin >> real1 >> imaginery1;
    cout << "Enter two parts of complex number 2: ";
    cin >> real2 >> imaginery2;

    ComplexNumber c1(real1, imaginery1);
    ComplexNumber c2(real2, imaginery2);

    int choice;
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1){
        c1.add(c2);
        c1.display();
    }else if(choice == 2){
        c1.multiply(c2);
        c1.display();
    }else{
        return 0;
    }
}