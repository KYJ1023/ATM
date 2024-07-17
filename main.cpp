#include "four_BaDeWit.h"

int main() {
    four_BaDeWit atm(1234);  // PIN number를 1234로 설정함     // 사용자 정의

    // 예시 계좌 번호와 잔액 초기화     //pair로 나타내야    // addAccount를 써서 pair로 넣음
    atm.addAccount("123456789", 1000);
    atm.addAccount("987654321", 5000);
    atm.addAccount("111222333", 750);
    atm.addAccount("584926984", 1000);
    atm.addAccount("879653548", 5000);
    atm.addAccount("597643541", 750);

    atm.run();      // 프로그램 실행
    return 0;
}
