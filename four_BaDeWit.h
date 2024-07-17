
#include "fir_cardInsert.h"
#include "sec_pinVerify.h"
#include "thir_selectAccount.h"

class four_BaDeWit {
private:
    fir_cardInsert cardInsertion;
    sec_pinVerify pinVerification;
    thir_selectAccount accountSelection;

public:
    four_BaDeWit(int pin); // ������
    void addAccount(const std::string& accountNumber, double balance); // ���� �߰� �Լ�
    void run(); // ���߿� main���� �� �Լ�
};

