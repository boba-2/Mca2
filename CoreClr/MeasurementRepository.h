#pragma once

#include "Utils/NativeObjectRefWrapper.h"
#include "Core/MeasurementRepository.fwd"

namespace Mca
{
	ref class Measurement;

	namespace Repositories
	{
		public ref class Measurement
		{
		public:
			static Mca::Measurement ^getMeasurementByFileName(System::String ^file_name);
		};
	}
}
