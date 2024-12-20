#include <iostream>
using namespace std;
string name[20], rollNum[20], course[20], className[20], contact[20];
int total=0;
void enter(){
    int choice;
    cout<<"How many students do you want to enter:";
    cin>>choice;
    if(total==0){
        for (int i=0;i<choice;i++){
            cout<<"\nEnter data of student:"<<i+1<<endl;
            cout<<"Enter name:";
            cin>> name[i];
            cout<<"Enter rollno:";
            cin>>rollNum[i];
            cout<<"Enter course:";
            cin>>course[i];
            cout<<"Enter class:";
            cin>>className[i];
            cout<<"Enter contact(10 digit is must):";
            cin>>contact[i];
        }
    }
    else{
        for (int i=total;i<total+choice;i++){
            cout<<"\nEnter data of student:"<<i+1<<endl<<endl;
            cout<<"Enter name:";
            cin>> name[i];
            cout<<"Enter rollno:";
            cin>>rollNum[i];
            cout<<"Enter course:";
            cin>>course[i];
            cout<<"Enter class:";
            cin>>className[i];
            cout<<"Enter contact:";
            cin>>contact[i];
        }
        }
    total=total+choice;
}

void show(){
    if(total==0){
        cout<<"No data is entered"<<endl;
    }
    else{
        for(int i=0;i<total;i++){
            cout<<"Data of student:"<<i+1<<endl<<endl;
            cout<<"Name:"<< name[i]<<endl;  
            cout<<"Rollno:"<<rollNum[i]<<endl;  
            cout<<"Course:"<<course[i]<<endl;  
            cout<<"Class:"<<className[i]<<endl;  
            cout<<"Contact:"<<contact[i]<<endl; 
            }
    }
}  

void search(){
    if(total==0){
        cout<<"No data is entered"<<endl;
    }
    else{
        string rollno;
        cout<<"Enter rollno of student which you want to search:";
        cin>>rollno;
        for(int i=0;i<total;i++){
            if(rollno==rollNum[i]){
                cout<<"Data of student:"<<i+1<<endl;
                cout<<"Name:"<< name[i]<<endl;  
                cout<<"Rollno:"<<rollNum[i]<<endl;  
                cout<<"Course:"<<course[i]<<endl;  
                cout<<"Class:"<<className[i]<<endl;  
                cout<<"Contact:"<<contact[i]<<endl;  
                }
                else{
                    cout << "Student not found" << endl;
                }
                }
 }
}

void update()
{
    string rollno;
    cout<<"Enter rollno of student which you want to search:";
    cin>>rollno;
    for(int i=0;i<total;i++)
   {
       if(rollno==rollNum[i])
       {
           cout<<"Previous data"<<endl;
           cout<<"Data of student:"<<i+1<<endl;
      
           cout<<"Name:"<< name[i]<<endl;
           cout<<"Rollno:"<<rollNum[i]<<endl;  
           cout<<"Course:"<<course[i]<<endl;  
           cout<<"Class:"<<className[i]<<endl;  
           cout<<"Contact:"<<contact[i]<<endl;  
           
           cout<<"\nEnter new data"<<endl;
           cout<<"\nEnter name:";
           cin>> name[i];
           cout<<"\nEnter rollno:"<<endl;
           cin>>rollNum[i];
           cout<<"\nEnter course:";
           cin>>course[i];
           cout<<"\nEnter class:";
           cin>>className[i];
           cout<<"\nEnter contact:";
           cin>>contact[i];
       }
   }
 }

void deleterecord()
{
     int a;
 cout<<"Press 1 to delete full record"<<endl;
  cout<<"Press 2 to delete specific record"<<endl;
  cin>>a;
  if(a==1)
  {
      total=0;
      cout<<"All record is deleted"<<endl;
  }
  else if(a==2)
  {
      string rollno;
      cout<<"Enter rollno which you want to delete"<<endl;
      cin>>rollno;
      for(int i=0; i<total;i++)
      {
          if(rollno==rollNum[i]){
              for(int j=0; j<total;j++)
              {
                name[j] = name[j+1];
                rollNum[j]=rollNum[j+1];
                  course[j]=course[j+1];
                  className[j]=className[j+1];
                contact[j]=contact[j+1]; 
                   
              }
              total--;
              cout<<"Your required record is deleted..!"<<endl;
          }
          else{
            cout<<"Roll No. not found!"<<endl;
          }
      }
  }
      }
 
int main(){
	int value;
	while(true)
	{
	cout<<"\nPress 1 to enter data."<<endl;

	cout<<"Press 2 to show data."<<endl;

	cout<<"Press 3 to search data."<<endl;

	cout<<"Press 4 to update data."<<endl;

	cout<<"Press 5 to delete data."<<endl;

	cout<<"Press 6 to exit."<<endl;

	cin>>value;

	switch(value)
	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

            total = 0;
            exit(0);
            break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}

}
