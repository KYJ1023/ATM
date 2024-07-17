
#include <string>
#include <unordered_map>

class thir_selectAccount {
public:
    std::unordered_map<std::string, double> accounts; // 맵으로 key-value : 계좌번호-금액 받기

    thir_selectAccount(); // 생성자
    // 계좌번호 추가 함수           // 나중에 main에 담거나 four_BaDeWit에 담기       
    // 근데 나중에 아마 main에 담을 듯
    void addAccount(const std::string& accountNumber, double balance);
    // 계좌번호 선택 함수
    bool selectAccount(const std::string& accountNumber); 
    // 잔액 조회 함수
    double getBalance(const std::string& accountNumber); 
    // 입금 함수
    void deposit(const std::string& accountNumber, double amount);
    // 출금 함수
    bool withdraw(const std::string& accountNumber, double amount); 
};