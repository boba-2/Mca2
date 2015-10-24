#pragma once

#include <memory>

namespace Utils
{
	struct safe_bool
	{
	private:
		safe_bool();
	};

	template<typename T>
	public ref class RefHolder
	{
	public:
		RefHolder()
			: value(nullptr)
		{}
		explicit RefHolder(T *value)
			: value(value)
		{}
		~RefHolder()
		{
			RefHolder::!RefHolder();
		}
		!RefHolder()
		{
			reset();
		}

		template<typename U>
		RefHolder(U value)
			: value(value)
		{}

		void reset(T *new_value)
		{
			delete value;
			value = new_value;
		}
		void reset()
		{
			reset(nullptr);
		}

		RefHolder %operator=(T *value)
		{
			reset(value);
		}

		template<typename U>
		RefHolder %operator=(U value)
		{
			reset(value);
		}

		operator struct safe_bool*()
		{
			return reinterpret_cast<struct safe_bool *>(value);
		}

		void swap(RefHolder %other)
		{
			std::swap(value, other.value);
		}

		T *release()
		{
			T *result = value;
			value = nullptr;
			return result;
		}

		T *get()
		{
			return value;
		}

		static T *operator->(RefHolder %ptr)
		{
			return ptr.get();
		}

		static T &operator*(RefHolder %ptr)
		{
			return *ptr.get();
		}

	private:
		T *value;
	};

	template<typename T>
	inline void swap(RefHolder<T> %left, RefHolder<T> %right)
	{
		left.swap(right);
	}
}
