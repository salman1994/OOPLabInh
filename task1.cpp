#include <iostream>

using namespace std;

class Band
{
	protected:
		int count;
		virtual int getcount()=0;
	
	private:
		string name;
			
	public:
		string getname()
		{
			return this->name;
		}
		
		string setname(string name)
		{
			this->name=name;
		}
		
};

class MetalBand: public Band
{
	int getcount()
	{
	 	return count;
	}
	
	int setcount(int count)
	{
		cout << "Please enter the number of technicians";
		count++;
		return count;
	}
};

class JazzBand: protected Band
{
	int getcount()
	{
	 	return count;
	}
	
	int setcount(int count)
	{
		count++;
		return count;
	}
};

class MarchingBand: protected Band
{
	int getcount()
	{
	 	return count;
	}
	
	int setcount(int count)
	{
		count++;
		return count;
	}
};

int main()
 {
 	Band* s;
 	//s->setcount("Haji");
 	//cout << s->getname();
 }

