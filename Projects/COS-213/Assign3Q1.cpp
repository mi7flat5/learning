#include<iostream>
#include <string>
#include <string.h>//assignment calls for C style string, I'd prefer using C++ string type for the struct name

using namespace std;

struct StudentRecord{
char name[20];
int sID;
float GPA;
 };
int main()
{
    string tmpname ="SuperProgrammer";
    StudentRecord TESCStudent;
    strcpy(TESCStudent.name, tmpname.c_str());//copy into C style string
    TESCStudent.sID=1234;
    TESCStudent.GPA=4.0;
    StudentRecord UserRecord;

cout<<"Student: "<<TESCStudent.name<<"\nWith Student ID: "<<TESCStudent.sID<<"\nHas a GPA of: "<<TESCStudent.GPA<<"\n";

    cout<<"\nPlease enter student name: ";
    cin>>tmpname;
    strcpy(UserRecord.name, tmpname.c_str());
    cout<<"\nPlease enter student's ID number: ";
    cin >>UserRecord.sID;
    cout<<"\nPlease enter the students GPA: ";
    cin>>UserRecord.GPA;

cout<<"\nStudent: "<<UserRecord.name<<"\nWith Student ID: "<<UserRecord.sID<<"\nHas a GPA of: "<<UserRecord.GPA<<"\n";

return 0;
}
