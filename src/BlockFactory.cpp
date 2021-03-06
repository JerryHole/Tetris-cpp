#include "BlockFactory.h"

BlockFactory::BlockFactory()
{
}

BlockFactory::~BlockFactory()
{
}

std::shared_ptr<Block> BlockFactory::createBlock()
{
	switch (std::rand() % 7)
	{
	case 1:
		return std::make_shared<BlockS>();
	case 2:
		return std::make_shared<BlockSquare>();
	case 3:
		return std::make_shared<BlockZ>();
	case 4:
		return std::make_shared<BlockL>();
	case 5:
		return std::make_shared<BlockJ>();
	case 6:
		return std::make_shared<BlockT>();
	default:
		return std::make_shared<BlockLong>();
	}
}
