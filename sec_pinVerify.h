class sec_pinVerify {
private:
    int correctPIN; // �ùٸ� PIN ��ȣ

public:
    sec_pinVerify(int pin); // ������
    bool verifyPIN(int enteredPIN); // PIN ��ȣ �´��� Ȯ���ϴ�
};