#pragma once
#include <algorithm>

template <typename Container, typename Value>
void insert_sorted(Container& cont, const Value& val)
{
	auto it = std::upper_bound(cont.begin(), cont.end(), val);
	cont.insert(it, val);
}