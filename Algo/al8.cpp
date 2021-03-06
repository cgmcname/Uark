#include <iostream>
#include <algorithm>
#include<fstream>
using namespace std;


struct Activity
{
	int id; 
	int start; 
	int finish; 
	int value;
	
	void setActivity(int a,int b,int c,int d)
	{
		id = a;
		start = b;
		finish = c;
		value = d;
	}
};

bool Activitycomp(Activity x, Activity y)
{
	return (x.finish < y.finish);
}



int Max(int a, int b)
{
    if (a > b)
    {
        return a;   
    }
    else
    {
        return b;
    }
    
}





int greatestValue(Activity list[], int n)
{
    sort(list, list+n, Activitycomp);

	int * value = new int[n];
	value[0] = list[0].value;
	
	
	
	for (int i = 1; i < n; i++)
	{
	    int hold = list[i].value;
		
	    for (int j = i - 1; j >= 0; j--)
	    {
			
	        if (list[i].start >= list[j].finish)
	        {
	            hold = Max(hold, list[i].value + value[j]);
				
	        }
	    }
		
	    
	    value[i] = Max(value[i - 1], hold);
	}
	
	int max_value = value[n - 1];
	delete[] value;
	
	return max_value;
}




int main(int argc, char *argv[])
{
	int n;
	int id;
	int s;
	int f;
	int v;
	int count = 0;
	
		string filename = argv[1];
		string filename2 = argv[2];
	
		ifstream inFile;
        inFile.open(filename.c_str());
	
	
		inFile >> n;
		
		inFile.ignore();
		
		Activity list[n];
		
		while (inFile >> id >> s >> f >> v)
		{
			if (count < n) 
			{
				list[count].setActivity(id, s, f, v);
			}
			
			count++;
		}
	
	
	
	
	
	ofstream out_data;
	
	out_data.open(filename2.c_str());



	out_data << "Greatest value of activities over selected interval: " << greatestValue(list, n);
	
	
	return 0;
}

