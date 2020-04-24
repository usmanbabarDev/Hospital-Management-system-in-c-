#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int Insert_info();
int search_detail();
int del_record();
int update_record();
int main()
{
	int d;
	cout<<"\t\t\t\t******************************************\n";
	cout<<"\t\t\t\t***       Welcome To Login Page        ***\n";
	cout<<"\t\t\t\t******************************************\n";
	string x,y="employ";
  	z:cout<<"Enter The Password"<<endl;
	cin>>x;
	if(x==y){
	system("cls");
	int t=0; 
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\t******************************************\n";
	cout<<"\t\t\t\t*  Welcome To Hospital Mangment System   *\n";
	cout<<"\t\t\t\t******************************************\n";
	cout<<endl;
	r:int a;
	cout<<endl;
	cout<<"  \t \t**Main Menu**\n";
	cout<<endl<<endl;
	cout<<"      **Please Enter (1) FOR INSERT PATIENT RECORD:\n";
	cout<<endl;
	cout<<"      **Please Enter (2) for search patient record:\n";
	cout<<endl;
	cout<<"      **Please Enter (3) for delete patient record:\n";
	cout<<endl;
	cout<<"      **Please Enter (4) for update patient record:\n";
	cout<<endl;
	cin>>a;
	switch (a)
	{
		case 1:
			
		cout<<"\n**You Enter 1**"<<endl;
		d=Insert_info();
		break;
		case 2:		
		cout<<"\n**You Enter 2**"<<endl;
		d=search_detail();
		break;
		case 3:
		cout<<"\n**You Enter 3**"<<endl;
		d=del_record();
		break;
		case 4:
		cout<<"\n**You Enter 4**"<<endl;
		d=update_record();
		break;
		default:
		cout<<endl;
		cout<<"\n**Plz Select a number between (1) to (6) to perform a operation**\n";
		cout<<endl;	
		{
			string b,c="y";
			cout<<"For return to main menu press (y):\n"<<endl;
			cout<<"For closeing the program press (n) or any key except y: \n"<<endl;
			cout<<endl;
			cin>>b;
			if(b==c)
			{
				system("cls");
				goto r;
			}
		}
	}
	if (d==1)
	{
		goto r;
	}
}
else
{
	
	cout<<"Wrong Password Plz enter Password again"<<endl;
	goto z;
}
}
int Insert_info()
{	
system("cls");
h:	string id,name,sex,adrs,cNo,dateA,dateD;
	fstream file;   
			file.open("hos1.txt", ios::out | ios::app);  // File Handling
			{
				cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
				cout << endl << "|\t\tENTER PATIENT ID   :   "   ;
				cin >> id;
				cout << endl << "|\t\tENTER PATIENT Name :   " ;
				cin >> name;
				cout << endl << "|\t\tENTER PATIENT SEX  :   " ;
				cin >> sex;
				cout << endl << "|\t\tPATIENT ADDRESS    :   " ;
				cin >> adrs;
				cout << endl << "|\t\tPATIENT CONTACT NUMBER :   " ;
				cin >> cNo;
				cout << endl << "|\t\tPATIENT DATE OF ADMIT :    " ;
				cin >> dateA;
				cout << endl << "|\t\tPATIENT DATE OF DISCHARGE :  " ;
				cin >> dateD;
				cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
			
				file << endl << id << "\t";  // Saving data on file down below
				file << name << "\t" << "\t";
				file << sex << "\t";
				file << adrs << "\t" << "\t";
				file << cNo << "\t\t";
				file << dateA << "\t\t";
				file << dateD << "\t";
			}
			int a;
			cout<<endl<<"if u want to reinsert data press(1)"<<endl;
			cout<<"if u want to go to main menu press(2)"<<endl;
			cout<<"if u want to exit to system(3)"<<endl;
			cin>>a;
			if (a==1)
			{
				system("cls");
				goto h	;
			}
			else if (a==2)
			{
				system("cls");
				return 1;
			}
			else {
				cout<<"THANK U";
			}
			
}
int search_detail()
{
h:	string id, Arr[100][7];
	int d, e = 0, x = 0, y = 0, z = 0;
	string read;
	fstream file;
	file.open("hos1.txt", ios::in);     // File Handling
	if (file)
	{
		while (!file.eof())
		{
			if (z < 7)
			{
				file >> read;
				Arr[x][y] = read;
				z++;
				y++;
			}
			else
			{
				z = 0;
				x++;
				y = 0;
			}

		}
	}
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	cout << endl << "|\t\tENTER A PATIENT ID FOR SEARCH   :   " ;//serch patient id
	cin >> id;
	cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	
	for (int a = 0; a < 99; a++)
	{
		for (int b = 0; b < 7; b++)
			if (id == Arr[a][b])
			{
				d = a;
				e = e + 1;
			}
	}
	if (e >= 1)
	{
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		cout << endl << " |\t\tPatient id    :   " << Arr[d][0] << endl;
		cout << " |\t\tPatient Name  :   " << Arr[d][1] << endl;
		cout << " |\t\tPatient Sex   :   " << Arr[d][2] << endl;
		cout << " |\t\tpatient Addres:   " << Arr[d][3] << endl;
		cout << " |\t\tPatient Contact :  " << Arr[d][4] << endl;
		cout << " |\t\tPatient Date Of admit :  " << Arr[d][5] << endl;
		cout << " |\t\tPatient Date Of Discharge :   " << Arr[d][6] << endl;
		cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	}
	else {
		cout << "\t\t |Sorry There is No Record Aganist This ID| ";
	}
				int a;
			cout<<"if u want to research main menu press(1)"<<endl;
			cout<<"if u want to go to main menu press(2)"<<endl;
			cout<<"if u want to exit to system(3)" <<endl;
			cin>>a;
			if (a==1)
			{
				system("cls");
				goto h	;
			}
			else if (a==2)
			{
				system("cls");
				return 1;
			}
			else {
				system("cls");
				cout<<"THANK U";
			}	
}
int del_record()
{
string id,name,sex,adrs,cNo,dateA,dateD;
	h:	int a=0, b=0;
		   string Arr[100][7];
		   fstream obj;
		   string temp, find;
		   obj.open("hos1.txt", ios::in);
		   cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		   cout << endl<< " |\t\tEnter Id For del : ";
		   cin >> find;
		   cout << endl;
		   int x = 0, y = 0;
		   while (!obj.eof())
		   {
			   obj >> temp;
			   Arr[x][y] = temp;
			   y++;
			   if (y > 6)
			   {
				   x++;
				   y = 0;
			   }
		   }
		   b = x;
		   obj.close();
		   int z = 0;
		   for (int i = 0; i < b; i++)
		   {
			   for (int j = 0; j < 6; j++)
			   {
				   if (Arr[i][j] == find)
				   {
					   z++;
					   if (z == 1)
					   {
						   Arr[i][0] = id;
						   Arr[i][1] = name;
						   Arr[i][2] = sex;
						   Arr[i][3] = adrs;
						   Arr[i][4] = cNo;
						   Arr[i][5] = dateA;
						   Arr[i][6] = dateD;
						   cout << endl << " |\t\tData del succesfully";
						   cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
						   
					   }
				   }
			   }
		   }
		   if (z != 1)
		   {
			   cout << " |\t\tNO DATA FOUND AGAINST THIS ID";
			   cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		   }
		   obj.open("hos1.txt", ios::out);
		   for (int i = 0; i < b; i++)
		   {
			   {
				   obj << Arr[i][0] << "\t";
				   obj << Arr[i][1] << "\t" << "\t";
				   obj << Arr[i][2] << "\t";
				   obj << Arr[i][3] << "\t" << "\t";
				   obj << Arr[i][4] << "\t\t";
				   obj << Arr[i][5] << "\t\t";
				   obj << Arr[i][6] << "\t";
			   }
			   obj << endl;
		   }
		   	int q;
			cout<<"if u want to re del any data press(1)"<<endl;
			cout<<"if u want to go to main menu press(2)"<<endl;
			cout<<"if u want to exit to system(3)"<<endl;
			cin>>a;
			if (a==1)
			{
				system("cls");
				goto h;
			}
			else if (a==2)
			{
				system("cls");
				return 1;
			}
			else {
				cout<<"THANK U";
			}
}
int update_record()
{
h:string id,name,sex,adrs,cNo,dateA,dateD;
	string Arr[100][7];
		   fstream obj;
		   string temp, find;
		   obj.open("hos1.txt", ios::in);
		   cout << "\t\t| PLEASE ENTER ID FOR UPDATE   :   ";
		   cin >> find;
		   cout << "|";
		   cout << endl;
		   int x = 0, y = 0, b=0;
		   while (!obj.eof())
		   {
			   obj >> temp;
			   Arr[x][y] = temp;
			   y++;
			   if (y > 6)
			   {
				   x++;
				   y = 0;
			   }
			   b = x;
		   }
		   obj.close();
		   int z = 0;
		   for (int i = 0; i < b; i++)
		   {
			   for (int j = 0; j < 7; j++)
			   {
				   if (Arr[i][j] == find) //search id for update
				   {
					   z++;
					   if (z == 1)
					   {
						   cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
						   cout << endl << " |\t\tENTER PATIENT ID    :   " ;
						   cin >> id;
						   cout << endl << " |\t\tENTER PATIENT Name  :   " ;
						   cin >> name;
						   cout << endl << " |\t\tENTER PATIENT SEX   :   " ;
						   cin >> sex;
						   cout << endl << " |\t\tPATIENT ADDRESS     :   " ;
						   cin >> adrs;
						   cout << endl << " |\t\tPATIENT CONTACT NUMBER : " ;
						   cin >> cNo;
						   cout << endl << " |\t\tPATIENT DATE OF ADMIT : " ;
						   cin >> dateA;
						   cout << endl << " |\t\tPATIENT DATE OF DISCHARGE :  " ;
						   cin >> dateD;
						   cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
						   Arr[i][0] = id;
						   Arr[i][1] = name;
						   Arr[i][2] = sex;
						   Arr[i][3] = adrs;
						   Arr[i][4] = cNo;
						   Arr[i][5] = dateA;
						   Arr[i][6] = dateD;
						   cout << "|Data update succesfully|"<<endl;			
					   }
				   }
			   }
		   }
		   cout << z;
		   if (z == 0 )
		   {
			   cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
			   cout << endl << " |\t\tTHERE IS NO DATA FOUND AGAINST THIS ID  |";
			   cout << endl << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";

		   }
		   obj.open("hos1.txt", ios::out);
		   for (int i = 0; i < b; i++)//rewrite in file
		   {
			   {
				   obj << Arr[i][0] << "\t";
				   obj << Arr[i][1] << "\t" << "\t";
				   obj << Arr[i][2] << "\t";
				   obj << Arr[i][3] << "\t" << "\t";
				   obj << Arr[i][4] << "\t\t";
				   obj << Arr[i][5] << "\t\t";
				   obj << Arr[i][6] << "\t";
			   }
			   obj << endl;
		   }
			int a;
			cout<<"if u want to reupdate data press(1)"<<endl;
			cout<<"if u want to go to main menu press(2)"<<endl;
			cout<<"if u want to exit to system(3)"<<endl;
			cin>>a;
			if (a==1)
			{
				system("cls");
				goto h;
			}
			else if (a==2)
			{
				system("cls");
				return 1;
			}
			else {
				system("cls");
				cout<<"THANK U";
			}
}
