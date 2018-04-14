#include <stdio.h>
#include <Print.h>

const Print print;
template<> const Print Print::operator<<(const char* variable)const {
	printf("%s", variable);
	return *this;
}
template<> const Print Print::operator<<(const int variable)const {
	printf("%d", variable);
	return *this;
}
template<> const Print Print::operator<<(const double variable)const {
	printf("%lf", variable);
	return *this;
}
template<> const Print Print::operator<<(const float variable)const {
	printf("%f", variable);
	return *this;
}
template<> const Print Print::operator<<(const unsigned int variable)const {
	printf("%u", variable);
	return *this;
}
template<> const Print Print::operator<<(const unsigned long long variable)const {
	printf("%llu", variable);
	return *this;
}
template<> const Print Print::operator<<(const char variable)const {
	printf("%c", variable);
	return *this;
}
template<> const Print Print::operator<<(const long long variable)const {
	printf("%lld", variable);
	return *this;
}