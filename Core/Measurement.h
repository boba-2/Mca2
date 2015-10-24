#pragma once

#include "Measurement.fwd"
#include "Support/Date.h"

namespace Core
{
	class CORE_API Measurement
	{
	public:
		explicit Measurement(Support::Date date);

		Support::Date takenOn() const;

	private:
		const Support::Date date;
	};
}