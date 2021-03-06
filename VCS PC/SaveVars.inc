const long nMapSize = 539;
C_PcSave::PcClassSaveRoutine(&nMapSize, sizeof(long));
SaveVariable("PLAYER_CHAR", 2, 1);
SaveVariable("PLAYER_ACTOR", 3, 1);
SaveVariable("PLAYER_GROUP", 4, 1);
SaveVariable("DEFAULT_WAIT_TIME", 5, 1);
SaveVariable("CURRENT_TIME_IN_MS", 6, 1);
SaveVariable("MOVE_AXIS_X", 7, 1);
SaveVariable("MOVE_AXIS_Y", 8, 1);
SaveVariable("SPECIAL_AXIS_X", 9, 1);
SaveVariable("SPECIAL_AXIS_Y", 10, 1);
SaveVariable("ONMISSION", 11, 1);
SaveVariable("DEBUG_MODE", 12, 1);
SaveVariable("SCRIPT_STATUS", 13, 1);
SaveVariable("ACTIVE_INTERIOR", 14, 1);
SaveVariable("ACTIVE_INTERIOR_NAME", 15, 2);
SaveVariable("PICKUP_INFO", 17, 4);
SaveVariable("LAST_PLAYER_WEAPON", 21, 1);
SaveVariable("TEMPVAR_FLOAT_1", 22, 1);
SaveVariable("TEMPVAR_FLOAT_2", 23, 1);
SaveVariable("TEMPVAR_FLOAT_3", 24, 1);
SaveVariable("HELP_DISPLAYS_NOW", 25, 1);
SaveVariable("FADED_AWAY", 26, 1);
SaveVariable("TEMPVAR_ANGLE", 27, 1);
SaveVariable("OPENING_MISSION_FAILED", 28, 1);
SaveVariable("TRIP_SKIP_LAST_MISSION", 29, 1);
SaveVariable("TRIP_SKIP_LAST_CONTACT", 30, 1);
SaveVariable("TRIP_SKIP_AVAILABLE", 31, 1);
SaveVariable("MARKER_JERRY", 32, 1);
SaveVariable("MARKER_PHIL", 33, 1);
SaveVariable("RAMPAGE_POS_X", 34, 35);
SaveVariable("RAMPAGE_POS_Y", 69, 35);
SaveVariable("RAMPAGE_POS_Z", 104, 35);
SaveVariable("RAMPAGE_COMPLETED_FLAG", 139, 35);
SaveVariable("RAMPAGE_PICKUP", 174, 35);
SaveVariable("GATE_ARMY", 209, 2);
SaveVariable("PICKUP_BRIBE", 211, 12);
SaveVariable("PICKUP_ARMOUR", 223, 26);
SaveVariable("PICKUP_HEALTH", 249, 34);
SaveVariable("PICKUP_WEAPON", 283, 50);
SaveVariable("PARKED_AMBULANCE", 333, 4);
SaveVariable("PARKED_POLICE_VEHICLE", 337, 8);
SaveVariable("PARKED_FIRETRUCK", 345, 1);
SaveVariable("PARKED_VEHICLE", 346, 163);
SaveVariable("PARKED_ZEBRA_CAB", 509, 1);
SaveVariable("PARKED_TURISMO", 510, 1);
SaveVariable("PARKED_BTRIAL_BMX", 511, 1);
SaveVariable("PARKED_QTTRIAL_QUAD", 512, 1);
SaveVariable("PARKED_DTRIAL_SANCHEZ", 513, 1);
SaveVariable("PARKED_MTRIAL_TRUCK", 514, 1);
SaveVariable("JERRY_STREETFI", 515, 1);
SaveVariable("PHIL_WALTON", 516, 1);
SaveVariable("PHILS_PERENNIAL", 517, 1);
SaveVariable("SAVE_LOADED", 518, 1);
SaveVariable("SCM_VERSION_FOR_UPDATING", 519, 1);
SaveVariable("NEW_GAME_LAUNCHED", 520, 1);
SaveVariable("CURRENT_LANGUAGE", 521, 1);
SaveVariable("CURRENT_ISLAND", 522, 1);
SaveVariable("PLAYER_VEHICLE", 523, 1);
SaveVariable("PLAYER_X_COORD", 524, 1);
SaveVariable("PLAYER_Y_COORD", 525, 1);
SaveVariable("PLAYER_Z_COORD", 526, 1);
SaveVariable("SAVMAN_SAVED_WEAPON_ID", 527, 10);
SaveVariable("SAVMAN_SAVED_WEAPON_AMMO", 537, 10);
SaveVariable("SAVMAN_SAVED_WEAPON_MODEL", 547, 10);
SaveVariable("SAVMAN_SAVED_CURRENT_WEAPON", 557, 1);
SaveVariable("NEWS_REPORTS", 558, 19);
SaveVariable("NEWS_RADIO_STATUS", 577, 1);
SaveVariable("AMBAUD_SFX_PLAYING", 578, 1);
SaveVariable("AMMUNAT_SHOPPING", 579, 1);
SaveVariable("AMMUNAT_DEAL_STATE", 580, 1);
SaveVariable("AMMUNAT_SPHERE", 581, 1);
SaveVariable("AMMUNAT_WEAPON_AVAILABILITY", 582, 6);
SaveVariable("AMMUNAT_WEAPON_TYPE", 588, 6);
SaveVariable("AMMUNAT_WEAPON_MODEL", 594, 6);
SaveVariable("AMMUNAT_WEAP_POS_X", 600, 6);
SaveVariable("AMMUNAT_WEAP_POS_Y", 606, 6);
SaveVariable("AMMUNAT_WEAP_POS_Z", 612, 6);
SaveVariable("AMMUNAT_WEAP_ROT_X", 618, 6);
SaveVariable("AMMUNAT_WEAP_ROT_Y", 624, 6);
SaveVariable("AMMUNAT_WEAP_ROT_Z", 630, 6);
SaveVariable("AMMUNAT_CAM_POS_X", 636, 6);
SaveVariable("AMMUNAT_CAM_POS_Y", 642, 6);
SaveVariable("AMMUNAT_CAM_POS_Z", 648, 6);
SaveVariable("AMMUNAT_CAM_POINT_X", 654, 6);
SaveVariable("AMMUNAT_CAM_POINT_Y", 660, 6);
SaveVariable("AMMUNAT_CAM_POINT_Z", 666, 6);
SaveVariable("AMMUNAT_WEAPON", 672, 6);
SaveVariable("AMMUNAT_2ND_WEAPON", 678, 3);
SaveVariable("AMMUNAT_CURRENT_SHOP", 681, 1);
SaveVariable("AMMUNAT_ALL_WEAPONS_UNLOCKED", 682, 1);
SaveVariable("AMMUNAT_SHOPKPR_SPOOF_STATE", 683, 4);
SaveVariable("AMMUNAT_TIME_SHOPKPR_SPOOFED", 687, 4);
SaveVariable("AMMUNAT_EXIT_X", 691, 1);
SaveVariable("AMMUNAT_EXIT_Y", 692, 1);
SaveVariable("AMMUNAT_EXIT_Z", 693, 1);
SaveVariable("AMMUNAT_SHOP_NAME", 694, 4);
SaveVariable("AMMUNAT_GRANTS_DISCOUNT", 698, 1);
SaveVariable("AMMUNAT_MAX_ARMOUR", 699, 1);
SaveVariable("AMMUNAT_SHOPKEEPER", 700, 1);
SaveVariable("AMMUNAT_SPOOF_RECT_X", 701, 2);
SaveVariable("AMMUNAT_SPOOF_RECT_Y", 703, 2);
SaveVariable("AMMUNAT_SHOPKEEPER_POS_X", 705, 1);
SaveVariable("AMMUNAT_SHOPKEEPER_POS_Y", 706, 1);
SaveVariable("AMMUNAT_SHOPKEEPER_POS_Z", 707, 1);
SaveVariable("AMMUNAT_SPHERE_POS_X", 708, 1);
SaveVariable("AMMUNAT_SPHERE_POS_Y", 709, 1);
SaveVariable("AMMUNAT_SPHERE_POS_Z", 710, 1);
SaveVariable("AMMUNAT_SHOPKPR_MODEL", 711, 1);
SaveVariable("AMMUNAT_SHOPKEEPER_BEHAVIOUR", 712, 1);
SaveVariable("AMMUNAT_FREE_SHOPPING", 713, 1);
SaveVariable("AMMUNAT_WHO_PAYS", 714, 1);
SaveVariable("REWMON_NUM_PICKUPS", 715, 1);
SaveVariable("REWMON_PICKUP_TYPE", 716, 25);
SaveVariable("REWMON_PICKUP_PRIZE", 741, 25);
SaveVariable("REWMON_PICKUP_POS_X", 766, 25);
SaveVariable("REWMON_PICKUP_POS_Y", 791, 25);
SaveVariable("REWMON_PICKUP_POS_Z", 816, 25);
SaveVariable("REWMON_PICKUP_BITMASK", 841, 25);
SaveVariable("REWMON_PICKUP_HANDLE", 866, 25);
SaveVariable("REWMON_PICKUP_UNLOCKED", 891, 25);
SaveVariable("REWMON_UNLOCK_MESSAGE", 916, 2);
SaveVariable("REWMON_PICKUPS_CREATED", 918, 1);
SaveVariable("REWMON_HELP_TIMER", 919, 1);
SaveVariable("GATE_FORCE_FLAG", 920, 1);
SaveVariable("HJ_PLAYER_CAR", 921, 1);
SaveVariable("HJ_TWOWHEELS_TIME", 922, 1);
SaveVariable("HJ_TWOWHEELS_DISTANCE_FLOAT", 923, 1);
SaveVariable("HJ_WHEELIE_TIME", 924, 1);
SaveVariable("HJ_WHEELIE_DISTANCE_FLOAT", 925, 1);
SaveVariable("HJ_STOPPIE_TIME", 926, 1);
SaveVariable("HJ_STOPPIE_DISTANCE_FLOAT", 927, 1);
SaveVariable("HJ_TWOWHEELS_DISTANCE_METERS_INT", 928, 1);
SaveVariable("HJ_TWOWHEELS_DISTANCE_METERS_FLOAT", 929, 1);
SaveVariable("HJ_TEMP_FLOAT", 930, 1);
SaveVariable("HJ_TWOWHEELS_DISTANCE_METERS_REM", 931, 1);
SaveVariable("HJ_BONUS", 932, 1);
SaveVariable("HJ_TWOWHEELS_DISTANCE_FEET_FLOAT", 933, 1);
SaveVariable("HJ_TWOWHEELS_DISTANCE_FEET", 934, 1);
SaveVariable("HJ_WHEELIE_DISTANCE_METERS_INT", 935, 1);
SaveVariable("HJ_WHEELIE_DISTANCE_METERS_FLOAT", 936, 1);
SaveVariable("HJ_WHEELIE_DISTANCE_METERS_REM", 937, 1);
SaveVariable("HJ_WHEELIE_DISTANCE_FEET_FLOAT", 938, 1);
SaveVariable("HJ_WHEELIE_DISTANCE_FEET", 939, 1);
SaveVariable("HJ_STOPPIE_DISTANCE_METERS_INT", 940, 1);
SaveVariable("HJ_STOPPIE_DISTANCE_METERS_FLOAT", 941, 1);
SaveVariable("HJ_STOPPIE_DISTANCE_METERS_REM", 942, 1);
SaveVariable("HJ_STOPPIE_DISTANCE_FEET_FLOAT", 943, 1);
SaveVariable("HJ_STOPPIE_DISTANCE_FEET", 944, 1);
SaveVariable("HJ_STUNT_ROTATION_INT", 945, 1);
SaveVariable("HJ_CAR_ANGLE_BEGIN_STUNT", 946, 1);
SaveVariable("HJ_STUNT_FLIPS", 947, 1);
SaveVariable("HJ_STUNT_FLIPPING_FLAG", 948, 1);
SaveVariable("HJ_STUNT_BONUS_MULT", 949, 1);
SaveVariable("HJ_BEGIN_STUNT_FLAG", 950, 1);
SaveVariable("HJ_STUNT_HEIGHT", 951, 1);
SaveVariable("HJ_CAR_Z_MAX", 952, 1);
SaveVariable("HJ_CAR_X", 953, 1);
SaveVariable("HJ_CAR_Y", 954, 1);
SaveVariable("HJ_CAR_Z", 955, 1);
SaveVariable("HJ_CAR_X_BEGIN_STUNT", 956, 1);
SaveVariable("HJ_CAR_Y_BEGIN_STUNT", 957, 1);
SaveVariable("HJ_CAR_Z_BEGIN_STUNT", 958, 1);
SaveVariable("HJ_CAR_X_END_STUNT", 959, 1);
SaveVariable("HJ_CAR_Y_END_STUNT", 960, 1);
SaveVariable("HJ_STUNT_DISTANCE_MAX_FLOAT", 961, 1);
SaveVariable("HJ_STUNT_DISTANCE_MAX_INT", 962, 1);
SaveVariable("HJ_STUNT_DISTANCE_MAX_REM", 963, 1);
SaveVariable("HJ_STUNT_HEIGHT_REM", 964, 1);
SaveVariable("HJ_STUNT_TEMPVAR_ROTATION", 965, 1);
SaveVariable("HJ_STUNT_TEMPVAR_SECOND_ROTATION", 966, 1);
SaveVariable("HJ_STUNT_ROTATION_FLOAT", 967, 1);
SaveVariable("HJ_CAR_ANGLE", 968, 1);
SaveVariable("HJ_TIMER", 969, 1);
SaveVariable("HJ_CAR_HEALTH_BEGIN_STUNT", 970, 1);
SaveVariable("HJ_CAR_HEALTH_END_STUNT", 971, 1);
SaveVariable("HJ_PERFECT_STUNT", 972, 1);
SaveVariable("HJ_FLAMING_STUNT", 973, 1);
SaveVariable("HJ_IN_AIR_FLIPS", 974, 1);
SaveVariable("HJ_ENDING_TIMER", 975, 1);
SaveVariable("HJ_ROTATION_TIMER", 976, 1);
SaveVariable("HJ_STUNT_BONUS", 977, 1);
SaveVariable("HJ_STUNT_BONUS_TEMP", 978, 1);
SaveVariable("LANDING_STAGE", 979, 1);
SaveVariable("FREEFALL_STAGE", 980, 1);
SaveVariable("PARACHUTE_CREATION_STAGE", 981, 1);
SaveVariable("PARACHUTE_X_VELOCITY", 982, 1);
SaveVariable("PARACHUTE_Y_VELOCITY", 983, 1);
SaveVariable("PARACHUTE_Z_VELOCITY", 984, 1);
SaveVariable("PARACHUTE_MAX_REACHED_SPEED", 985, 1);
SaveVariable("PARACHUTE_BLOCK_MOVEMENT", 986, 1);
SaveVariable("PARACHUTE_MAX_SPEED", 987, 1);
SaveVariable("PARACHUTE_LOCK_OPEN", 988, 1);
SaveVariable("PARACHUTE_ROTATING_SPEED", 989, 1);
SaveVariable("PARACHUTE_FORCE_OPEN", 990, 1);
SaveVariable("PARACHUTE_SOUND_TIMER", 991, 1);
SaveVariable("PARACHUTE_LAST_CHUTE", 992, 1);
SaveVariable("TEMPVAR_X_COORD", 993, 1);
SaveVariable("TEMPVAR_Y_COORD", 994, 1);
SaveVariable("TEMPVAR_Z_COORD", 995, 1);
SaveVariable("CURRENT_TIME_IN_MS2", 996, 1);
SaveVariable("MISSION_CANCEL_TIMER", 997, 1);
SaveVariable("MISSION_CANCEL_STAGE", 998, 1);
SaveVariable("VENDING_AS_PACK", 999, 1);
SaveVariable("GAME_CHAPTER", 1000, 1);
SaveVariable("GAMHELP_CAN_SHOW_STONEWALL_HELP", 1001, 1);
SaveVariable("CLOTHES_CURR_CLOTH_ID", 1002, 1);
SaveVariable("CLOTHES_LOCKED", 1003, 15);
SaveVariable("CLOTHES_MODEL", 1018, 30);
SaveVariable("CLOTHES_NAME", 1048, 30);
SaveVariable("CLOTHES_MESSAGE", 1078, 30);
SaveVariable("MARTY_CUT_DOOR", 1108, 1);
SaveVariable("CUTS_SAVED_NEARCLIP", 1109, 1);
SaveVariable("ODDJOB_HELP_DISPLAYED", 1110, 1);
SaveVariable("ODDJOB_HELP_TIMER", 1111, 1);
SaveVariable("ODDJOB_HELP_TEXT", 1112, 2);
SaveVariable("ODDJOB_TURISMO_UNLOCKED", 1114, 1);
SaveVariable("ODDJOB_VIGILANTE_COMPLETED", 1115, 1);
SaveVariable("ODDJOB_PARAMEDIC_MISSION_LEVEL", 1116, 1);
SaveVariable("TAXI_DRIVER_MISSION_DONE", 1117, 1);
SaveVariable("TAXI_DRIVER_PASSENGERS_DROPPED_OFF", 1118, 1);
SaveVariable("TAXI_DRIVER_PASSENGERS_DROPPED_OFF_THIS_RUN", 1119, 1);
SaveVariable("TAXI_DRIVER_EARNINGS", 1120, 1);
SaveVariable("TAXI_DRIVER_TIMER", 1121, 1);
SaveVariable("TAXI_DRIVER_TIP_BAR", 1122, 1);
SaveVariable("ONMISSION_TIME_TRIAL", 1123, 1);
SaveVariable("ODDJOB_TURISMO_BEST_RESULT", 1124, 12);
SaveVariable("ODDJOB_TURISMO_BEST_TIME", 1136, 12);
SaveVariable("PCJPLAY_TOWN_COURSE_RECORD", 1148, 1);
SaveVariable("PCJPLAY_DOCK_COURSE_RECORD", 1149, 1);
SaveVariable("PCJPLAY_TOWN_COMPLETED", 1150, 1);
SaveVariable("PCJPLAY_DOCK_COMPLETED", 1151, 1);
SaveVariable("CRASH_PASSED_CRASH", 1152, 1);
SaveVariable("CRASH_PASSED_RUSH", 1153, 1);
SaveVariable("CRASH_BEST_SCORE_CRASH", 1154, 1);
SaveVariable("CRASH_BEST_SCORE_RUSH", 1155, 1);
SaveVariable("INTMAN_OBJ_INDEX", 1156, 1);
SaveVariable("INTMAN_UNTOUCHED_FURNITURE", 1157, 1);
SaveVariable("INTMAN_TOTAL_FURNITURE", 1158, 1);
SaveVariable("INTMAN_SHOPKEEPER", 1159, 1);
SaveVariable("INTMAN_SHOPKEEPER_DECISION_MAKER", 1160, 1);
SaveVariable("INTMAN_PICKUPSAVE", 1161, 1);
SaveVariable("INTMAN_CURRENT_INTERIOR", 1162, 4);
SaveVariable("INTMAN_OBJECT", 1166, 70);
SaveVariable("INTMAN_OBJ_DESTROYABLE", 1236, 70);
SaveVariable("INTMAN_OBJECT_BLIP", 1306, 70);
SaveVariable("INTMAN_PED", 1376, 10);
SaveVariable("INTMAN_PED_TYPEID", 1386, 10);
SaveVariable("INTMAN_PED_SPOOKED", 1396, 10);
SaveVariable("INTMAN_OBJECTS_SET", 1406, 6);
SaveVariable("INTMAN_OBJECT_TYPEID", 1412, 32);
SaveVariable("INTMAN_OBJECT_TYPE", 1444, 32);
SaveVariable("INTMAN_OBJECT_MODEL", 1476, 32);
SaveVariable("INTMAN_OBJECT_HEALTH", 1508, 32);
SaveVariable("SHOPMON_FURNITURE_STATE_BITMASK", 1540, 1);
SaveVariable("EMPIRE_UNLOCK_STATE", 1541, 1);
SaveVariable("EMPIRES_POS_X", 1542, 30);
SaveVariable("EMPIRES_POS_Y", 1572, 30);
SaveVariable("EMPIRES_POS_Z", 1602, 30);
SaveVariable("EMPIRES_ANGLE", 1632, 30);
SaveVariable("EMPIRES_OWNERSHIP", 1662, 30);
SaveVariable("EMPIRES_TYPE", 1692, 30);
SaveVariable("EMPIRES_SCALE", 1722, 30);
SaveVariable("EMPIRES_CONDITION", 1752, 30);
SaveVariable("EMPIRES_STATE", 1782, 30);
SaveVariable("EMPIRES_ATTACK_STARTPOINT_X", 1812, 30);
SaveVariable("EMPIRES_ATTACK_STARTPOINT_Y", 1842, 30);
SaveVariable("EMPIRES_ATTACK_STARTPOINT_Z", 1872, 30);
SaveVariable("EMPIRES_RADIUS", 1902, 30);
SaveVariable("EMPIRES_FURNITURE_SET", 1932, 30);
SaveVariable("EMPIRES_FURNITURE_BITMASK", 1962, 30);
SaveVariable("EMPIRES_PED_DENSITY", 1992, 30);
SaveVariable("EMPIRES_BUILD_TIMER", 2022, 30);
SaveVariable("EMPIRES_ACTIVE_ID", 2052, 1);
SaveVariable("EMPIRES_ACTIVE_POS_X", 2053, 1);
SaveVariable("EMPIRES_ACTIVE_POS_Y", 2054, 1);
SaveVariable("EMPIRES_ACTIVE_POS_Z", 2055, 1);
SaveVariable("EMPIRES_ACTIVE_ANGLE", 2056, 1);
SaveVariable("EMPIRES_ACTIVE_OWNERSHIP", 2057, 1);
SaveVariable("EMPIRES_ACTIVE_TYPE", 2058, 1);
SaveVariable("EMPIRES_ACTIVE_SCALE", 2059, 1);
SaveVariable("EMPIRES_ACTIVE_CONDITION", 2060, 1);
SaveVariable("EMPIRES_ACTIVE_STATE", 2061, 1);
SaveVariable("EMPIRES_ACTIVE_ATTACK_STARTPOINT_X", 2062, 1);
SaveVariable("EMPIRES_ACTIVE_ATTACK_STARTPOINT_Y", 2063, 1);
SaveVariable("EMPIRES_ACTIVE_ATTACK_STARTPOINT_Z", 2064, 1);
SaveVariable("EMPIRES_ACTIVE_PED_MODEL", 2065, 2);
SaveVariable("EMPIRES_ASSET_PLAYER_ATTACKS", 2067, 1);
SaveVariable("EMPIRES_DEFENDING_PED", 2068, 10);
SaveVariable("EMPIRES_DEFENDING_PED_BLIP", 2078, 10);
SaveVariable("EMPIRES_ENTRANCE_MARKER", 2088, 1);
SaveVariable("EMPIRES_FORSALE", 2089, 1);
SaveVariable("EMPIRES_VEHICLE", 2090, 1);
SaveVariable("EMPIRES_VEHICLE_BLIP", 2091, 1);
SaveVariable("EMPIRES_WEAPON", 2092, 1);
SaveVariable("EMPIRES_EVENT", 2093, 1);
SaveVariable("EMPIRES_ATTACKED_EMPIRE", 2094, 1);
SaveVariable("EMPIRES_NUM_VANCE_OWNED", 2095, 1);
SaveVariable("SAFEHOU_NUM_SAFEHOUSES", 2096, 1);
SaveVariable("SAFEHOU_CURRENT_SAFEHOUSE", 2097, 1);
SaveVariable("SAFEHOU_INSIDE_NOW", 2098, 1);
SaveVariable("SAFEHOU_99RED_REWARDS_SPAWNED", 2099, 1);
SaveVariable("SAFEHOU_CURRENT_PICKUPSAVE_X", 2100, 1);
SaveVariable("SAFEHOU_CURRENT_PICKUPSAVE_Y", 2101, 1);
SaveVariable("SAFEHOU_CURRENT_PICKUPSAVE_Z", 2102, 1);
SaveVariable("SAFEHOU_CURRENT_PICKUPSAVE_ANGLE", 2103, 1);
SaveVariable("SAFEHOU_SPAWNED_STUFF", 2104, 4);
SaveVariable("SAFEHOU_UNLOCKED", 2108, 4);
SaveVariable("SAFEHOU_NAME", 2112, 16);
SaveVariable("SAFEHOU_INTERIOR_MODEL", 2128, 4);
SaveVariable("SAFEHOU_PICKUPSAVE_X", 2132, 4);
SaveVariable("SAFEHOU_PICKUPSAVE_Y", 2136, 4);
SaveVariable("SAFEHOU_PICKUPSAVE_Z", 2140, 4);
SaveVariable("SAFEHOU_PICKUPSAVE_ANGLE", 2144, 4);
SaveVariable("SAFEHOU_CLOTH_X", 2148, 4);
SaveVariable("SAFEHOU_CLOTH_Y", 2152, 4);
SaveVariable("SAFEHOU_CLOTH_Z", 2156, 4);
SaveVariable("SAFEHOU_CLOTH_ANGLE", 2160, 4);
SaveVariable("SAFEHOU_CLOTHES_PICKUP", 2164, 1);
SaveVariable("SAFEHOU_HEALTH_X", 2165, 4);
SaveVariable("SAFEHOU_HEALTH_Y", 2169, 4);
SaveVariable("SAFEHOU_HEALTH_Z", 2173, 4);
SaveVariable("SAFEHOU_HEALTH_PICKUP", 2177, 1);
SaveVariable("SAFEHOU_BERETTA_X", 2178, 4);
SaveVariable("SAFEHOU_BERETTA_Y", 2182, 4);
SaveVariable("SAFEHOU_BERETTA_Z", 2186, 4);
SaveVariable("SAFEHOU_BERETTA_PICKUP", 2190, 1);
SaveVariable("SAFEHOU_BERETTA_PICKUP_TIMER", 2191, 1);
SaveVariable("SAFEHOU_99RED_REWARDS", 2192, 10);
SaveVariable("BLIPS_PNS_BLIP_X", 2202, 4);
SaveVariable("BLIPS_PNS_BLIP_Y", 2206, 4);
SaveVariable("BLIPS_PNS_BLIP_Z", 2210, 4);
SaveVariable("BLIPS_PNS_BLIP", 2214, 4);
SaveVariable("BLIPS_AMMUNATION_BLIP_X", 2218, 4);
SaveVariable("BLIPS_AMMUNATION_BLIP_Y", 2222, 4);
SaveVariable("BLIPS_AMMUNATION_BLIP_Z", 2226, 4);
SaveVariable("BLIPS_AMMUNATION_BLIP", 2230, 4);
SaveVariable("BLIPS_BOMB_BLIP_X", 2234, 1);
SaveVariable("BLIPS_BOMB_BLIP_Y", 2235, 1);
SaveVariable("BLIPS_BOMB_BLIP_Z", 2236, 1);
SaveVariable("BLIPS_BOMB_BLIP", 2237, 1);
SaveVariable("BLIPS_SAFEHOUSE_BLIP_X", 2238, 4);
SaveVariable("BLIPS_SAFEHOUSE_BLIP_Y", 2242, 4);
SaveVariable("BLIPS_SAFEHOUSE_BLIP_Z", 2246, 4);
SaveVariable("BLIPS_SAFEHOUSE_BLIP", 2250, 4);
SaveVariable("CURRENT_CONTACT", 2254, 1);
SaveVariable("CURRENT_CHAPTER", 2255, 1);
SaveVariable("GAME_READY_FOR_STORYSC", 2256, 1);
SaveVariable("UPDATING_MISSION_STATUS", 2257, 1);
SaveVariable("NEXT_MISSION_FOR_CONTRACT", 2258, 12);
SaveVariable("ALL_MISSIONS_FOR_CONTRACT_DONE", 2270, 12);
SaveVariable("TOTAL_MISSIONS_FOR_CONTRACT", 2282, 12);
SaveVariable("MISSION_STARTER_PLACED", 2294, 12);
SaveVariable("MISSION_STARTER_POS_X", 2306, 12);
SaveVariable("MISSION_STARTER_POS_Y", 2318, 12);
SaveVariable("MISSION_STARTER_POS_Z", 2330, 12);
SaveVariable("MISSION_STATUS", 2342, 100);
SaveVariable("PAGER_ACTIVE", 2442, 1);
SaveVariable("PAGER_MESSAGE_SHOWN", 2443, 39);
SaveVariable("USJ_JUMPING_NOW", 2482, 1);
SaveVariable("USJ_JUMP_COMPLETE", 2483, 36);
SaveVariable("METALDE_CURRENT_GATE", 2519, 1);
SaveVariable("METALDE_IGNORED_GATE", 2520, 1);
SaveVariable("METALDE_LOAD_STAGE", 2521, 1);
SaveVariable("METALDE_GATE_X", 2522, 1);
SaveVariable("METALDE_GATE_Y", 2523, 1);
SaveVariable("METALDE_GATE_Z", 2524, 1);
SaveVariable("METALDE_GUARD", 2525, 2);
SaveVariable("METALDE_WEAPON_X", 2527, 1);
SaveVariable("METALDE_WEAPON_Y", 2528, 1);
SaveVariable("METALDE_WEAPON_Z", 2529, 1);
SaveVariable("METALDE_WEAPON_ANGLE", 2530, 1);
SaveVariable("METALDE_WEAPON", 2531, 10);
SaveVariable("RCFUN_STARTER_VEHICLE", 2541, 3);
SaveVariable("TIME_TRIAL_COURSE_TARGET", 2544, 12);
SaveVariable("TIME_TRIAL_MISSION_STAGE", 2556, 1);
SaveVariable("TIME_TRIAL_SELECTED_COURSE", 2557, 1);
SaveVariable("TIME_TRIAL_MODEL_TO_RACE", 2558, 1);
SaveVariable("TIME_TRIAL_TIME_TO_BEAT", 2559, 1);
SaveVariable("TIME_TRIAL_NUM_CHECKPOINTS", 2560, 1);
SaveVariable("TIME_TRIAL_CHECKPOINT_RADIUS", 2561, 1);
SaveVariable("TIME_TRIAL_CHECKPOINT_POS_X", 2562, 22);
SaveVariable("TIME_TRIAL_CHECKPOINT_POS_Y", 2584, 22);
SaveVariable("TIME_TRIAL_CHECKPOINT_POS_Z", 2606, 22);
SaveVariable("TIME_TRIAL_STARTING_POINT_X", 2628, 1);
SaveVariable("TIME_TRIAL_STARTING_POINT_Y", 2629, 1);
SaveVariable("TIME_TRIAL_STARTING_POINT_Z", 2630, 1);
SaveVariable("TIME_TRIAL_COURSE_BOUND_X1", 2631, 1);
SaveVariable("TIME_TRIAL_COURSE_BOUND_X2", 2632, 1);
SaveVariable("TIME_TRIAL_COURSE_BOUND_Y1", 2633, 1);
SaveVariable("TIME_TRIAL_COURSE_BOUND_Y2", 2634, 1);
SaveVariable("TIME_TRIAL_TIMER", 2635, 1);
SaveVariable("TIME_TRIAL_LAP", 2636, 1);
SaveVariable("TIME_TRIAL_TOTAL_LAPS", 2637, 1);
SaveVariable("TIME_TRIAL_SHOULD_DISPLAY_SHIT", 2638, 1);
SaveVariable("TIME_TRIAL_SHOULD_DISPLAY_CHECKPOINTS", 2639, 1);
SaveVariable("TIME_TRIAL_EDITOR_MODE_CHECKPOINTS", 2640, 1);
SaveVariable("TIME_TRIAL_EDITOR_BEST_LAP_TIME", 2641, 1);
SaveVariable("TIME_TRIAL_IN_EDITOR_MODE", 2642, 1);
SaveVariable("BTRIAL_BLIP", 2643, 1);
SaveVariable("BTRIAL_NEXT_BLIP", 2644, 1);
SaveVariable("BTRIAL_NOT_IN_CAR_FLAG", 2645, 1);
SaveVariable("BTRIAL_VEHICLE", 2646, 1);
SaveVariable("BTRIAL_SPAWNED_VEHICLE", 2647, 1);
SaveVariable("BTRIAL_VEHICLE_MARKER", 2648, 1);
SaveVariable("BTRIAL_NOT_IN_CAR_TIMER", 2649, 1);
SaveVariable("BTRIAL_BEST_TIME", 2650, 8);
SaveVariable("BTRIAL_BEST_LAP_TIME", 2658, 8);
SaveVariable("BTRIAL_COURSE_COMPLETED", 2666, 8);
SaveVariable("BTRIAL_COURSE_UNLOCKED", 2674, 8);
SaveVariable("BTRIAL_IN_AIR", 2682, 1);
SaveVariable("BTRIAL_TEMP_BEST_TIME", 2683, 1);
SaveVariable("BTRIAL_LAP_TIME_MINUTES", 2684, 1);
SaveVariable("BTRIAL_LAP_TIME_SECONDS", 2685, 1);
SaveVariable("BTRIAL_COURSE_TARGET_MINUTES", 2686, 1);
SaveVariable("BTRIAL_COURSE_TARGET_SECONDS", 2687, 1);
SaveVariable("BTRIAL_COURSE_RECORD_MINUTES", 2688, 1);
SaveVariable("BTRIAL_COURSE_RECORD_SECONDS", 2689, 1);
SaveVariable("BTRIAL_BEST_TIME_MINUTES", 2690, 1);
SaveVariable("BTRIAL_BEST_TIME_SECONDS", 2691, 1);
SaveVariable("BTRIAL_BEST_LAP_TIME_MINUTES", 2692, 1);
SaveVariable("BTRIAL_BEST_LAP_TIME_SECONDS", 2693, 1);
SaveVariable("BTRIAL_FURTHEST_DISTANCE", 2694, 1);
SaveVariable("BTRIAL_GROUND_Z", 2695, 1);
SaveVariable("BTRIAL_DISTANCE_FROM_GROUND", 2696, 1);
SaveVariable("BTRIAL_AIR_TO_DISPLAY", 2697, 1);
SaveVariable("BTRIAL_FURTHEST_JUMP_EVER", 2698, 1);
SaveVariable("BTRIAL_COURSE_RECORD_BEATEN", 2699, 1);
SaveVariable("BTRIAL_TEMP_TIME", 2700, 1);
SaveVariable("BTRIAL_TEMP_TIME_2", 2701, 1);
SaveVariable("BTRIAL_TEMP_TIME_3", 2702, 1);
SaveVariable("BTRIAL_TEMP_TIME_4", 2703, 1);
SaveVariable("BTRIAL_VALUE_FOR_STATS", 2704, 1);
SaveVariable("BTRIAL_ALL_COURSES_COMPLETED", 2705, 1);
SaveVariable("QTTRIAL_BLIP", 2706, 1);
SaveVariable("QTTRIAL_NEXT_BLIP", 2707, 1);
SaveVariable("QTTRIAL_NOT_IN_CAR_FLAG", 2708, 1);
SaveVariable("QTTRIAL_VEHICLE", 2709, 1);
SaveVariable("QTTRIAL_SPAWNED_VEHICLE", 2710, 1);
SaveVariable("QTTRIAL_VEHICLE_MARKER", 2711, 1);
SaveVariable("QTTRIAL_NOT_IN_CAR_TIMER", 2712, 1);
SaveVariable("QTTRIAL_BEST_TIME", 2713, 6);
SaveVariable("QTTRIAL_BEST_LAP_TIME", 2719, 6);
SaveVariable("QTTRIAL_COURSE_COMPLETED", 2725, 6);
SaveVariable("QTTRIAL_COURSE_UNLOCKED", 2731, 6);
SaveVariable("QTTRIAL_IN_AIR", 2737, 1);
SaveVariable("QTTRIAL_TEMP_BEST_TIME", 2738, 1);
SaveVariable("QTTRIAL_LAP_TIME_MINUTES", 2739, 1);
SaveVariable("QTTRIAL_LAP_TIME_SECONDS", 2740, 1);
SaveVariable("QTTRIAL_COURSE_TARGET_MINUTES", 2741, 1);
SaveVariable("QTTRIAL_COURSE_TARGET_SECONDS", 2742, 1);
SaveVariable("QTTRIAL_COURSE_RECORD_MINUTES", 2743, 1);
SaveVariable("QTTRIAL_COURSE_RECORD_SECONDS", 2744, 1);
SaveVariable("QTTRIAL_BEST_TIME_MINUTES", 2745, 1);
SaveVariable("QTTRIAL_BEST_TIME_SECONDS", 2746, 1);
SaveVariable("QTTRIAL_BEST_LAP_TIME_MINUTES", 2747, 1);
SaveVariable("QTTRIAL_BEST_LAP_TIME_SECONDS", 2748, 1);
SaveVariable("QTTRIAL_FURTHEST_DISTANCE", 2749, 1);
SaveVariable("QTTRIAL_GROUND_Z", 2750, 1);
SaveVariable("QTTRIAL_DISTANCE_FROM_GROUND", 2751, 1);
SaveVariable("QTTRIAL_AIR_TO_DISPLAY", 2752, 1);
SaveVariable("QTTRIAL_FURTHEST_JUMP_EVER", 2753, 1);
SaveVariable("QTTRIAL_COURSE_RECORD_BEATEN", 2754, 1);
SaveVariable("QTTRIAL_TEMP_TIME", 2755, 1);
SaveVariable("QTTRIAL_TEMP_TIME_2", 2756, 1);
SaveVariable("QTTRIAL_TEMP_TIME_3", 2757, 1);
SaveVariable("QTTRIAL_TEMP_TIME_4", 2758, 1);
SaveVariable("QTTRIAL_VALUE_FOR_STATS", 2759, 1);
SaveVariable("QTTRIAL_ALL_COURSES_COMPLETED", 2760, 1);
SaveVariable("DTRIAL_BLIP", 2761, 1);
SaveVariable("DTRIAL_NEXT_BLIP", 2762, 1);
SaveVariable("DTRIAL_NOT_IN_CAR_FLAG", 2763, 1);
SaveVariable("DTRIAL_VEHICLE", 2764, 1);
SaveVariable("DTRIAL_SPAWNED_VEHICLE", 2765, 1);
SaveVariable("DTRIAL_VEHICLE_MARKER", 2766, 1);
SaveVariable("DTRIAL_NOT_IN_CAR_TIMER", 2767, 1);
SaveVariable("DTRIAL_BEST_TIME", 2768, 12);
SaveVariable("DTRIAL_BEST_LAP_TIME", 2780, 12);
SaveVariable("DTRIAL_COURSE_COMPLETED", 2792, 12);
SaveVariable("DTRIAL_COURSE_UNLOCKED", 2804, 12);
SaveVariable("DTRIAL_IN_AIR", 2816, 1);
SaveVariable("DTRIAL_TEMP_BEST_TIME", 2817, 1);
SaveVariable("DTRIAL_LAP_TIME_MINUTES", 2818, 1);
SaveVariable("DTRIAL_LAP_TIME_SECONDS", 2819, 1);
SaveVariable("DTRIAL_COURSE_TARGET_MINUTES", 2820, 1);
SaveVariable("DTRIAL_COURSE_TARGET_SECONDS", 2821, 1);
SaveVariable("DTRIAL_COURSE_RECORD_MINUTES", 2822, 1);
SaveVariable("DTRIAL_COURSE_RECORD_SECONDS", 2823, 1);
SaveVariable("DTRIAL_BEST_TIME_MINUTES", 2824, 1);
SaveVariable("DTRIAL_BEST_TIME_SECONDS", 2825, 1);
SaveVariable("DTRIAL_BEST_LAP_TIME_MINUTES", 2826, 1);
SaveVariable("DTRIAL_BEST_LAP_TIME_SECONDS", 2827, 1);
SaveVariable("DTRIAL_FURTHEST_DISTANCE", 2828, 1);
SaveVariable("DTRIAL_GROUND_Z", 2829, 1);
SaveVariable("DTRIAL_DISTANCE_FROM_GROUND", 2830, 1);
SaveVariable("DTRIAL_AIR_TO_DISPLAY", 2831, 1);
SaveVariable("DTRIAL_FURTHEST_JUMP_EVER", 2832, 1);
SaveVariable("DTRIAL_COURSE_RECORD_BEATEN", 2833, 1);
SaveVariable("DTRIAL_TEMP_TIME", 2834, 1);
SaveVariable("DTRIAL_TEMP_TIME_2", 2835, 1);
SaveVariable("DTRIAL_TEMP_TIME_3", 2836, 1);
SaveVariable("DTRIAL_TEMP_TIME_4", 2837, 1);
SaveVariable("DTRIAL_VALUE_FOR_STATS", 2838, 1);
SaveVariable("DTRIAL_ALL_COURSES_COMPLETED", 2839, 1);
SaveVariable("MTRIAL_BLIP", 2840, 1);
SaveVariable("MTRIAL_NEXT_BLIP", 2841, 1);
SaveVariable("MTRIAL_NOT_IN_CAR_FLAG", 2842, 1);
SaveVariable("MTRIAL_VEHICLE", 2843, 1);
SaveVariable("MTRIAL_SPAWNED_VEHICLE", 2844, 1);
SaveVariable("MTRIAL_VEHICLE_MARKER", 2845, 1);
SaveVariable("MTRIAL_NOT_IN_CAR_TIMER", 2846, 1);
SaveVariable("MTRIAL_BEST_TIME", 2847, 6);
SaveVariable("MTRIAL_BEST_LAP_TIME", 2853, 6);
SaveVariable("MTRIAL_COURSE_COMPLETED", 2859, 6);
SaveVariable("MTRIAL_COURSE_UNLOCKED", 2865, 6);
SaveVariable("MTRIAL_IN_AIR", 2871, 1);
SaveVariable("MTRIAL_TEMP_BEST_TIME", 2872, 1);
SaveVariable("MTRIAL_LAP_TIME_MINUTES", 2873, 1);
SaveVariable("MTRIAL_LAP_TIME_SECONDS", 2874, 1);
SaveVariable("MTRIAL_COURSE_TARGET_MINUTES", 2875, 1);
SaveVariable("MTRIAL_COURSE_TARGET_SECONDS", 2876, 1);
SaveVariable("MTRIAL_COURSE_RECORD_MINUTES", 2877, 1);
SaveVariable("MTRIAL_COURSE_RECORD_SECONDS", 2878, 1);
SaveVariable("MTRIAL_BEST_TIME_MINUTES", 2879, 1);
SaveVariable("MTRIAL_BEST_TIME_SECONDS", 2880, 1);
SaveVariable("MTRIAL_BEST_LAP_TIME_MINUTES", 2881, 1);
SaveVariable("MTRIAL_BEST_LAP_TIME_SECONDS", 2882, 1);
SaveVariable("MTRIAL_FURTHEST_DISTANCE", 2883, 1);
SaveVariable("MTRIAL_GROUND_Z", 2884, 1);
SaveVariable("MTRIAL_DISTANCE_FROM_GROUND", 2885, 1);
SaveVariable("MTRIAL_AIR_TO_DISPLAY", 2886, 1);
SaveVariable("MTRIAL_FURTHEST_JUMP_EVER", 2887, 1);
SaveVariable("MTRIAL_COURSE_RECORD_BEATEN", 2888, 1);
SaveVariable("MTRIAL_TEMP_TIME", 2889, 1);
SaveVariable("MTRIAL_TEMP_TIME_2", 2890, 1);
SaveVariable("MTRIAL_TEMP_TIME_3", 2891, 1);
SaveVariable("MTRIAL_TEMP_TIME_4", 2892, 1);
SaveVariable("MTRIAL_VALUE_FOR_STATS", 2893, 1);
SaveVariable("MTRIAL_ALL_COURSES_COMPLETED", 2894, 1);
SaveVariable("PHI_A3_BARRACKS_HEALTH", 2895, 1);
SaveVariable("PHI_A4_WALTONS_HEALTH", 2896, 1);
#define HIGHEST_VAR_USED 2896