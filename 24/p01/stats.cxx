// stats.cxx - implements statistician class as defined in stats.h
// Zhicheng Zhang, 02/08/2018   

#include <cassert>  // provides assert
#include "stats.h"  // defines what must be implemented

namespace main_savitch_2C
{
	statistician::statistician()
	{
		//tiniest = NULL;
		//largest = NULL;
		count = 0;
		total = 0;
	}
    // STUDENT WORK HERE

	void statistician::next(double r)
	{
		count++;
		total += r;
		if (count == 1)
			{
			largest = r;
			tiniest = r;
			}
		else if(r < tiniest)
		{
			tiniest = r;
		}
		else if(r > largest)
		{
			largest = r;
		}
	}
	
	void statistician::reset()
	{
		//tiniest = NULL;
		//largest = NULL;
		count = 0;
		total = 0;
	}
	

	
	double statistician::mean() const
	{
		//assert(count != 0);
		if (count == 0)
			return 0;
		else
			return total/count;
			
	}
	
	double statistician::minimum() const
	{
		//assert(count != 0);
		if (count == 0)
			return 0;
		else
			return tiniest;
	}
	
	double statistician::maximum() const
	{
		//assert(count != 0);
		if (count == 0)
			return 0;
		else
			return largest;
	}
	
	statistician operator + (const statistician& s1, const statistician& s2)
	{
		if (s1.count == 0)
			return s2;
		if (s2.count == 0)
			return s1;
		statistician result;
		result.total = s1.total + s2.total;
		result.count = s1.count + s2.count;
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
	
	statistician operator * (double scale, const statistician& s)
	{
		
		if (s.count == 0)
			return s;
		statistician result;	
		result.total = scale * s.total;
		result.count = s.count;
		if (scale > 0)
			{
				result.largest = s.largest * scale;	
				result.tiniest = s.tiniest * scale;
			}
		else
			{
				result.tiniest = s.largest * scale;
				result.largest = s.tiniest * scale;
			}
		
		return result;
		
	}
	
	bool operator == (const statistician& s1, const statistician& s2)
	{
		if ((s1.sum() == s2.sum()) && (s1.length() == s2.length()) && (s1.minimum() == s2.minimum()) && (s1.maximum()== s2.maximum()) && (s1.mean() == s2.mean()))
			return true;
		else
			return false;
	}

}

