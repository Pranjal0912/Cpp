#include<iostream>
using namespace std;

class Personal{
        string name,address,city;
        int age;
    public:
        void Personal_data(){
            getline(cin,name);
            getline(cin,address);
            getline(cin,city);
            cin>>age;
        }

        void Set_data1(){
             cout<<"Employee name:"<<name<<endl;
             cout<<"Address:"<<address<<endl;
             cout<<"City:"<<city<<endl;
             cout<<"Age:"<<age<<endl;
        }
};

class Employee{
        int I_D;
        char department[50];
    public:
        void Employee_data(){
            cin>>I_D;
            cin>>department;
        }

        void Set_data2(){
             cout<<"Employee Id:"<<I_D<<endl;
             cout<<"Department:"<<department<<endl;
        }

};

class Faculty:public Personal,public Employee{
        int Teaching_hours;
        char subject[50];
    public:

        void Faculty_data(){
            Personal::Personal_data();
            Employee::Employee_data();
            cin>>subject;
            cin>>Teaching_hours;
        }
        
        void Set_data3(){
            Personal::Set_data1();
            Employee::Set_data2();
             cout<<"Subjects:"<<subject<<endl;
             cout<<"Teaching hrs:"<<Teaching_hours<<endl;
        }
};

int main()
{
    Faculty x;
    x.Faculty_data();
    x.Set_data3();
}
