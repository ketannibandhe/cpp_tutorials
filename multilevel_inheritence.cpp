// Multilevel inheritence
#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;

public:
    int setnum(int r);
    void getnum();
};
int student::setnum(int r)
{
    roll_no = r;
}
void student::getnum()
{
    cout << "The roll No. of Student: " << roll_no << endl;
}

class marks : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(int m, int p);
    void getmarks();
};

void marks::setmarks(int m, int p)
{

    maths = m;
    physics = p;
}
void marks::getmarks()
{
    cout << "Mathematics Marks:" << maths << endl;
    cout << "Physics Marks:" << physics << endl;
}

class result : public marks
{
    float percentage;

public:
    void getresult();
};
void result::getresult()
{
    // setnum(97);
    getnum();
    getmarks();
    percentage = (maths + physics) / 2;
    cout << "the result of student: " << percentage << "%" << endl;
}

int main()
{
    result ketan;
    ketan.setnum(97);
    ketan.setmarks(99.2, 89.8);
    ketan.getresult();
    return 0;
}