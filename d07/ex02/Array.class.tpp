#ifndef ARRAY_CLASS_T
# define ARRAY_CLASS_T

# include <iostream>
# include <stdexcept> 

template < typename T >
class Array {

	private:

		unsigned int	_len;
		T 				*_array;

	public:
		Array(void);
		Array(int n);
		Array(Array<T> const & rhs);
		~Array<T>(void);

		Array<T>  		&operator=(Array<T> const &rhs);
		T  				&operator[](unsigned int n);

		T 				getElement(int i) const;
		unsigned int	size( void ) const {
			return (this->_len);
		}
		
};

template < typename T >
Array<T>::Array(void) : _len (0), _array(NULL) {}

template < typename T >
Array<T>::Array( int n )
{
	_len = n;
	_array = NULL;
	if (n > 0)
		_array = new T[n];
}

template < typename T >
Array<T>::Array( Array<T> const & rhs )
{
	*this = rhs;
}

template < typename T >
Array<T>::~Array(void)
{
	if (_len > 0)
	delete [] this->_array;
}

template < typename T >
Array<T>  &		Array<T>::operator=(Array<T> const &rhs)
{
	if (this->_len > 0)
		delete [] this->_array;
	this->_len = rhs.size();
	this->_array = new T [this->_len];
	return (*this);
}

template < typename T >
T 	 &			Array<T>::operator[](unsigned int n)
{
	if ( n >= this->_len)
		throw (std::out_of_range("out of array limit"));
	return ((this->	_array)[n]);
}


template < typename T >
T 			Array<T>::getElement(int i) const {
	return ((this->	_array)[i]);
}

template < typename T >
std::ostream & operator<<( std::ostream & o, Array<T> const & rhs) {
	o << " Array size : " << rhs.size() <<  std::endl;
	for (unsigned int i = 0; i < rhs.size(); i++)
		o << " indice : " << i << " Value :" << rhs.getElement(i) <<  std::endl;
			return o;
}

#endif
