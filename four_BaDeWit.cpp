#include <iostream>
#include "four_BaDeWit.h"

four_BaDeWit::four_BaDeWit(int pin) : pinVerification(pin) {}

void four_BaDeWit::addAccount(const std::string& accountNumber, double balance) {
    accountSelection.addAccount(accountNumber, balance);
}

void four_BaDeWit::run() {      // main에서 시작
    cardInsertion.insertCard();     // 카드가 삽입 되면
    if (cardInsertion.cardInserted) {
        std::cout << "Card inserted. Please enter your PIN: ";      // PIN 입력하도록 안내
        int enteredPIN;
        std::cin >> enteredPIN;     // 핀 번호 입ㄹ력

        if (pinVerification.verifyPIN(enteredPIN)) {        // 올바르게 입력되면 순차적으로 실행
            std::cout << "PIN verified. Please enter your account number: ";
            std::string accountNumber;
            std::cin >> accountNumber;          // 사용자의 계좌 번호를 입력하고

            if (accountSelection.selectAccount(accountNumber)) {        // 계좌 번호를 선택받으면
                // 1. balance
                // 2. deposit
                // 3. withdraw
                std::cout << "Account selected. Choose operation (1: balance, 2: deposit, 3: withdraw): ";
                int operation;
                std::cin >> operation;  // 1 2 3 중에서 입력하도록 하고

                //  if 나 switch 문으로 할 것
                // 아마 숫자 받는거라 if 말고 switch문으로 할 듯
                switch (operation) {
                case 1: { // thir_selectAccount에서 getBalance함수로 잔액 조회
                    std::cout << "Current balance: $" << accountSelection.getBalance(accountNumber) << std::endl;
                    break;
                }
                case 2: { // 현금 입금이므로 얼마 입금할 지 다시 입력 받아야 함
                    std::cout << "Enter amount to deposit: ";
                    double amount;
                    std::cin >> amount;     // 입금할 금액 입력받기
                    accountSelection.deposit(accountNumber, amount);    // deposit 함수 쓰기        // 나중에 잔액 조회 getBalance 쓰기
                    std::cout << "New balance: $" << accountSelection.getBalance(accountNumber) << std::endl;
                    break;
                }
                case 3: { // 현금 인출이므로 얼마 뺄 지 다시 입력 받아야 함
                    std::cout << "Enter amount to withdraw: ";
                    double amount;
                    std::cin >> amount;     // 인출할 금액 입력받기
                    if (accountSelection.withdraw(accountNumber, amount)) { // withdraw 함수 쓰기       // 나중에 잔액 조회 함수 getbalace 쓰기
                        std::cout << "Please take your cash. New balance: $" << accountSelection.getBalance(accountNumber) << std::endl;
                    }
                    else {      // false로 반환받으면 인출 안되도록
                        std::cout << "Insufficient funds." << std::endl;
                    }
                    break;
                }
                      // 디폴트로 안된다고 출력
                default:
                    std::cout << "Invalid operation." << std::endl;
                    break;
                }
            }
                    // 계좌번호 틀렸을 경우 안된다고 출력
            else {
                std::cout << "Invalid account number." << std::endl;
            }
        }

        // 핀 넘버 틀렸을 경우  // 카드 돌려받도록
        else {
            std::cout << "Incorrect PIN. Card returned." << std::endl;
        }
    }
}
