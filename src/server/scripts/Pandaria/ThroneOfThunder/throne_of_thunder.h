/*
 * Copyright (C) 2012-2014 JadeCore <http://www.pandashan.com>
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef THRONE_OF_THUNDER_H_
#define THRONE_OF_THUNDER_H_

#include "SpellScript.h"
#include "Map.h"
#include "Creature.h"
#include "CreatureAIImpl.h"

enum eData
{
    // Last Stand of the Zandalari
    DATA_JIN_ROKH_THE_BREAKER   = 0,
    DATA_HORRIDON               = 1,
    DATA_CONCIL_OF_ELDERS       = 2,

    // Forgotten Depths
    DATA_TORTOS                 = 3,
    DATA_MEGAERA                = 4,
    DATA_JI_KUN                 = 5,

    // Halls of Flesh-Shaping
    DATA_DURUMU_THE_FORGOTTEN   = 6,
    DATA_PRIMORDIUS             = 7,
    DATA_DARK_ANIMUS            = 8,

    // Pinnacle of Storms
    DATA_IRON_QON               = 9,
    DATA_TWIN_CONSORTS          = 10,
    DATA_LEI_SHEN               = 11,
    DATA_RA_DEN                 = 12,

    DATA_MAX_BOSS_DATA          = 13,

    DATA_STATUE_0               = 14,
    DATA_STATUE_1               = 15,
    DATA_STATUE_2               = 16,
    DATA_STATUE_3               = 17
};

enum eCreatures
{
    // Trash mobs
    NPC_ZANDALARI_WATER_BINDER      = 69455,
    NPC_ZANDALARI_BLADE_INITIATE    = 70230,
    NPC_ZANDALARI_SPEAR_SHAPER      = 69388,
    NPC_THROWN_SPEAR                = 69438,
    NPC_ZANDALARI_STORM_CALLER      = 69390,
    NPC_TRASH_FOCUSED_LIGHTNING     = 70174,

    // Jin'Rokh the Breaker
    NPC_JIN_ROKH_THE_BREAKER        = 69465,
    NPC_FOCUSED_LIGHTNING           = 69593,
    NPC_LIGHTNING_FISSURE           = 69609,
    NPC_STATUE                      = 69467,
    NPC_CONDUCTIVE_WATER            = 69469,
    NPC_LIGHTNING_SPARK             = 69635,
    NPC_LIGHTNING_PILLER_STALKER    = 69813,

    NPC_HORRIDON                    = 68476,

    // Council of Elders
    NPC_KAZRA_JIN                   = 69134,
    NPC_SUL_THE_SANDCRAWLER         = 69078,
    NPC_FROST_KING_MALAKK           = 69131,
    NPC_HIGH_PRIESTRESS_MAR_LI      = 69132,

    NPC_TORTOS                      = 67977,

    NPC_MEGAERA                     = 70212,

    NPC_JI_KUN                      = 69712,

    NPC_DURUMU_THE_FORGOTTEN        = 68036,

    NPC_PRIMORDIUS                  = 69017,

    NPC_DARK_ANIMUS                 = 69427,

    NPC_IRON_QON                    = 68078,

    // Twin Consorts
    NPC_LU_LIN                      = 68905,
    NPC_SUEN                        = 68904,

    NPC_LEI_SHI                     = 68397,

    NPC_RA_DEN                      = 69473
};

enum eGameObjects
{
    GOB_MOGU_FOUNTAIN_NW        = 218678,
    GOB_MOGU_FOUNTAIN_SW        = 218676,
    GOB_MOGU_FOUNTAIN_NE        = 218677,
    GOB_MOGU_FOUNTAIN_SE        = 218675
};

enum eAchievementData
{
};

enum eSharedSpells
{
    SPELL_ENRAGE    = 47008,
};

#endif // THRONE_OF_THUNDER_H_
