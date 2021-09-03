#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int age;
    float mark;
    string name,addr,MaSv;
public:
    Student();
    Student (int ,float ,string,string,string);
    void getinfo(Student *ps ,int n);
    void showinfo();
    void Showdata(Student *ps ,int n);


    void setAge(int);
    void setAddr(string);
    void setMark(float);
    void setName(string);
    void setMaSv(string);

    int getAge();
    float getMark();
    string getName();
    string getMaSv();
    string getAddr();
};

Student::Student()
{
    age = 0;
    mark = 0;
    name = "";
    addr = "";
    MaSv = "";
}
Student:: Student (int age ,float mark ,string name,string addr,string MaSv)
{
    setAge(age);
    setAddr(addr);
    setMark(mark);
    setMaSv(MaSv);
    setName(name);
}

void Student::setAge(int age)
{
    this ->age = age;
}
void Student::setAddr(string addr)
{
    this -> addr = addr;
}
void Student::setMark(float mark)
{
    this -> mark = mark;
}
void Student::setName(string name)
{
    this ->name = name;
}
void Student::setMaSv(string MaSv)
{
    this ->MaSv = MaSv;
}

int Student::getAge()
{
    return this->age;
}
float Student::getMark()
{
    return this->mark;
}
string Student::getName()
{
    return this ->name;
}
string Student::getMaSv()
{
    return this -> MaSv;
}
string Student::getAddr()
{
    return this ->addr;
}

void Student:: showinfo()
{
    cout << "===================\n";
    cout << "Ho ten : "<< getName() << endl ;
    cout << "Ma SV : " << getMaSv() << endl ;
    cout << "Address : " << getAddr()<< endl;
    cout << "Diem TB : " << getMark() << endl ;
    cout << "Age : " << getAge() << endl ;
     cout << "===================\n";
}
void Student:: getinfo(Student *ps ,int n)
{
    int age;
    float mark;
    string name,addr,MaSv;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Ho ten : ";
        getline(cin,name);
        cout << " Dia chi : ";
        getline(cin,addr);
        cout << "MaSv : ";
        getline(cin,MaSv);
        cin.ignore();
        cout << "Tuoi : ";
        cin >> age;
        cout <<"Diem TB : ";
        cin >> mark;

        Student p(age,mark,name,addr,MaSv);
        ps[i] = p ;
    }
    
}
void Student:: Showdata(Student *ps ,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        ps[i].showinfo();
    }  
}
int main()
{
    Student *st;
    int n;
    cout <<"Nhap so nguoi : ";
    cin >> n ;
    st = new Student[n];
    st -> getinfo(st,n);
    st -> Showdata(st,n);
    return 0;
}