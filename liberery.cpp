/*The purpose of this c++ program is to simplify the procedures in the library and include different and new implementation strategies.

Furthermore, as a student of Debrebrihan University, i found this to be a problem that is near you and us  .

 Although advanced coding writing is needed, we have tried to include the idea and the topic we have learned.


 if it was done in a digital form,   when you look at the real environment in the library.it is the time killer procedure,

We think that students will easily find the procedures followed by this program
 Out of that, students can easily find the procedures that this program as following

1.if students want to use the books in the library, they will get to know their types

2 To find out what the writings on the shelf that have not been borrowed say

3 If a student wants to borrow the books in the library, he will borrow them once

4 When students borrow books from the library and return them, they return them once without any abuse.

i tried to turn the ideas into solutions and show them. like i mention at the above 

This c++ program contains about 295 lines in total.we considerd to look at some of the IT books in the DBU library.example:
1. litcon solution 
2. intoductio to c++

Perhaps it seems like a good idea if this idea is widely considered and developed, because when the digital system is spread like this, it is mandatory to make students part of this user.
as precondition what i have to know is this program have featured with below entrance process
*log in option
*access to books
*complete useful personal user

i tried to solve it by including one c++ student in the topics i learned.
To solve this problem, .

Among the topics i have learned, i have covered them and used them a little in the middle.
1. types of variables
2 statements like... if, else, while
3 loop statements.... if, do, break,....
4 array
5 strings
6 function
7.class And it seems like a new concept but important types called public and private form wich will benefit us.
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
using namespace std;
class User;
class Book;
int userId=1,bookId=2,loggedIn=1, uId;;
void getChoice(int m)
,choice(int choice),
allBooks() 
, borrowedHistory();
class Book{
public:
string author_Name;
string book_Name;
 int borrowedBy;
Book(){ 
	
}	
Book(string n,string an){ 
book_Name= n;
author_Name= an;
}
};
Book books[100];
class User{  
public:	
string passWord,user_Name;
User(){

} 

User(string un,string pwd){
user_Name=un;
passWord=pwd;	
}	


void userMenu(){ 
cout	<<"Welcome\t"<<user_Name<<endl<<endl;
cout<<"|____________________|"<<endl<<endl;
cout<<"1. Borrow Book"<<endl<<endl;        
cout<<"2. View Borrowed Book"<<endl<<endl;  
cout<<"3. Return Book"<<endl<<endl;            
cout<<"4. view available Books"<<endl<<endl; 
cout<<"5. LogOut"<<endl<<endl;                
cout<<"____________________"<<endl<<endl;
getChoice(5);
	
}

void borrowBooks(){ 
allBooks();
int borrowBk;
cout<<"Enter Serial No of Book"<<endl;
cin>>borrowBk;
books[borrowBk].borrowedBy=loggedIn; 
cout<<"book borrowed successfully"<<endl<<endl;	
}

void returnBook(){ 
	cout<<"These are the book you borrowed  \n\n";
	 borrowedHistory();
	int bk;
	cout<<"Enter Serial No of Book to Return  \n\n";
	cin>>bk;
	books[bk].borrowedBy=-1;
	cout<<"book returned Successfully !!"<<endl;
}
void availableBooks(){  
cout<<"SRL_NO"<<setw(13)<<"Book_Name"<<setw(13)<<"Author_Name"<<endl<<endl;

for(int i=0; i<bookId; i++){
Book b= books[i];
if(b.borrowedBy==-1){
cout<<i<<setw(13)<<b.book_Name<<setw(13)<<b.author_Name<<endl<<endl;
}	
}
getch();	
}

};
User users[100]; 

class Admin{
public:
string userName,passWord;
Admin(){

}
Admin(string u, string p){
userName=u;
passWord=p;	

}

void adminMenu(){  	
cout<<"Welcome"	<<userName<<endl<<endl;
cout<<"|____________________|"<<endl<<endl;
cout<<"1.Add New User"<<endl<<endl; 
cout<<"2.Add New Book"<<endl<<endl; 
cout<<"|____________________|"<<endl<<endl;
getChoice(3);
}	
};
Admin ad;
void getChoice(int m){ 
	int ch;
	cout<<"Enter Your Choice\n\n";
	cin>>ch;
	:: choice(ch +m);
}

void menu(){  
	cout<<"|____________________|"<<endl<<endl;
	cout<<"Welcome to DEBRE BRHAN UNIVERSTY Library"<<endl;
	cout<<"1.Login"<<endl;  
	cout<<"2.Admin Login"<<endl; 
	cout<<"3.Exit"<<endl<<endl;  
    cout<<"____________________"<<endl<<endl;	
}


void adminLogin(){ 
string aun,pwd;
cout<<"Enter user Name"<<endl;	
cin>>aun;
cout<<"Enter PassWord"<<endl;	
cin>>pwd;
if(ad.userName==aun){
	if(ad.passWord==pwd){
   	ad.adminMenu();	
	}
	else{
	cout<<"Wrong password"<<endl;	
	}
}
else{
cout<<"Wrong User Name"<<endl;	
}

}

void login(){
string pwd;

cout<<"user Id"<<endl;
cin>>uId;
cout<<"Password"<<endl;
cin>>pwd;
if(uId < userId){
 if(users[uId].passWord==pwd){
 loggedIn=uId;
 while(loggedIn==uId){
 	users[uId].userMenu();
 	
 }	
 }
 else{
 	cout<<"Wrong PassWord"<<endl;
 }	
}
else{
cout<<"Wrong User Id"<<endl;	
}

} 

void newUser(){ 
string un,pwd;
cout<<"Set User Name:"<<endl;
cin>>un;	
cout<<"Set PassWord:"<<endl;
cin>>pwd;	
User u =User(un,pwd);
users[userId]=u;
cout<<"Your user Id is"<<userId<<endl;
userId++;
 
}

void newBook(){  
	string bn,an;
	cout<<"Enter Book Name"<<endl;
	cin>>bn;
 	cout<<"Enter Author Name"<<endl;
	cin>>an;
	Book b= Book(bn,an); 
	books[bookId];
	bookId++;
}


void allBooks(){ 
cout<<"SRL_NO"<<setw(13)<<"Author_Name"<<setw(13)<<"Book_Name"<<endl;

for(int i=0; i < bookId; i++){
cout<<i<<setw(13)<<books[i].book_Name<<setw(13)<<books[i].author_Name<<endl<<endl;
}
 
}

void borrowedHistory(){ 
	
cout<<"SRL_NO"<<setw(13)<<"Book_Name"<<setw(13)<<"Author_Name"<<setw(13)<<"Borrowed_By"<<setw(11)<<"Id"<<endl<<endl;

for(int i=0; i<bookId; i++){
Book b= books[i];
if(b.borrowedBy==-1){
	
	continue;
}

else{
cout<<i<<setw(13)<<b.book_Name<<setw(13)<<b.author_Name<<setw(13)<<users[uId].user_Name<<setw(13)<<b.borrowedBy<<endl<<endl;	
}	
} } 

void choice(int ch){
switch(ch){
case 1: login();
 break;
 case  2: adminLogin();
 break;
 case  3: exit(0);
 break;
 case 4: newUser();
 break;
 case 5: newBook();
 break;
 case  6:users[loggedIn].borrowBooks();
 break;
 case  7:borrowedHistory();
 break;
 case  8: users[loggedIn].returnBook();
 break;
 case  9: users[uId].availableBooks();
 break; 	
 case 10: loggedIn=-1;
 default: 
 
 cout<<"Invalid Choice"<< endl;
  break;
 
}	
}

int main(){
::ad = Admin("Admin","Admin"); // default admin password =Admin and userName=Admin
:: books[0]= Book("introduction to c++", "franklen hamilton");	
::books[1]= Book("litcon solution ", "jhonny deep");  
::users[0]= User("Naol","pass");// default user id=0 user password =pass and userName=Naol  

 while(true){
 	menu();
 	getChoice(0);
 }
return 0;
}
