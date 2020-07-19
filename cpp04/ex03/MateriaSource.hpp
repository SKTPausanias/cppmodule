/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:20:53 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/19 18:35:06 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *known[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource &c);
        MateriaSource &operator=(const MateriaSource &c);
        
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif