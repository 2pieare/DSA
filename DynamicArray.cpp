#include <iostream>
using namespace std;

class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:

    //constructor
    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    //copy constructor
    DynamicArray(DynamicArray const &d){
        //shallow copy this -> data = d.data;
        //deep copy
        this -> data = new int[d.nextIndex];
        for(int i=0; i<d.nextIndex; i++){
            this -> data[i] = d.data[i];
        }
        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;
    }

    //copy assignment operator. we overload the = operator
    void operator=(DynamicArray const &d){
        this -> data = new int[d.nextIndex];
        for(int i=0; i<d.nextIndex; i++){
            this -> data[i] = d.data[i];
        }
        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;
    }

    void add(int element){
        if(nextIndex == capacity){
            int *newdata = new int[2*capacity];
            for(int i=0; i< capacity; i++){
                newdata[i] = data[i];
            }
            delete [] data;
            data = newdata;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i){
        if(i < nextIndex){
        return data[i];
        }else{
            return -1;
        }
    }

    void add(int i, int element){
        if(i < nextIndex){
            data[i] = element;
        }else if(i == nextIndex){
            add(element);
        }else{
            return;
        }
    }

    void print(){
        for(int i=0; i <nextIndex; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    DynamicArray d1;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    DynamicArray d2(d1);    //copy constructor acts here. defaulty constructor always does shallow copy
    /* to check shallow copying
        do this - d1.add(0,100);
                  d2.print();
        here you will see that d2 will also reflect the changes */
    DynamicArray d3;
    d3 = d1;

    d1.add(0,100);
    d2.add(1,200);
    d3.add(2,300);

    d1.print();
    d2.print();
    d3.print();
}
