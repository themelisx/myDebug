#ifndef DEBUG_h
#define DEBUG_h

#include <Arduino.h>

#define DEBUG_LEVEL_NONE 0
#define DEBUG_LEVEL_ERROR 1
#define DEBUG_LEVEL_WARNING 2
#define DEBUG_LEVEL_INFO 3
#define DEBUG_LEVEL_DEBUG 4
#define DEBUG_LEVEL_DEBUG2 5

class MyDebug {
public:
    MyDebug();
    void start(int speed, int debugLevel);

    void print(int level, const char *fmt, ...);
    void println(int level, const char *fmt, ...);
    
    template<typename T>
    void print(int level, T value) {
        if(level <= debugLevel)
            Serial.print(value);
    }

    template<typename T>
    void println(int level, T value) {
        if(level <= debugLevel)
            Serial.println(value);
    }

    void print(int level, const String &s);
    void println(int level, const String &s);
    void println(int level);

private:
    int speed = 115200;
    int debugLevel = DEBUG_LEVEL_NONE;
};

#endif
