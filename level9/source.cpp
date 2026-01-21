#include <unistd.h>
#include <cstdint>
#include <cstring>

class	N {
	public:
		char	buff[108];
		int32_t	nb;

		N(int32_t n) : nb(n) {}
		N(void) {}

		virtual int	operator+(N const & rhs) {
			return (this->nb + rhs.nb);
		}
		virtual int	operator-(N const & rhs) {
			return (this->nb - rhs.nb);
		}
		virtual void	setAnnotation(char *s) {
			memcpy(this->buff, s, strlen(s));
		}
};

int	main(int ac, char **av)
{
	if (ac < 2)
		_exit(1);

	N	*a = new N(5);
	N	*b = new N(6);

	a->setAnnotation(av[1]);

	return (*b + *a);
}
