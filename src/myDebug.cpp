#include <Arduino.h>
#include "MyDebug.h"
#include <stdarg.h>

#define DEBUG_BUFFER_SIZE 256

MyDebug::MyDebug() {}

void MyDebug::start(int speed, int debugLevel) {
    this->speed = speed;
    this->debugLevel = debugLevel;
    if (debugLevel != DEBUG_LEVEL_NONE) {
        Serial.begin(speed);
        delay(100);
    }
}

void MyDebug::print(int level, const char *fmt, ...) {
    if (level > this->debugLevel) return;

    char buffer[DEBUG_BUFFER_SIZE];
    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    va_end(args);

    Serial.print(buffer);
}

void MyDebug::println(int level, const char *fmt, ...) {
    if (level > this->debugLevel) return;

    char buffer[DEBUG_BUFFER_SIZE];
    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    va_end(args);

    Serial.println(buffer);
}

void MyDebug::print(int level, const String &s) {
    if (level <= debugLevel)
        Serial.print(s);
}

void MyDebug::println(int level, const String &s) {
    if (level <= debugLevel)
        Serial.println(s);
}

void MyDebug::println(int level) {
    if (level <= debugLevel)
        Serial.println();
}
