#include <iostream>
#include "four_BaDeWit.h"

four_BaDeWit::four_BaDeWit(int pin) : pinVerification(pin) {}

void four_BaDeWit::addAccount(const std::string& accountNumber, double balance) {
    accountSelection.addAccount(accountNumber, balance);
}

void four_BaDeWit::run() {      // main���� ����
    cardInsertion.insertCard();     // ī�尡 ���� �Ǹ�
    if (cardInsertion.cardInserted) {
        std::cout << "Card inserted. Please enter your PIN: ";      // PIN �Է��ϵ��� �ȳ�
        int enteredPIN;
        std::cin >> enteredPIN;     // �� ��ȣ �Ԥ���

        if (pinVerification.verifyPIN(enteredPIN)) {        // �ùٸ��� �ԷµǸ� ���������� ����
            std::cout << "PIN verified. Please enter your account number: ";
            std::string accountNumber;
            std::cin >> accountNumber;          // ������� ���� ��ȣ�� �Է��ϰ�

            if (accountSelection.selectAccount(accountNumber)) {        // ���� ��ȣ�� ���ù�����
                // 1. balance
                // 2. deposit
                // 3. withdraw
                std::cout << "Account selected. Choose operation (1: balance, 2: deposit, 3: withdraw): ";
                int operation;
                std::cin >> operation;  // 1 2 3 �߿��� �Է��ϵ��� �ϰ�

                //  if �� switch ������ �� ��
                // �Ƹ� ���� �޴°Ŷ� if ���� switch������ �� ��
                switch (operation) {
                case 1: { // thir_selectAccount���� getBalance�Լ��� �ܾ� ��ȸ
                    std::cout << "Current balance: $" << accountSelection.getBalance(accountNumber) << std::endl;
                    break;
                }
                case 2: { // ���� �Ա��̹Ƿ� �� �Ա��� �� �ٽ� �Է� �޾ƾ� ��
                    std::cout << "Enter amount to deposit: ";
                    double amount;
                    std::cin >> amount;     // �Ա��� �ݾ� �Է¹ޱ�
                    accountSelection.deposit(accountNumber, amount);    // deposit �Լ� ����        // ���߿� �ܾ� ��ȸ getBalance ����
                    std::cout << "New balance: $" << accountSelection.getBalance(accountNumber) << std::endl;
                    break;
                }
                case 3: { // ���� �����̹Ƿ� �� �� �� �ٽ� �Է� �޾ƾ� ��
                    std::cout << "Enter amount to withdraw: ";
                    double amount;
                    std::cin >> amount;     // ������ �ݾ� �Է¹ޱ�
                    if (accountSelection.withdraw(accountNumber, amount)) { // withdraw �Լ� ����       // ���߿� �ܾ� ��ȸ �Լ� getbalace ����
                        std::cout << "Please take your cash. New balance: $" << accountSelection.getBalance(accountNumber) << std::endl;
                    }
                    else {      // false�� ��ȯ������ ���� �ȵǵ���
                        std::cout << "Insufficient funds." << std::endl;
                    }
                    break;
                }
                      // ����Ʈ�� �ȵȴٰ� ���
                default:
                    std::cout << "Invalid operation." << std::endl;
                    break;
                }
            }
                    // ���¹�ȣ Ʋ���� ��� �ȵȴٰ� ���
            else {
                std::cout << "Invalid account number." << std::endl;
            }
        }

        // �� �ѹ� Ʋ���� ���  // ī�� �����޵���
        else {
            std::cout << "Incorrect PIN. Card returned." << std::endl;
        }
    }
}
