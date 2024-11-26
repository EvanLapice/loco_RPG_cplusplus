#pragma once
#include <cstdint>

typedef std::uint16_t welltype;

class PointWell {
public:
	//Setters
	// returns true if set successfully
	bool setMax(welltype new_max) {
		if (new_max < 1) {
			return false;
		}

		MaxWell = new_max;

		if (CurrentFullness > MaxWell) {
			CurrentFullness = MaxWell;
		}
		return true;
	}
	//Setters

	// Getters
	welltype getCurrent() const {
		return CurrentFullness;
	}

	welltype getMax() const {
		return MaxWell;
	}
	// Getters

	void reduceCurrent(welltype amount) {
		if (amount > CurrentFullness) {
			CurrentFullness = 0;
			return;
		}
		CurrentFullness -= amount;

	}

	void increaseCurrent(welltype healAmount) {
		if (healAmount + CurrentFullness > MaxWell) {
			CurrentFullness = MaxWell;
			return;
		}
		CurrentFullness += healAmount;
	}

	PointWell() { CurrentFullness = 1; MaxWell = 1; }

	PointWell(welltype current, welltype max) {
		CurrentFullness = current;
		MaxWell = max;
		if (CurrentFullness > MaxWell) {
			CurrentFullness = MaxWell;
		}

	}

private:
	welltype CurrentFullness;
	welltype MaxWell;


};