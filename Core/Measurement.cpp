#include "stdafx.h"

#include "Measurement.h"

namespace Core
{
	Measurement::Measurement(Support::Date date)
		: date(date)
	{
	}

	Support::Date Measurement::takenOn() const
	{
		return date;
	}
}