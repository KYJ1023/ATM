
#include <string>
#include <unordered_map>

class thir_selectAccount {
public:
    std::unordered_map<std::string, double> accounts; // ������ key-value : ���¹�ȣ-�ݾ� �ޱ�

    thir_selectAccount(); // ������
    // ���¹�ȣ �߰� �Լ�           // ���߿� main�� ��ų� four_BaDeWit�� ���       
    // �ٵ� ���߿� �Ƹ� main�� ���� ��
    void addAccount(const std::string& accountNumber, double balance);
    // ���¹�ȣ ���� �Լ�
    bool selectAccount(const std::string& accountNumber); 
    // �ܾ� ��ȸ �Լ�
    double getBalance(const std::string& accountNumber); 
    // �Ա� �Լ�
    void deposit(const std::string& accountNumber, double amount);
    // ��� �Լ�
    bool withdraw(const std::string& accountNumber, double amount); 
};