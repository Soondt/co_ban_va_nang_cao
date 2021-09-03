#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
    int age;
    int pId;
    string Name;
    string FirtName;
    string DivName;
    string Address;
    string Gender;
    string PhoneNumber;
public:
    static int id; 
    Person();
    Person(int ,int ,string ,string ,string ,string ,string ,string );
    void GetInfo(Person *ps,size_t n);
    void ShowInFo();
    void Showdata(Person *ps ,size_t n);
    string FullName();
    
    void setID(int);
    void setAge(int);
    void setName(string);
    void setFirtName(string);
    void setDivName(string);
    void setGender(string);
    void setPhoneNumber(string);
    void setAddress(string);

    int getID();
    int getAge();
    string getName();
    string getFirtName();
    string getDivName();
    string getAddress();
    string getPhoneNumber();
    string getGender();
};
int Person ::id = 100;
Person::Person()
{
    age = 0;
    pId = 0 ;
    Name = "";
    FirtName = "";
    DivName = "";
    Address = "";
    Gender = "" ;
    PhoneNumber = "";
}
// Person:: Person(int age ,int pId ,string Name ,string FirtName ,string DivName ,string Address,string Gender,string PhoneNumber)
// {
//     this ->age = age;
//     this ->id = id;
//     this ->Name = Name;
//     this ->FirtName = FirtName;
//     this ->DivName = DivName;
//     this ->Gender = Gender;
//     this -> Address = Address;
//     this -> PhoneNumber = PhoneNumber;
// }

Person:: Person(int age ,int id ,string Name ,string FirtName ,string DivName ,string Address,string Gender,string PhoneNumber)
{
    setID(id);
    setAge(age);
    setDivName(DivName);
    setFirtName(FirtName);
    setName(Name);
    setPhoneNumber(PhoneNumber);
    setAddress(Address);
    setGender(Gender);
}

void Person ::setID(int age)
{
    this-> age = age;
}
void Person ::setAge(int id)
{
    this->pId = (id >= 100) ? id : Person :: id ++;
}
void Person ::setName(string Name)
{
    this -> Name = Name;
}
void Person ::setFirtName(string FirtName)
{
    this -> FirtName = FirtName;
}
void Person ::setDivName(string DivName)
{
    this -> DivName = DivName;
}
void Person ::setGender(string Address)
{
    this -> Address = Address;
}
void Person ::setPhoneNumber(string PhoneNumber)
{
    this -> PhoneNumber = PhoneNumber;
}
void Person ::setAddress(string Gender)
{
    this -> Gender = Gender;
}

int Person ::getID()
{
    return this ->pId;
}
int Person ::getAge()
{
    return this -> age;
}
string Person ::getName()
{
    return this ->Name;
}
string Person ::getFirtName()
{
    return this -> FirtName;
}
string Person ::getDivName()
{
    return this ->DivName;
}
string Person ::getAddress()
{
    return this ->Address;
}
string Person ::getPhoneNumber()
{
    return this -> PhoneNumber;
}
string Person ::getGender()
{
    return this -> Gender;
}

void Person::ShowInFo()
{
    cout << "=========================\n";
    cout <<"Name : " << getName() << endl ;
    cout << "FirtName : " << getFirtName() << endl ;
    cout << "DivName : " << getDivName() << endl ;
    cout << "Address : " <<getAddress() << endl ;
    cout << "PhoneNumber : " << getPhoneNumber() << endl;
    cout << "Gender : " << getGender() << endl ;
    cout <<"ID : " << getID() << endl ;
    cout <<"Age : " << getAge() << endl ;
    cout <<"==========================\n";
}

string Person:: FullName()
{
    return Name + " " + FirtName + " " + DivName ;
}

void Person::GetInfo(Person *ps,size_t n)
{
    int age;
    string firt,name,div,gender,address,phone;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Name : ";
        cin >> name;
        cout <<"Div Name : ";
        cin >> div;
        cout <<"Firt Name : ";
        cin.ignore();
        getline(cin,firt);
        cout << "Address : ";
        getline(cin,address);
        cout <<"Gender : ";
        cin >> gender ;
        cout << "PhoneNumber : ";
        cin.ignore();
        getline(cin,phone);
        cout << "Age : ";
        cin >> age;
        // gan 
        Person p(age,0,name,firt,div,address,gender,phone);
        ps[i] = p;
    }
}
void Person:: Showdata(Person *ps ,size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        ps[i].ShowInFo();
    } 
}
int main ()
{
    Person* people;
    size_t N;
    cout <<"nhap N : ";
    cin >> N;
    people = new Person[N];

    people->GetInfo(people,N);
    people->Showdata(people,N);
    return 0 ;
}