// The implementation file for the MyTime class
#include "MyTime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Constructors

MyTime::MyTime(const int& h, int m){
	hours = h;
	minutes = m;
}

// Member and friend functions
void MyTime::Reset(int h, int m){
	hours = h;
	minutes = m;
}

void MyTime::simplify(){
    hours += minutes/60;
	minutes = minutes%60;
}

MyTime MyTime::operator + (const MyTime& t2) const{
	MyTime tmp;
    tmp.hours = hours + t2.hours;
	tmp.minutes = minutes + t2.minutes;
	tmp.simplify();
	return tmp;
}

MyTime MyTime::operator - (const MyTime& t2) const{
	MyTime tmp;
	tmp.minutes = abs((hours*60+minutes) - (t2.hours*60+t2.minutes));
	tmp.simplify();
	return tmp;
}

MyTime MyTime::operator / (int num){
	MyTime tmp;
	tmp.minutes = hours*60 + minutes;
	tmp.minutes /= num;
	tmp.simplify();
	return tmp;
}

MyTime MyTime::operator * (int num){
	MyTime tmp;
	tmp.minutes = hours*60 + minutes;
	tmp.minutes *= num;
	tmp.simplify();
	return tmp;
}

bool MyTime::operator == (const MyTime& t2)const{
	return hours == t2.hours && minutes == t2.minutes;
}

bool MyTime::operator < (const MyTime& t2)const{
	return (t1.hours*60 + t1.minutes) < (t2.hours*60 + t2.minutes);
}

bool MyTime::operator <=(const MyTime& t2)const{
	return (hours*60 + minutes) <= (t2.hours*60 + t2.minutes);
}

void MyTime::input(istream&ins){
	char junk;
	ins >> hours;
  	ins.get(junk);
	ins >> minutes;
	simplify();
	return ins;
}

void MyTime::output(ostream& outs){
	outs << hours << ':' << setw(2) << setfill('0') << minutes;
	return outs;
}


ostream& operator <<(ostream& outs, const MyTime& t1){
    outs << t1.hours << ':' << setw(2) << setfill('0') << t1.minutes;
	return outs;
}

istream& operator >> (istream& ins, MyTime& t1){
	char junk;
	ins >> t1.hours;
  	ins.get(junk);
	ins >> t1.minutes;
	t1.simplify();
	return ins;
}