#pragma once

#include "Utils/NativeObjectPtrWrapper.h"
#include "Core/Measurement.h"

namespace Mca
{
	public ref class Measurement : public Utils::NativeObjectPtrWrapper<Core::Measurement>
	{
	public:
		Measurement(Core::MeasurementPtr measurement)
			: NativeObjectPtrWrapper(std::move(measurement))
		{}

		property System::DateTime ^TakenOn { System::DateTime ^get(); }
	};
}

