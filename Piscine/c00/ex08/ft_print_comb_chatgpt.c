#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn_recursive(int n, int current, int *combination)
{
    if (current == n) // базовый случай: если достигнут конец комбинации
    {
        // выводим текущую комбинацию
        for (int i = 0; i < n; ++i)
        {
            ft_putchar(combination[i] + '0'); // преобразуем числа в символы и выводим их
        }
        if (combination[0] < 10 - n) // проверяем, чтобы не выводить запятую после последней комбинации
            write(1, ", ", 2); // выводим запятую и пробел между комбинациями
        return;
    }

    // генерируем новые комбинации для следующей позиции
    for (int i = (current == 0) ? 0 : combination[current - 1] + 1; i <= 9; ++i)
    {
        combination[current] = i;
        ft_print_combn_recursive(n, current + 1, combination);
    }
}

void ft_print_combn(int n)
{
    int combination[n];
    ft_print_combn_recursive(n, 0, combination);
}

int main()
{
    ft_print_combn(9); // пример вызова функции для n = 2
    return 0;
}

