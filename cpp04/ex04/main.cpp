/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 13:05:53 by mlaplana          #+#    #+#             */
/*   Updated: 2020/08/03 13:18:52 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

int main()
{
    MiningBarge barge;
    AsteroKreog *comet = new AsteroKreog();
    KoalaSteroid *asteroid = new KoalaSteroid();

    barge.equip(new DeepCoreMiner());
    barge.equip(new DeepCoreMiner());
    barge.equip(new StripMiner());

    barge.mine(asteroid);
    barge.mine(comet);

    barge.equip(new StripMiner());

    barge.mine(asteroid);
    barge.mine(comet);

    delete comet;
    delete asteroid;
}