#include "thir_selectAccount.h"

thir_selectAccount::thir_selectAccount() {}

// main에서 계좌를 추가할 수 있도록
void thir_selectAccount::addAccount(const std::string& accountNumber, double balance) {
    accounts[accountNumber] = balance;
}

// four_BaDeWit에서 계좌번호를 입력하라고 할 떄 계좌를 선택할 수 있도록
bool thir_selectAccount::selectAccount(const std::string& accountNumber) {
    return accounts.find(accountNumber) != accounts.end();
}

// 사용자가 balance를 택했을 떄 금액을 볼 수 있게
double thir_selectAccount::getBalance(const std::string& accountNumber) {
    return accounts[accountNumber];
}

// 사용자가 입금을 택했을 때 값에 추가되도록
void thir_selectAccount::deposit(const std::string& accountNumber, double amount) {
    accounts[accountNumber] += amount;
}

// 사용자가 인출을 택했을 때 값이 빼지도록
bool thir_selectAccount::withdraw(const std::string& accountNumber, double amount) {
    if (accounts[accountNumber] >= amount) {
        accounts[accountNumber] -= amount;      // 차감할 수 있도록
        return true;    // 첨
    }
    return false;       // 거짓
}

