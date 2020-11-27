Write a C++ program to Create array of objects of class student with data members for storing his USN marks of six subjects for three tests and member functions to input display and calculate the avg marks for each subject taking best two of three marks. Write a tester program to test these classes. 


#include<iostream>
using namespace std;
class Student{
    int USN;
    int sub[6][3];
    public:
    void read();
    float Avg_marks();
    void display();
    //void display();
    
};

float sum[6],avg[6];

void Student::read(){
    int i,j;
    cout<<"usn of students"<<endl;
    cin>>USN;
    cout<<"enter marks of 6 subjects"<<endl;
    for(i=0;i<6;i++)
    {
    cout<<"Enter subject"<<i+1<<"marks"<<endl;
        for(j=0;j<3;j++)
    {
        cout<<"enter subject" <<i+1<< "test"<<j+1 << "marks"<<endl;
       cin>>sub[i][j];  
}
}
}
float Student::Avg_marks(){
    
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i]=sum[i]+sub[i][j];
        }
        avg[i]=sum[i]/3;
    }
    
}
void Student::display(){
    int i,j;
    //float sum,avg;
    cout<<"USN"<<USN<<endl;
    cout<<"printing six subjects"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<"subject:"<<i+1<<endl;
        for(j=0;j<3;j++){
         cout<<"test marks:"<<j+1<<"="<< sub[i][j]<<endl;
        }
    cout<<"sum of each subject marks:"<<sum[i]<<"avg  of each subject marks: "<<avg[j]<<endl;
    }
}

int main(){
Student s;
s.read();
s.Avg_marks();
s.display();
}




































































