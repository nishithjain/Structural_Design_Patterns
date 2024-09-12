#include <iostream>
#include <memory>

#include "ChocoChips.h"
#include "ChocolateCone.h"
#include "ChocolateSauce.h"
#include "IIceCream.h"
#include "Mango.h"
#include "Vanilla.h"

int main() {

	// Order "Chocolate Cone" + "Chocolate Sauce" + "Vanilla" + "Mango" + "Choco Chips"
	const std::unique_ptr<IIceCream> ic = 
		std::make_unique<ChocoChips>(
		std::make_unique<Mango>(
			std::make_unique<Vanilla>(
				std::make_unique<ChocolateSauce>(
					std::make_unique<ChocolateCone>()))));

	std::cout << "Total Cost: " <<ic->GetCost() << "\n";
	std::cout << "Description: " << ic->GetDescription() << "\n";
	return 0;
}
// Total Cost: 72
// Description: Chocolate Cone, Chocolate Sauce, Vanilla, Mango, Choco Chips