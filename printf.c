#include "main.h"

/**
 * _printf - prints a set of characters to the standard output
 * @format: string of characters to be printed
 * @...: variadic arguments to be printed
 * Return: number of characters printed to the standard output
 */

int _printf(const char *format, ...)
{
        int count = 0, i = 0, val = 0;
        va_list args;
        va_start(args, format);

        if (!format)
                return (1);
        while (format[i])
        {
                if (format[i] != '%')
                {
                        val = write(1, format + i, 1);
                        count += val;
                        i++;
                        continue;
                }
                if (format[i] == '%')
                {

                }
        }
        return (count);
}
