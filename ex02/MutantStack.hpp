#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename Container::iterator		iterator;
	typedef typename Container::const_iterator	const_iterator;

    // expose just the iterators of the underlying container
    iterator begin() { return std::begin(std::stack<T, Container>::c); }
    iterator end() { return std::end(std::stack<T, Container>::c); }

	const_iterator begin() const { return std::begin(std::stack<T, Container>::c); }
	const_iterator end() const { return std::end(std::stack<T, Container>::c); }
};

#endif



