#include "stdafx.h"

#include "MeasurementRepository.h"

#include "Measurement.h"
#include "Core/MeasurementRepository.h"
#include "Core/Support/Container.h"

using namespace msclr::interop;

namespace Mca
{
	namespace Repositories
	{
		Mca::Measurement ^Measurement::getMeasurementByFileName(System::String ^file_name)
		{
			return gcnew Mca::Measurement(::Utils::Container::instance().measurementRepository().getMeasurementByFileName(marshal_as<Support::FileName>(file_name)));
		}
	}
}