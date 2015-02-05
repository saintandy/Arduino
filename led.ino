
int digit(char a) {
    if (a <= '9') {
        return a - '0';
    } else {
        return a - 'A' + 10;
    }
}

int hextodec(char a, char b) {
    return digit(a) * 16 + digit(b);
}

void rgb(int pin[], char a[]) {
    analogWrite(pin[0], hextodec(a[0], a[1]));
    analogWrite(pin[1], hextodec(a[2], a[3]));
    analogWrite(pin[2], hextodec(a[4], a[5]));
}

void setup() {
}

int pin[] = {10, 11, 12};

void loop() {
    rgb(pin, "F92672");
}
