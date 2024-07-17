#include "thir_selectAccount.h"

thir_selectAccount::thir_selectAccount() {}

// main���� ���¸� �߰��� �� �ֵ���
void thir_selectAccount::addAccount(const std::string& accountNumber, double balance) {
    accounts[accountNumber] = balance;
}

// four_BaDeWit���� ���¹�ȣ�� �Է��϶�� �� �� ���¸� ������ �� �ֵ���
bool thir_selectAccount::selectAccount(const std::string& accountNumber) {
    return accounts.find(accountNumber) != accounts.end();
}

// ����ڰ� balance�� ������ �� �ݾ��� �� �� �ְ�
double thir_selectAccount::getBalance(const std::string& accountNumber) {
    return accounts[accountNumber];
}

// ����ڰ� �Ա��� ������ �� ���� �߰��ǵ���
void thir_selectAccount::deposit(const std::string& accountNumber, double amount) {
    accounts[accountNumber] += amount;
}

// ����ڰ� ������ ������ �� ���� ��������
bool thir_selectAccount::withdraw(const std::string& accountNumber, double amount) {
    if (accounts[accountNumber] >= amount) {
        accounts[accountNumber] -= amount;      // ������ �� �ֵ���
        return true;    // ÷
    }
    return false;       // ����
}

