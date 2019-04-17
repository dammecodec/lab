#include <iostream>
#include <conio.h>
using namespace std;
class bankaccount
{
	double balance;
	private: string name;
	private: long id;
	public: bankaccount(string name,long id, double balance, string pass)
	{
		cout << "Nhap ID: ";
		cin >> id;
		cout << "Nhap mat khau: ";
		cin >> pass;
		cout << "Nhap ten tai khoan";
		cin >> name;
		cout << "Nhap so tien: ";
		cin >> balance;	
		this->name = name;
		this->balance = balance; 
		this->id = id;
	}
	public: double getDeposit(double val)
	{
		if (val>0)
		{
			val = balance + val;
			return val;
			
			
		}
		
	}
	public: double getWithdraw(double val)
	{
		
		if (val<balance)
		{
			balance= balance - val;
			return balance;
		}
		
	}
	public: void details()
	{
		cout << "Ten khach hang: " << name <<endl;
		cout << "So id: " << id << endl;
		cout << "So tien trong tai khoan: " << balance << endl;
	}
	// tao tai khoan
	public: void createacc()
	{
		cout << "Nhap ID: ";
		cin >> id;
		cout << "Nhap ten tai khoan";
		cin >> name;
		cout << "Nhap so tien: ";
		cin >> balance;
		this->id = id;
		this->balance = balance;
		this->name = name;
	}
		
};
int main()
{
	double balance;
	int giaodich;
	int val;
	char check;
	bankaccount ();
	bankaccount details();
	while (check!='Y')
	{
		cout << "Chon giao dich:  1/Chuyen tien     2/Rut tien      3/Thoat"<< endl;
		cin >> giaodich;
		switch(giaodich)
		{
			case 1:  // chuyen tien
				{
					
					cout << "Nhap so tien ban muon gui: ";
					cin >> val;
					cout << "So tien trong tai khoan sau khi gui tien: " << bka.getDeposit(val) ;
					break;
				}
			case 2:  // rut tien
			{
				cout << "Nhap so tien ban muon rut: ";
				cin >> val;
	
				cout << "So tien trong tai khoan sau khi rut: " << bka.getWithdraw(val) ;
				
				
				break;
			}
			case 3:
				{
					bka.createacc();
					break;
				}
			case 4:
				{
					cout << "Chao tam biet quy khach";
					break;
				}
		}
		cout <<"Do you want to exit(Y or N) ? ";
		cin>>check;
	}
}
