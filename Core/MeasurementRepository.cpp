#include "stdafx.h"

#include "MeasurementRepository.h"
#include "Measurement.h"

namespace Core
{
	MeasurementPtr MeasurementRepository::getMeasurementByFileName(Support::FileName file_name)
	{
		return std::make_unique<Measurement>(Support::Date(2015, 10, 01));
	}
}