#include<iostream>
#include<stdlib.h>
#include<conio.h>
char sexo;
float altura=0, peso=0, IMC=0;
char resp[1];
int tpnormal=0, tpsobrep=0, tencuestados=0, porps=0, porsp=0,contps=0, contsp=0,totalP=0, contador=0, NMsobrep=0, NFsobrep=0, ADMsobrep=0, edad=0, ADFsobrep=0, C=0;
int i=0, CM=0, CF=0;
using namespace std;
int main()
{
	cout<<"-------------------Body Mass Index or (BMI)-------------------\n\n";
	cout<<"This program determines if the person's body mass index\n\n";
	cout<<"Enter the number of times you want to take this survey: ";
	cin>>C;
		while (i<C)
		{
			cout<<"enter your age: "<<endl;
			cin>>edad;
			cout<<"Enter your height: ";
			cin>>altura;
			while (altura <= 0)
			{
				cout<<"\nError\n";
	    		system("pause");
	    		system("cls");
	    		altura++;
			}
			cout<<"enter your weight: \n";
			cin>>peso;
			while (peso <= 0)
			{
				cout<<"\nError\n";
	    		system("pause");
	    		system("cls");
	    		peso++;
			}
			cout<<"Enter your gender: \n";
			cin>>sexo;
			cout<<"Your Body Mass Index (BMI) is=";
			IMC= peso/(altura*altura);
			cout<<IMC;
			cout<<"\n\n"; 
			if (IMC  >=	0.01 && IMC  <= 18.5)
			{
				cout<<"You are below the common weight\n\n";
				tencuestados++;
			}	
			if ( IMC >= 18.5 && IMC <= 24.9)
			{
				cout<<"You are at the standard weight\n\n";
	    		tpnormal++;
				tencuestados++;
			}
				else
				{
					if ( IMC >= 25.0)
					{
						tpsobrep++;
						cout<<"You are above the common weight.\n\n";
						tencuestados++;	
					if (sexo=='m' || sexo=='M')
					{
						CM++;
					}
					if (sexo=='f' || sexo=='F')
					{
						CF++;
					}
					if (CM>=1 && edad <=12 )
					{
						NMsobrep++;
					}	
					if (CF>=1 && edad <= 12)
					{
					NFsobrep++;
					}
					if (CM>=1 && edad >=13 && edad <= 18 )
					{
						ADMsobrep++;
					}	
					if (CF>=1 && edad >=13 && edad <= 18)
					{
						ADFsobrep++;
					} 
				}
			}
	totalP = tpnormal + tpsobrep;
	porps = tpnormal * 100/totalP;
    porsp = tpsobrep * 100/totalP;
	i++;
	}
	system("pause");
	system("cls");
	cout<<"\ntotal number of people surveyed and percentage.\n";
	cout<<"\n---------------------------------------------------------\n";
	cout<<"\nThe total number of people surveyed were:"<<tencuestados;
	cout<<"\nThe percentage of people with normal weight was:"<<porps;
	cout<<"\nThe percentage of overweight people was:"<<porsp;
	cout<<"\n----------------------------------------------------------\n";
	cout<<"\ntotal of people with normal weight, overweight, including children and adolescents\n";
	cout<<"\n----------------------------------------------------------\n";
	cout<<"\ntotal number of people with normal weight:"<<tpnormal;
	cout<<"\nTotal number of people who are overweight or obese:"<<tpsobrep;
	cout<<"\nOverweight or obese male children:"<<NMsobrep;
	cout<<"\noverweight or obese female girls:"<<NFsobrep;
	cout<<"\nMale adolescents with overweight or obesity:"<<ADMsobrep;
	cout<<"\nOverweight or Obese Female Adolescent:"<<ADFsobrep;
	cout<<"\n-----------------------------------------------------------\n";
	getch ();
}
