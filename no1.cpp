#include <iostream>
using namespace std;
int main()
{
	int menu;
	bool mail;
	int n,counter,garis;
	int hari,bulan,jumlah;
	do
	{
		menu=0;
		cout<<"   = MENU ="<<endl;
		cout<<"--------------"<<endl;
		cout<<"1. Send A Mail"<<endl;
		cout<<"2. Calendar"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<">>> ";
			cin>>menu;
		if(menu==1)
		{
			system("cls");
			mail=true;
			while(mail)
			{
				cout<<"Masukkan Besar Kotak : ";
					cin>>n;
				if(n==0)
					mail=false;
				else if(n>=15)
				{
					n=n+1;
					counter=0;
					garis=3;
					for(int b=1;b<=n;b++)
					{
						for(int k=1;k<=n;k++)
						{
							if(b==n-2&&k==n-6)
								cout<<"FROM : 220116919  #";
							else if(b==n-2&&k==n)
								cout<<"";
							else if(b==1||b==2||b==n||k==1||k==n||(b==garis&&(k>counter&&k<=n-counter)))
								cout<<"#  ";
							else
								cout<<"   ";
						}
						if(b%2==1)
							counter+=2;
						if(b>=3)
							garis++;
						cout<<endl;
					}
				}
				else
				{
					cout<<"Invalid !!!"<<endl;
				}
				system("pause");
				system("cls");
			}
		}
		else if(menu==2)
		{
			system("cls");
			bulan=0;
			hari=0;
			jumlah=0;
			counter=1;
			garis=1;
			
			while(bulan<1 || bulan>12)
			{
				cout<<"Bulan (1-12) : ";
					cin>>bulan;
			}
			while(hari<1 || hari>7)
			{
				cout<<"Hari (1-7) : ";
					cin>>hari;
			}
			
			if(bulan==1)
			{
				cout<<"     = JANUARI = "<<endl;
				jumlah=31;
			}
			else if(bulan==2)
			{
				cout<<"     = FEBRUARI = "<<endl;
				jumlah=28;
			}
				
			else if(bulan==3)
			{
				cout<<"     = MARET = "<<endl;
				jumlah=31;
			}
			else if(bulan==4)
			{
				cout<<"     = APRIL = "<<endl;
				jumlah=30;
			}
				
			else if(bulan==5)
			{
				cout<<"     = MEI = "<<endl;
				jumlah=31;
			}
			else if(bulan==6)
			{
				cout<<"     = JUNI = "<<endl;
				jumlah=30;
			}
			else if(bulan==7)
			{
				cout<<"     = JULI = "<<endl;
				jumlah=31;
			}
			else if(bulan==8)
			{
				cout<<"     = AGUSTUS = "<<endl;
				jumlah=31;
			}
			else if(bulan==9)
			{
				cout<<"     = SEPTEMBER = "<<endl;
				jumlah=30;
			}
				
			else if(bulan==10)
			{
				cout<<"     = OKTOBER = "<<endl;
				jumlah=31;
			}
			else if(bulan==11)
			{
				cout<<"     = NOVEMBER = "<<endl;
				jumlah=30;
			}
				
			else if(bulan==12)
			{
				cout<<"     = DESEMBER = "<<endl;
				jumlah=31;
			}
			
			for(int b=1;b<=3;b++)
			{
				for(int k=1;k<=7;k++)
				{
					if(b%2==1)
						cout<<"+--";
					else if(b==2)
					{
						if(k==1)
							cout<<"| M";
						else if(k==2)
							cout<<"| S";
						else if(k==3)
							cout<<"| S";
						else if(k==4)
							cout<<"| R";
						else if(k==5)
							cout<<"| K";
						else if(k==6)
							cout<<"| J";
						else if(k==7)
							cout<<"| S";
					}
					else
						cout<<"|  ";
				}
				if(b%2==1)
					cout<<"+";
				else
					cout<<"|  ";
				cout<<endl;
			}
			
			for(int b=1;b<=12;b++)
			{
				if(b%2==0)
					cout<<"+";
				else if(b%2==1)
					cout<<"|";
				for(int k=1;k<=7;k++)
				{
					if(b%2==0)
						cout<<"--+";
					else if(b==garis)
					{
						if(hari==k)
						{
							if(counter<=jumlah)
							{
								if(counter<10)
									cout<<" "<<counter<<"|";
								else
									cout<<counter<<"|";
							}
							else
								cout<<"  |";
							counter++;
							hari++;
						}
						else
						{
							cout<<"  |";
						}
					}
					else
						cout<<"  |";
				}
				hari=1;
				garis++;
				cout<<endl;
			}
			system("pause");
			system("cls");
		}
		else if(menu==0)
		{
			menu=0;
		}
		else
		{
			cout<<"Inputan salah!"<<endl;
			system("pause");
			system("cls");
		}
	}
	while(menu!=0);
    return 0;
}
