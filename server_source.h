#ifndef __INC_METIN2_COMMON_DEFINES_H__
#define __INC_METIN2_COMMON_DEFINES_H__
#pragma once

	enum eCommonDefines {
		MAP_ALLOW_LIMIT = 32,
	};

	/*** YMIR ***/
	#define _IMPROVED_PACKET_ENCRYPTION_
	#define __PET_SYSTEM__
	#define __UDP_BLOCK__

	/*** YMIR - System ***/
	#define ENABLE_ACCE_COSTUME_SYSTEM
	#define ENABLE_GLOVE_SYSTEM
	#define ENABLE_MOUNT_COSTUME_SYSTEM
	#define ENABLE_MOVE_CHANNEL
	#define ENABLE_PENDANT_SYSTEM
	#define ENABLE_QUIVER_SYSTEM
	#define ENABLE_WEAPON_COSTUME_SYSTEM

	/*** N2 Features ***/
	#define ENABLE_BELT_INVENTORY_EX
	#define ENABLE_CHANNEL_STATUS_CACHE
	#define ENABLE_MESSENGER_REMOVE_SYNC
	#define ENABLE_CHECK_SELL_PRICE
	#define ENABLE_CMD_WARP_IN_DUNGEON
	#define ENABLE_D_NJGUILD
	#define ENABLE_DICE_SYSTEM
	#define ENABLE_EXTEND_INVEN_SYSTEM
	#define ENABLE_FULL_NOTICE
	#define ENABLE_GOTO_LAG_FIX
	#define ENABLE_ITEM_ATTR_COSTUME
	#define ENABLE_IGNORE_LOWER_BUFFS
	#define ENABLE_KILL_EVENT_FIX
	#define ENABLE_MOUNT_COSTUME_EX_SYSTEM
	#define ENABLE_NEWSTUFF
	#define ENABLE_PET_SYSTEM_EX
	#define ENABLE_PLAYER_PER_ACCOUNT5
	#define ENABLE_PORT_SECURITY
	#define ENABLE_QUEST_BOOT_EVENT
	#define ENABLE_QUEST_DIE_EVENT
	#define ENABLE_QUEST_DND_EVENT
	#define ENABLE_SKILL_FLAG_PARTY
	#define DISABLE_STOP_RIDING_WHEN_DIE

	/*** N2 - Dragonsoul ***/
	#define ENABLE_DSS_GRADE_MYTH
	#define ENABLE_NO_DSS_QUALIFICATION

	#define ENABLE_EXTEND_ITEM_AWARD
	#ifdef ENABLE_EXTEND_ITEM_AWARD
		// #define USE_ITEM_AWARD_CHECK_ATTRIBUTES
	#endif

	/*** N2 - System ***/
	#define ENABLE_SAFEBOX_MONEY
	#define ENABLE_NEW_DROP_DIALOG
	#define ENABLE_PICKUP_ITEM_EFFECT
	#define ENABLE_SWAP_ITEM_SYSTEM
	#define ENABLE_PLAYER_PIN_SYSTEM
	#define ENABLE_HIDE_COSTUME_SYSTEM
	#define ENABLE_VIEW_TARGET_DECIMAL_HP
	#define ENABLE_SPECIAL_INVENTORY_SYSTEM
	#define ENABLE_CHATTING_WINDOW_RENEWAL
#endif