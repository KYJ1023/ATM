#include "four_BaDeWit.h"

int main() {
    four_BaDeWit atm(1234);  // PIN number�� 1234�� ������     // ����� ����

    // ���� ���� ��ȣ�� �ܾ� �ʱ�ȭ     //pair�� ��Ÿ����    // addAccount�� �Ἥ pair�� ����
    atm.addAccount("123456789", 1000);
    atm.addAccount("987654321", 5000);
    atm.addAccount("111222333", 750);
    atm.addAccount("584926984", 1000);
    atm.addAccount("879653548", 5000);
    atm.addAccount("597643541", 750);

    atm.run();      // ���α׷� ����
    return 0;
}
