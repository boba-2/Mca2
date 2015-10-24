#include "stdafx.h"

#include "Container.h"

#include "../MeasurementRepository.h"

namespace Utils
{
	const Container &Container::instance()
	{
		static Container instance;

		return instance;
	}

	Core::MeasurementRepository &Container::measurementRepository() const
	{
		static Core::MeasurementRepository measurement_repository;

		return measurement_repository;
	}
}