// stats.cxx - implements statistician class as defined in stats.h
// YOUR NAME(S), DATE

#include <cassert>  // provides assert
#include "stats.h"  // defines what must be implemented

namespace main_savitch_2C
{
	statistician::statistician()
	{
		tiniest = INT_MIN;
		largest = INT_MAX;
		count = 0;
		total = 0;
	}
    // STUDENT WORK HERE

	void statistician::next(double r)
	{
		count++;
		sum += r;
		if(r < tiniest)
		{
			tiniest = val;
		}
		if(r > largest)
		{
			largest = r;
		}
	}
	
	void statistician::reset()
	{
		tiniest = INT_MIN;
		largest = INT_MAX;
		count = 0;
		total = 0;
	}
	
	int statistician::length()
	{
		return count;
	}
	
	double statistician::sum()
	{
		return total;
	}
	
	double statistician::mean()
	{
		if (count == 0)
		{
			cout<<"\tEmpty sequence!";
		}			
		else
			return sum/count;
	}
	
	double statistician::minimum()
	{
		if (count == 0)
		{
			cout<<"\tEmpty sequence!";
		}			
		else
			return tiniest;
	}
	
	double statistician::maximum()
	{
		if (count == 0)
		{
			cout<<"\tEmpty sequence!";
		}
		else
			return largest;
	}
	
	statistician::operator + (const statistician& s1, const statistician& s2)
	{
		statistician result;
		result.total = s1.total + s2.total;
		result.length = s1.length + s2.length;
		if (s1.tiniest >= s2.tiniest)
		{
			result.tiniest = s2.tiniest;
		}
		else
			result.tiniest = s1.tiniest;
		
		if (s1.largest > s2.largest)
		{
			result.largest = s1.largest;
		}
		else
			result.largest = s2.largest;
		
		return result;
	}
	
	statistician::operator * double scale, const statistician& s)
	{
		s.total *= scale;
		s.length *= scale;
		return 
	}
	
}

