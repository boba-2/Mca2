#pragma once

#include "../Infrastructure/declspec.h"
#include "../MeasurementRepository.fwd"

namespace Utils
{
	class CORE_API Container
	{
	public:
		static const Container &instance();

		Core::MeasurementRepository &measurementRepository() const;
	};
}