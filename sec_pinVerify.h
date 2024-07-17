class sec_pinVerify {
private:
    int correctPIN; // 올바른 PIN 번호

public:
    sec_pinVerify(int pin); // 생성자
    bool verifyPIN(int enteredPIN); // PIN 번호 맞는지 확인하는
};