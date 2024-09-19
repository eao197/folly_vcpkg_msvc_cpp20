#include <concepts>

#include <folly/fbvector.h>

void consume(std::movable auto & /*v*/)
{
}

int main()
{
	folly::fbvector<int> v{ 1, 2, 3 };
	consume(v);
}

