#ifndef GUARD_PRINT
#define GUARD_PRINT
class Print {
public:
	template<class T>
	const Print operator<<(const T variable) const
	{
	printf(variable);
	return *this;
}
};
#endif