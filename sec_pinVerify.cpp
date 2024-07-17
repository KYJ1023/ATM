
#include "sec_pinVerify.h"

sec_pinVerify::sec_pinVerify(int pin) : correctPIN(pin) {}

bool sec_pinVerify::verifyPIN(int enteredPIN) {
    return enteredPIN == correctPIN;
}
