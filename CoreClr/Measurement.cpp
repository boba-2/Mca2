#include "stdafx.h"

#include "Measurement.h"

namespace Mca
{
	System::DateTime ^Measurement::TakenOn::get()
	{
		auto takenOn = WrappedObject.takenOn();

		return gcnew System::DateTime(takenOn.year(), takenOn.month(), takenOn.day());
	}
}