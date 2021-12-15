#ifndef ITER_HPP
#define ITER_HPP


template<typename T>
void iter(T *a, unsigned long len, void (*f)(T const &))
{
    unsigned long i;
    i= 0;
    while (i < len)
    {
        f(a[i]);
        i++;
    }
}

#endif