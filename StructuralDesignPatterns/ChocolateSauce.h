#pragma once
#include <memory>

#include "IIceCream.h"
class ChocolateSauce final : public IIceCream
{
	std::unique_ptr<IIceCream> ice_cream_;
public:
	explicit ChocolateSauce(std::unique_ptr<IIceCream> ice_cream);
	double GetCost() override;
	std::string GetDescription() override;
};

