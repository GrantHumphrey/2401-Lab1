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

    private: 
	unsigned long * data;
	size_t used;
	size_t capacity;
};

Numbers::Numbers(){
	unsigned long[5];
	byte_count += 5*sizeof(unsigned long);
	capacity = 5;
	used = 0;
}

void Numbers::add(unsigned long item){
	 if(used == size){
        resize();
    }
    data[used] = unsigned long item;
    used++;
}

void Numbers::resize(){

	byte_count += 5*sizeof(unsigned long);
	double* tmp;
    tmp = new double[size + 5];
	for(int i = 0; i < used; i++){
        tmp[i] = data[i];
    }
}

void Numbers::remove_last(){
delete data[];
used--;
}

void Numbers::display(std::ostream& outs){
for(int i = 0; i < capacity; i++){
	cout << data[i]" " << endl;
}
}

// You can leave this function alone
unsigned long *Numbers::reveal_address()const{
	return data;
}