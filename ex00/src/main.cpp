# include "../include/Zombie.hpp"

int	main( void )
{
	Zombie	*zombie;

	zombie = new Zombie("Foo");
	if (!zombie)
		return (1);
	zombie->announce();
	delete zombie;
	zombie = newZombie("newFoo");
	if (!zombie)
		return (1);
	zombie->announce();
	delete zombie;
	randomChump("randomFoo");
	return (0);
}