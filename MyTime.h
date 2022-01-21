// Add documentation for each function

#include <iostream>
using namespace std;
class MyTime
{   
  public:

    // CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES 
    // DEFAULT ARGUMENTS
    MyTime(const int& h = 0, int m = 0);   

    // Member functions
    void Reset(int h, int m);

    void input(std::istream& ins);            

    void output(std::ostream& outs);

    int get_hours() const{return hours;}

    int get_minutes() const{return minutes;}

    // Friend functions
    MyTime operator + (const MyTime& t2)const;
 
    MyTime operator - (const MyTime& t2)const;
 
    MyTime operator * (int num)const;

    MyTime operator / (int num)const;

     bool operator == (const MyTime& t2)const;

     bool operator < (const MyTime& t2)const;

     bool operator <= (const MyTime& t2)const;
   
  private:
      void simplify();
      int hours;        // hours can be > 24
      int minutes;      // 0 <= minutes <= 59
 };
istream& operator >>(std::istream& fin, MyTime& t);
    
ostream& operator <<(std::ostream& fout, const MyTime& t);