#include <string>
#include <vector>

class BinaryCalculator {
private:
    std::vector<int> firstBinaryNumber, secondBinaryNumber, secondBinaryNumberAddCode, div, summ;
    int inputFirstNumber, inputSecondNumber, pairNumber, taktStart, taktMultiplier;
    int state = 0, k, n;
    bool done = false;

    // Константы для двоичных чисел
    int SIZE = 4;
    std::vector<int> ONE = {1, 0, 0, 0};
    std::vector<int> ZERO = {0, 0, 0, 0};
    // 0001
public:
    // Конструктор
    BinaryCalculator(int inputFirstNumber, int inputSecondNumber, int pairNumber, int taktStart, int taktMultiplier);
    BinaryCalculator();

public:
    bool oneStep(int k);

    // Сдвиг
    void shift();
    std::vector<int> shiftLeft(std::vector<int> binaryNumber);
    std::vector<int> shiftRight(std::vector<int> binaryNumber);
    void shiftRemainder();

    // Обновление частного
    void fixResult();

    //Сумма
    void getSumm();

    // Восстановление остатка
    void restoreRemainder();

    //Нормализация
    void normalized();

    // Получить из числа в двоичном коде число в дополнительном коде
    std::vector<int> _2_to_additional_code(std::vector<int> binaryNumber);

    // Получить из числа в десятичном коде 4-хразрядное число в двоичном коде
    std::vector<int> _10_to_2_(int number);

    // Получить из числа в двоичном коде число в дополнительном коде
    std::vector<int> _2_to_inverted_code(std::vector<int> binaryNumber);

    // Сумма двоичных чисел
    std::vector<int> binaryAddition(std::vector<int> num_1, std::vector<int> num_2);

    void step_1();
    void step_2();
    void step_3();
    void step_4();
    void step_5();
};