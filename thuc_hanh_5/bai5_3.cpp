#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    // ho ten dia chi chuc vu so dien thoai luong
    int age;
    int Pid;
    string firtname;
    string lastname;
    string midname;
    string address;
    string position;
    string phonenumber;
    float salary;

public:
    static int id;
    Employee();
    Employee(int,int,string,string,string,string,string,string,float);
    void showinfo();
    void getinfo(Employee * ps , size_t n);
    void ShowInFo(Employee * ps , size_t n);

    void setAge(int);
    void setID(int);
    void setSalary(float);
    void setFirtname(string);
    void setMidname(string);
    void setLastname(string);
    void setPhonenumber(string);
    void setPosition(string);
    void setAddress(string);

    int getID();
    float getSalary();
    int getAge();
    string getFirtname();
    string getMidname();
    string getLastname();
    string getAddress();
    string getPosition();
    string getPhonenumber();
};

int Employee :: id = 1000 ;
Employee::Employee()
{
    age = 0;
    Pid = 0;
    firtname = "";
    midname = "";
    lastname = "";
    address = "";
    position = "";
    phonenumber = "";
    salary = 0;
}

Employee::Employee(int id ,int age,string firtname,string midname,string lastname,string address,string position,string phonenumber,float salary)
{
    setAge(age);
    setID(id);
    setLastname(lastname);
    setMidname(midname);
    setFirtname(firtname);
    setSalary(salary);
    setAddress(address);
    setPosition(position);
    setPhonenumber(phonenumber);

}

void Employee::setAge(int age)
{
    this -> age = (age >= 0) ? age : 0;
}
void Employee::setID(int id)
{
    this ->Pid = (id >= 1000) ? id :Employee:: id ++;
}
void Employee::setSalary(float salary)
{
    this -> salary = salary;
}
void Employee::setFirtname(string firtname)
{
    this -> firtname = firtname;
}
void Employee::setMidname(string midname)
{
    this -> midname = midname;
}
void Employee::setLastname(string lastname)
{
    this ->lastname = lastname;
}
void Employee::setPhonenumber(string phonenumber)
{
    this -> phonenumber = phonenumber;
}
void Employee::setPosition(string position)
{
    this -> position = position;
}
void Employee::setAddress(string address)
{
    this -> address = address;
}

int Employee::getID()
{
    return this -> Pid;
}
float Employee::getSalary()
{
    return this -> salary;
}
int Employee::getAge()
{
    return this -> age;
}
string Employee::getFirtname()
{
    return this -> firtname;
}
string Employee::getMidname()
{
    return this -> midname;
}
string Employee::getLastname()
{
    return this ->lastname;
}
string Employee::getAddress()
{
    return this -> address;
}
string Employee::getPosition()  
{
    return this -> position;
}
string Employee::getPhonenumber()
{
    return this -> phonenumber;
}

void Employee::showinfo()
{
    cout <<"============================\n";
    cout << "Firt Name : " << getFirtname() << endl ;
    cout << "Mid Name : " << getMidname() << endl ;
    cout << "Last Name : " << getLastname() << endl ;
    cout << "ID : " << getID() <<  endl;
    cout << "Age : " << getAge() << endl;
    cout << "Address : " << getAddress() << endl ;
    cout << "Position : " << getPosition() << endl ;
    cout << "Salary : " << getSalary() << endl;
    cout << "PhoneNumber : " << getPhonenumber() <<endl ;
    cout <<"============================\n";
}
void Employee::getinfo(Employee * ps , size_t n)
{
    int age;
    float sal;
    string firt,mid,last,addr,phone,pos;
    for (size_t i = 0; i < n ; i++)
    {
        cout <<"FirtName : ";
        cin >> firt;
        cout << "LastName : ";
        cin >> last;
        cout << "MidName : ";
        cin.ignore();
        getline(cin,mid);
        cout << "Address : ";
        cin.ignore();
        getline(cin,addr); 
        cout << "Position : ";
        cin.ignore();
        getline(cin,pos);
        cout << "Phonenumber : " ;
        cin >> phone;
        cout << "Salary : ";
        cin >> sal;
        cout << "Age : ";
        cin >> age;

        Employee p (0,age,firt,mid,last,addr,pos,phone,sal);
        ps[i] = p;
    }
    
}
void Employee::ShowInFo(Employee * ps , size_t n)
{
    for (size_t i = 0; i < n ; i++)
    {
        ps[i].showinfo();
    }
}


int main()
{
    Employee * people;
    size_t N ;
    cout << "Enter number of people : ";
    cin >> N;

    people = new Employee[N];
    people->getinfo(people,N);
    people->ShowInFo(people,N);
    return 0;
}