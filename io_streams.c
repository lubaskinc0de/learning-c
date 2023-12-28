#include <locale.h>
#include "stdio.h"

int main() {
    /*
     * ����������� ������ �����-������ � ��������������� �� ������� �� stdio.h
     *
     * stdin - getchar(), scanf()
     * stdout - putchar(), printf()
     * stderr - perror()
     * */

    __attribute__((unused)) char *locale = setlocale(LC_ALL, ""); // ����� ��������� ������� ���� �������

    int age;
    int height;
    int weight;

    /*
    printf("������� ������:\n");

    int some_char = getchar();
    int code = putchar(some_char); // ��� �������

    printf("%d\n", code);
    */

    printf("������� ��� �������: ");
    scanf("%d", &age); // ��������� �����, �������� ��������� �� ����������, ����� ������������ � ����������

    printf("������� ��� ���� � ���: ");
    scanf("%d %d", &height, &weight); // ������ �������� ���������� ������: _, \n, TAB

    printf("���� � ��������:\n  �������: %d\n  ����: %d\n  ���: %d\n\n", age, height, weight);

    int var_i = -1283;
    double var_x = 54.34675;

    printf("[%10d]\n", var_i); // ����� ��������������
    printf("[%10f]\n", var_x); // ������������ ����� �� ������ ������� ���� �� 10 ��������

    printf("[%12.7d]\n", var_i); // 12 - ������ ����, 7 - ���������� �������� ������� ������ ���� � ������ ��������
    printf("[%12.2f]\n", var_x); // 12 - ������ ����, 2 - ���������� ���� ����� �����

    /*
[     -1283]
[ 54,346750]

[    -0001283]
[       54,35]
     */

    return 0;
}
