#pragma once

#include "../Infrastructure/declspec.h"

namespace Support
{
	using Year = int;
	using Month = int;
	using Day = int;

	class CORE_API Date
	{
	public:
		Date(Year year, Month month, Day day);

		Year year() const { return _year; }
		Month month() const { return _month; }
		Day day() const { return _day; }

	private:
		const Year _year;
		const Month _month;
		const Day _day;
	};
}