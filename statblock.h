#pragma once
#include <cstdint>

typedef std::uint16_t stattype; // 0 to 255
class StatBlock {
    stattype Strength; // 0xFF 4 bytes
    stattype Intellect; // 0xFF 4 bytes

public:
    StatBlock() {
        Strength = (stattype)1u;
        Intellect = (stattype)1u;
    }
    explicit StatBlock(stattype s, stattype i) {
        Strength = s;
        Intellect = i;
    }
    // Getters
    stattype getStrength() {
        return Strength;
    }

    stattype getIntellect() {
        return Intellect;
    }

    // Setters
    void setStrength(stattype s) {
        Strength = s;
    }

    void setIntellect(stattype i) {
        Intellect = i;
    }
protected:
    void increaseStats(stattype s, stattype i) {
        Strength += s;
        Intellect += i;
    }
};