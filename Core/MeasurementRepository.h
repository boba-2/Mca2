#pragma once

#include "Measurement.fwd"
#include "MeasurementRepository.fwd"
#include "Support/FileName.h"

namespace Core
{
	class MeasurementRepository
	{
	public:
		MeasurementPtr getMeasurementByFileName(Support::FileName file_name);
	};
}
