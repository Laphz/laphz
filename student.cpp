#include<iostream>
#include<string>
using namespace std;


class student{
  string Name,Eroll,Branch;
  int Sem;
  public:
  void setStudent(string name,string eroll, string branch,int sem){
    Name = name;
    Eroll = eroll;
    Branch = branch;
    Sem = sem;
  }
  void getStudent(){
    cout<<"Name:"<<Name<<" Eroll:"<<Eroll<<" Branch:"<<Branch<<" Sem:"<<Sem<<endl;
  }
};

int main(){
  string name,eroll,branch;
  int sem;
  name = "Aman Mishra";
  eroll = "0191CS231034";
  branch = "CSE";
  sem = 3;

  student st;
  st.setStudent(name,eroll,branch,sem);
  st.getStudent();
  return 0;
}
