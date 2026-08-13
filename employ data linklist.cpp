#include<iostream>
using namespace std;

struct node
{
 int empId;
 string empName;
 float salary;
 node*next;      
};
  node*head =NULL;

void insert()

{
	Node*newNode = new Node;
	cout<<"Enter Employee ID:";
	cin>>newNode->empId;
	cout<<"Enter Employee Name:";
	cin>>newNode->empName;
	cout<<"Enter Employee Salary:";
	cin>>newNode->empsalary;
	
	newNode->next = head;
	head = newNode;
	
	cout <<"Employee Record Inserted Successfully.\n";
}

void deleteNode(int id)

{
	if (head ==NULL)
	{
		cout <<"List is Empty.\n";
		return;
	}
	Node *temp = head;
    Node *prev = NULL;

if(head->empId == id)
{
head = head->next;
delete temp;
cout <<"Employee Record Deleted Successfully. \n"; 
return;
}
while (temp != NULL && temp->empId != id)
prev = temp;
temp = temp->next;
}
if(temp == NULL)
{
cout<<"Employee Record Not Found. \n"; 
return;
}
prev->next = temp->next;
delete temp;

cout ‹ "Employee Record Deleted Successfully. \n";
}

void search(int id)
{
Node *temp = head;

while (temp != NULL)
{
if temp->empId == id)
{
cout <<"\nEmployee Found\n";
cout<< "Employee ID : " << temp->empId << endl; 
cout ‹< "Employee Name :"<<temp->empName << endl;
cout<< "Salary : " << temp->salary <<endl;
 return;
}
temp = temp->next;
}
cout<< "Employee Record Not Found. \n";
}
void display()
{

if (head == NULL)
{

cout << "List is Empty. \n";
return;
}

Node *temp = head;
cout << "\nEmployee Records\n";
cout<<"______________________________________________________\n"
while (temp !=NULL)
{

cout<<"ID : "<< temp->empId
    <<"\tName : " << temp->empName
    <<"\tSalary: "<< temp->salary <<endl;
    temp=temp->next;
}
}
int main()
{
	int choice, id;
	
	do
	{
	
	  cout<<"==========Employee Record Managemant==========\n;
      cout<<"1. Insert Employee\n";
      cout<<"2. Delete Employee\n";
	  cout<<"3. Search Employee\n";
	  cout<<"4. Display Employee Records\n";
	  cout<<"5. Exit\n";
	  cout<<"Enter Choice:";
	  cin ›> choice;	

switch (choice)
{
case 1:
insert () ;
break;
case 2:
cout<< "Enter Employee ID to Delete: "; 
cin >> id;
deleteNode (id);
break;
case 3:
cout ‹‹ "Enter Employee ID to Search: ";
 cin >> id; 
 search (id);
  break;
case 4:
display();
break;
case 5:
cout « "Program Ended. \n"; 
break;
default:
	cout<<"Invalid Choice!\n";
}
}
while (choice !=5);

return 0;
}
