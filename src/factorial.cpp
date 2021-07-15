// Based on https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md
unsigned int factorial(unsigned int number)
{
    return number <= 1 ? number : factorial(number - 1) * number;
}

unsigned int unused(unsigned int number)
{
    return number * number;
}

unsigned int unused2(unsigned int number)
{
    return number / number;
}
