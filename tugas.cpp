#include <iostream>
using namespace std;
int main()
{
	int menu,mode,n,counter,pantul;
	int x1,y1,x2,y2,x3,y3,x4,y4,xp,yp;
	int x5,y5,x6,y6,x7,y7,x8,y8,xl,yl,jarak;
	bool x;
	do
	{
		cout<<"         = MENU ="<<endl;
		cout<<"----------------------------"<<endl;
		cout<<"1. Bounce Square in Square"<<endl;
		cout<<"2. Bounce Square in Triangle"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<">>> ";
			cin>>menu;
		if(menu==1)
		{
			mode=0;
			while(mode<1||mode>2)
			{
				cout<<"Mode [1 / 2]"<<endl;
				cout<<">>> ";
					cin>>mode;
			}
			if(mode==1)
			{
				do
				{
					cout<<"Panjang"<<endl;
					cout<<">>> ";
						cin>>n;
				}
				while(n<10);
				do
				{
					cout<<"Berapa kali memantul?"<<endl;
					cout<<">>> ";
						cin>>pantul;
				}
				while(pantul<1);
				
				x1 = n/2;
				x2 = n/2+1;
				x3 = n/2;
				x4 = n/2+1;
				
				y1 = n-2;
				y2 = n-2;
				y3 = n-1;
				y4 = n-1;
				
				xp = 1;
				yp = 1;
				counter=-1;
				
				while(counter!=pantul)
				{
					system("cls");
					for(int b=1;b<=n;b++)
					{
						for(int k=1;k<=n;k++)
						{
							if(b==1 || b==n || k==1 || k==n)
								cout<<"# ";
							else if((b==y1&&k==x1) || (b==y2&&k==x2) || (b==y3&&k==x3) || (b==y4&&k==x4))
								cout<<"* ";
							else
								cout<<"  ";
						}
						cout<<endl;
					}
					
					if(x1==n-2 || x1==2)
					{
						xp *= -1;
						counter++;
					}
					else if(y1==n-2 || y1==2)
					{
						yp *= -1;
						counter++;
					}
					
					cout<<"Counter : "<<counter<<endl;
					
					x1 += xp;
					x2 += xp;
					x3 += xp;
					x4 += xp;
					
					y1 += yp;
					y2 += yp;
					y3 += yp;
					y4 += yp;
				}
				system("pause");
				system("cls");
			}
			else if(mode==2)
			{
				do
				{
					cout<<"Panjang"<<endl;
					cout<<">>> ";
						cin>>n;
				}
				while(n<20);
				do
				{
					cout<<"Berapa kali memantul?"<<endl;
					cout<<">>> ";
						cin>>pantul;
				}
				while(pantul<1);
				
				jarak=5;
				
				x5 = 3;
				x6 = 4;
				x7 = 3;
				x8 = 4;
				
				y5 = n-2;
				y6 = n-2;
				y7 = n-1;
				y8 = n-1;

				xl = -1;
				yl = 1;
				
				x1 = jarak+5;
				x2 = jarak+6;
				x3 = jarak+5;
				x4 = jarak+6;
				
				y1 = n-jarak-2;
				y2 = n-jarak-2;
				y3 = n-jarak-1;
				y4 = n-jarak-1;

				xp = -1;
				yp = 1;
				counter=-1;
				
				while(counter!=pantul)
				{
					system("cls");
					for(int b=1;b<=n;b++)
					{
						for(int k=1;k<=n;k++)
						{
							if(b==1 || b==n || k==1 || k==n || ((b==jarak+1 || b==n-jarak) && (k>=jarak+1 && k<=n-jarak)) || ((k==jarak+1 || k==n-jarak) && b>=jarak+1 && b<=n-jarak))
								cout<<"# ";
							else if((b==y5&&k==x5) || (b==y6&&k==x6) || (b==y7&&k==x7) || (b==y8&&k==x8) || (b==y1&&k==x1) || (b==y2&&k==x2) || (b==y3&&k==x3) || (b==y4&&k==x4))
								cout<<"* ";
							else
								cout<<"  ";
						}
						cout<<endl;
					}
					
					if(x5==2 || x5==n-2 || ((x5==jarak-1||x5==n-jarak+1)&&(y5>=jarak&&y5<=n-jarak)))
					{
						xl *= -1;
					}
					else if(y5==2 || y5==n-2 || ((y5==jarak-1||y5==n-jarak+1)&&(x5>=jarak&&x5<=n-jarak)))
					{
						yl *=-1;
					}
					
					if(x1==n-jarak-2 || x1==jarak+2)
					{
						xp *= -1;
						counter++;
					}
					else if(y1==n-jarak-2  || y1==jarak+2)
					{
						yp *= -1;
						counter++;
					}
					
					cout<<"Counter : "<<counter<<endl;
					
					x1 += xp;
					x2 += xp;
					x3 += xp;
					x4 += xp;
					
					y1 += yp;
					y2 += yp;
					y3 += yp;
					y4 += yp;
					
					x5 += xl;
					x6 += xl;
					x7 += xl;
					x8 += xl;
					
					y5 += yl;
					y6 += yl;
					y7 += yl;
					y8 += yl;
				}
				system("pause");
				system("cls");
			}	
		}
		else if(menu==2)
		{
			do
			{
				cout<<"Panjang"<<endl;
				cout<<">>> ";
					cin>>n;
			}
			while(n<10 || n%2==0);
			do
			{
				cout<<"Berapa kali memantul?"<<endl;
				cout<<">>> ";
					cin>>pantul;
			}
			while(pantul<1);
			
			x1 = n-2;
			x2 = n;
			x3 = n-2;
			x4 = n;
			
			y1 = n-2;
			y2 = n-2;
			y3 = n-1;
			y4 = n-1;
			
			x=true;
			xp=1;
			yp=-1;
			counter=-1;
			
			while(counter!=pantul)
			{
				system("cls");
				jarak=0;
				for(int b=1;b<=n;b++)
				{
					for(int k=1;k<=n*2-1;k++)
					{
						if(k==n-jarak || k==n+jarak || (b==n&&k%2==1))
							cout<<"#";
						else if((b==y1&&k==x1) || (b==y2&&k==x2) || (b==y3&&k==x3) || (b==y4&&k==x4))
							cout<<"*";
						else
							cout<<" ";
					}
					jarak++;
					cout<<endl;
				}
				
				if(x)
				{
					if(x2+y2 >= n+(y2*2)-2)
					{
						xp = -2;
						yp = -1;
						counter++;
					}
					else if(x1+y1 <= n+4)
					{
						xp = 1;
						yp = 1;
						counter++;
					}
					else if(y1==n-2)
					{
						xp = 1;
						yp = -1;
						x = false;
						counter++;
					}
				}
				else if(!x)
				{
					if(x2+y2 >= n+(y2*2)-3)
					{
						xp = -2;
						yp = -1;
						counter++;
					}
					else if(x1+y1 <= n+2)
					{
						xp = 1;
						yp = 1;
						counter++;
					}
					else if(y1==n-2)
					{
						xp = 1;
						yp = -1;
						x = true;
						counter++;
					}
				}
				
				cout<<"Counter : "<<counter<<endl;
				
				x1 += xp;
				x2 += xp;
				x3 += xp;
				x4 += xp;
				y1 += yp;
				y2 += yp;
				y3 += yp;
				y4 += yp;
				
			}
			system("pause");
			system("cls");
		}
		else if(menu==0)
			menu=0;
		else
		{
			cout<<"Invalid !!!"<<endl;
			system("pause");
			system("cls");
		}
	}
	while(menu!=0);
    return 0;
}
