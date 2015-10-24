#pragma once

namespace Utils
{
	template<typename T>
	public ref class NativeObjectRefWrapper abstract
	{
	public:
		NativeObjectRefWrapper(T &ref)
			: wrapped_object(ref)
		{}

	protected:
		property T &WrappedObject
		{
			T &get()
			{
				return wrapped_object;
			}
		}

	private:
		T &wrapped_object;
	};
}