#include<iostream>
#include<cstdlib>
using namespace std;
void shoot(bool &targetAlive, double accuracy)
{
	targetAlive = true;
	float random =  (float)rand() / (float)RAND_MAX;
	if(random < accuracy)
	{
		targetAlive = false;
	}
}
string StartDuel()
{
	float AaronProb=1/3;
	float BobProb=1/2;
	float CharlieProb=1/1;
	bool AaronAlive=true;
	bool BobAlive = true;
	bool CharlieAlive = true;
	//Aaron Shooting to Charlie
	shoot(CharlieAlive,AaronProb);
	//Bob Shooting to Charlie
	shoot(CharlieAlive,BobProb);
	//Charlie Shooting to Aaron
	shoot(CharlieAlive,1/1);
		if(AaronAlive==true && BobAlive==true)
		{
			shoot(BobAlive , AaronProb);
		}
		else if(AaronAlive==true && CharlieAlive==true)
		{
			shoot(CharlieAlive , AaronProb);
		}
		else if(BobAlive==true && CharlieAlive==true)
		{
			shoot(CharlieAlive , BobProb);
		}
		else if(BobAlive==true && AaronAlive==true)
		{
			shoot(AaronAlive , BobProb);
		}
		else if(CharlieAlive==true && BobAlive==true)
		{
			shoot(BobAlive , CharlieProb);
		}
		else if(CharlieAlive==true && AaronAlive==true)
		{
			shoot(AaronAlive , CharlieProb);
		}
		if(AaronAlive==true)
		{
			return "Aaron";
		}
		else if(BobAlive==true)
		{
			return "Bob";
		}
		else 
		{
			return "Charlie";
		}
}
int main()
{
	int a=0,b=0,c=0;
	for(int i=0 ; i< 1000 ; i++)
	{
		string ch = StartDuel();
		if(ch == "Aaron")
		{
			a++;
		}
		if(ch == "Bob")
		{
			b++;
		}
		if(ch == "Charlie")
		{
			c++;
		}
	}
	float aProb = a/1000;
	float bProb = b/1000;
	float cProb = c/1000;
	cout<<"Winning probability of Aaron "<<aProb<<endl;
	cout<<"Winning probability of Bob "<<bProb<<endl;
	cout<<"Winning probability of Charlie "<<cProb<<endl;
}
