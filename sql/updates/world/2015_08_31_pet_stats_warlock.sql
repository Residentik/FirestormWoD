DELETE FROM `pet_stats` WHERE `entry` IN (89, 416, 417, 1860, 1863, 11859, 17252, 58959, 58960, 58963, 58964, 58965, 58997, 59000);
INSERT INTO `pet_stats` (`entry`, `speed`, `powerstatbase`, `armor_coef`, `apsp_coef`, `health_coef`, `damage_coef`, `attackspeed`, `powertype`, `createpower`, `secondarystat_coef`, `comment`)
VALUES
    (89,    1.14, 1, 0.35, 0.75, 0.75, 0.85, 2, 0,    0, 0.04688, 'Infernal'),
    (416,   1.14, 1, 0.35, 0.75, 0.75, 0.57, 5, 3, -200, 0.6563,  'Imp'),
    (417,   1.14, 1, 0.35, 0.75, 0.75, 0.57, 2, 3, -200, 0.6563,  'Felhunter'),
    (1860,  1.14, 1, 0.35, 0.75, 0.75, 0.57, 2, 3, -200, 0.6563,  'Voidwalker'),
    (1863,  1.14, 1, 0.35, 0.75, 0.75, 0.42, 3, 3, -200, 0.3124,  'Succubus'),
    (11859, 1.14, 1, 0.35, 0.75, 0.75, 0.85, 2, 0, -100, 0.09375, 'Doomguard'),
    (17252, 1.14, 1, 0.35, 0.75, 0.75, 0.62, 2, 3, -200, 0.6563,  'Felguard'),
    (58959, 1.14, 1, 0.35, 0.75, 0.75, 0.68, 2, 3, -200, 0.6563,  'Fel imp'),
    (58960, 1.14, 1, 0.35, 0.75, 0.75, 0.68, 2, 3, -200, 0.6563,  'Voidlord'),
    (58963, 1.14, 1, 0.35, 0.75, 0.75, 0.34, 3, 3, -200, 0.2081,  'Shivarra'),
    (58964, 1.14, 1, 0.35, 0.75, 0.75, 0.68, 2, 3, -200, 0.6563,  'Observer'),
    (58965, 1.14, 1, 0.35, 0.75, 0.75, 0.5,  2, 3, -200, 0.4376,  'Wrathguard'),
    (58997, 1.14, 1, 0.35, 0.75, 0.75, 0.85, 2, 0,    0, 0.04688, 'Abyssal'),
    (59000, 1.14, 1, 0.35, 0.75, 0.75, 0.85, 2, 3, -100, 0.09375, 'Terrorguard');
