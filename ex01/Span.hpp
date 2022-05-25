#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
private:
	std::vector<int>	_vec;
	const unsigned int	_size;
public:
	Span(unsigned int N);
	Span(const Span& to_copy);
	~Span();
	typedef std::vector<int>::iterator iterator;
	Span& 	operator=(const Span& to_assign);
	int& 	operator[](unsigned int index);
	Span::iterator	begin() { return _vec.begin(); }
	Span::iterator	end() { return _vec.begin() + _size; }
	void	addNumber(int N);
	int		size() { return _vec.size(); }
	int		shortestSpan();
	int		longestSpan();
	void	fill();
	void	fill(Span::iterator start, Span::iterator end);
	class OutOfRange : public std::exception
	{
		virtual const char * what() const throw(){
			return "OutOfRangeException";
		}
	};
};

#endif