
#include "fir_cardInsert.h"
#include "sec_pinVerify.h"
#include "thir_selectAccount.h"

class four_BaDeWit {
private:
    fir_cardInsert cardInsertion;
    sec_pinVerify pinVerification;
    thir_selectAccount accountSelection;

public:
    four_BaDeWit(int pin); // 생성자
    void addAccount(const std::string& accountNumber, double balance); // 계좌 추가 함수
    void run(); // 나중에 main에서 쓸 함수
};

