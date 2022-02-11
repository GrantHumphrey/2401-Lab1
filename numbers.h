/*************************************************************************
	A little class that holds a dynamic array of numbers.
	I have provided a start here, you need to write the function
		implementations. DO NOT remove the byte_count lines that are
		already in a few of the functions.


    John Dolan			Spring 2013		CS2401 Lab Assignment 4
	Patricia Lindner	Fall 2021
*************************************************************************/

#include <iostream>
using namespace std;
size_t byte_count = 0;
class Numbers{
    public:
		Numbers();
		void add(unsigned long item);
		void resize();
		void remove_last();
		void display(std::ostream& outs);
		unsigned long* reveal_address()const;
		void overload(const numbers& other);
		void deconstructor();

    private: 
	unsigned long * data;
	size_t used;
	size_t capacity;
};

Numbers::Numbers(){
	data = new unsigned long[5];
	byte_count += 5*sizeof(unsigned long);
	capacity = 5;
	used = 0;
}

void Numbers::add(unsigned long item){
	 if(used == capacity){
        resize();
    }
    data[used] = item;
    used++;
}

void Numbers::resize(){

	byte_count += 5*sizeof(unsigned long);
	double* tmp;
    tmp = new double[capacity + 5];
	for(int i = 0; i < used; i++){
        tmp[i] = data[i];
    }
}

void Numbers::remove_last(){
remove(used);
used--;
}

void Numbers::display(std::ostream& outs){
for(int i = 0; i < capacity; i++){
	cout << data[i] << endl;
}
}
void Numbers::overload(const numbers& other){
	if(this == &other){
        return;
    }
	delete data[];
	
	used = other.used;
	capacity = other.capacity;
	data = new double[capacity];
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
}
void Numbers::deconstructor();{
	delete []data;
}

// You can leave this function alone
unsigned long *Numbers::reveal_address()const{
	return data;
}
