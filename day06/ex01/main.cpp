
#include <iostream>

struct Data
{
    std::string  name;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}


int main(void)
{
	Data *ptr = new Data;
	Data *deser;
	uintptr_t raw;

	ptr->name = "usable";



	raw = serialize(ptr);
	deser = deserialize(raw);

	std::cout << std::endl;
	std::cout << "--POINTER----- : " << ptr << std::endl;
	std::cout << "--DESERIALIZED : " << deser << std::endl;

	std::cout << std::endl;
	std::cout << "--RAW--------- : " << raw << std::endl;

	std::cout << std::endl;
	std::cout << "--DATA_VALUE-- : " << deser->name << std::endl;
	return 0;
}