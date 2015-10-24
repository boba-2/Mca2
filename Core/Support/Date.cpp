#include "stdafx.h"

#include "Date.h"

namespace Support
{
	Date::Date(Year year, Month month, Day day)
		: _year(year),
		_month(month),
		_day(day)
	{
	}
}