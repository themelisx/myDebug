#include <Arduino.h>
#include "MyDebug.h"

MyDebug::MyDebug() {   

};

void MyDebug::start(int speed, int debugLevel) {

    this->speed = speed;
    this->debugLevel = debugLevel;
    if (debugLevel != DEBUG_LEVEL_NONE) {        
        Serial.begin(speed);
    }
    
}

void MyDebug::print(int debugLevel, const __FlashStringHelper *ifsh) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(ifsh);
    }
}

void MyDebug::print(int debugLevel, const String &s) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(s);
    }
}

void MyDebug::print(int debugLevel, const char str[]) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(str);
    }
}

void MyDebug::print(int debugLevel, char c) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(c);
    }
}

void MyDebug::print(int debugLevel, unsigned char b, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(b, base);
    }
}

void MyDebug::print(int debugLevel, int n, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(n, base);
    }
}

void MyDebug::print(int debugLevel, int num) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(num);
    }
}

void MyDebug::print(int debugLevel, unsigned int n, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(n, base);
    }
}

void MyDebug::print(int debugLevel, long n, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(n, base);
    }
}

void MyDebug::print(int debugLevel, unsigned long n, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(n, base);
    }
}

void MyDebug::print(int debugLevel, long long n, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(n, base);
    }
}

void MyDebug::print(int debugLevel, unsigned long long n, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(n, base);
    }
}

void MyDebug::print(int debugLevel, double n, int digits) {
   if (debugLevel <= this->debugLevel) {
        Serial.print(n, digits);
    }
}

#ifdef ESP32
void MyDebug::print(int debugLevel, const Printable& x) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(x);
    }
}

void MyDebug::print(int debugLevel, struct tm * timeinfo, const char * format) {
    if (debugLevel <= this->debugLevel) {
        Serial.print(timeinfo, format);
    }
}
#endif

void MyDebug::println(int debugLevel, const __FlashStringHelper *ifsh) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(ifsh);
    }
}

void MyDebug::println(int debugLevel, const String &s) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(s);
    }
}

void MyDebug::println(int debugLevel, const char c[]) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(c);
    }
}

void MyDebug::println(int debugLevel, char c) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(c);
    }
}

void MyDebug::println(int debugLevel, int num) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num);
    }
}

void MyDebug::println(int debugLevel, unsigned char b, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(b, base);
    }
}

void MyDebug::println(int debugLevel, int num, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num, base);
    }
}

void MyDebug::println(int debugLevel, unsigned int num, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num, base);
    }
}

void MyDebug::println(int debugLevel, long num, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num, base);
    }
}

void MyDebug::println(int debugLevel, unsigned long num, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num, base);
    }
}

void MyDebug::println(int debugLevel, long long num, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num, base);
    }
}

void MyDebug::println(int debugLevel, unsigned long long num, int base) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num, base);
    }
}

void MyDebug::println(int debugLevel, double num, int digits) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(num, digits);
    }
}

#ifdef ESP32
void MyDebug::println(int debugLevel, const Printable& x) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(x);
    }
}

void MyDebug::println(int debugLevel, struct tm * timeinfo, const char * format) {
    if (debugLevel <= this->debugLevel) {
        Serial.println(timeinfo, format);
    }
}
#endif
