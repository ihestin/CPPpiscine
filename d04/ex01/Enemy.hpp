/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 16:49:04 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 16:49:11 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>

class Enemy {

	private:

	protected:
		int				_HP;
		std::string		_type;


	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & rhs);
		virtual ~Enemy(void);

		Enemy  			&operator=(Enemy const &rhs);
		std::string	const &	getType( void ) const;
		int 				getHP() const;
        
        virtual void takeDamage(int dam);

};


#endif
