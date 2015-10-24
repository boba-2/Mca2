#pragma once

#include "RefHolder.h"

namespace Utils
{
	template<typename T>
	public ref class NativeObjectPtrWrapper abstract
	{
	public:
		NativeObjectPtrWrapper(std::unique_ptr<T> ptr)
			: wrapped_object(ptr.release())
		{}

	protected:
		property T &WrappedObject
		{
			T &get()
			{
				return *wrapped_object.get();
			}
		}

	private:
		Utils::RefHolder<T> wrapped_object;
	};
}