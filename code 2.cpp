#include<iostream>
using namespace std;
int main()
{
   string Name, Department;
   int Roll_Number, English_marks, Math_marks, Physics_marks;
cout<<"=======================\n\n";
cout<<"\tSTUDENT RESULT CARD\n\n";
cout<<"========================\n";
cout<<"Name:\t\t";
cin>>Name;
cout<<"Roll No:\t";
cin>>Roll_Number;
cout<<"Department:\t";
cin>>Department;
cout<<"---------------------\n\n";
cout<<"Subject\t\tMarks\n\n";
cout<<"---------------------\n\n";
cout<<"English\t\t";
cin>>English_marks;
cout<<"Math\t\t";
cin>>Math_marks;
cout<<"Physics\t\t";
cin>>Physics_marks;
cout<<"------------------------\n\n";
int sum=English_marks+Math_marks+Physics_marks;
cout<<"Total Marks:\t"<<sum<<endl;
cout<<Percentage:\t85%\n\n";
cout<<"============================\n";
cout<<Grade:\tA+\n";
cout<<"=============================\n";
cout<<"Congratulations Abdul Samad!\n";
cout<<"==============================\n";
return 0;
}
