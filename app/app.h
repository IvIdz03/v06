#pragma once

namespace vsite::oop::v6
{
	template <typename T>

	T minimum(T a, T b)
	{
		if (a < b)
			return a;
		return b;
	}

	template <typename T, int X>

	class fixed_array
	{
	private:
		T array[X];
	public:
		unsigned long long size()
		{
			return X;
		}

		T operator[](int a)
		{
			return array[a];
		}
	};

	template <typename T>

	class point
	{
	public:
		T a;
		T b;
	};
}