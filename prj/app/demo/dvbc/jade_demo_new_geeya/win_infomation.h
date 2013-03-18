/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_INFOMATION_H__A127AE24_507E_4DA6_A9BC_3902597BB587
#define __WIN_INFOMATION_H__A127AE24_507E_4DA6_A9BC_3902597BB587


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern TEXT_FIELD gwf_nit_value;
extern CONTAINER g_win_information;

//g_win_information ------------------------------------------------------------------------
static VACTION g_win_infomation_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT g_win_infomation_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_information = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 100, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {155, 147, 398, 154},
		.style = {
			.bShowIdx = WSTL_WIN_1, .bHLIdx = WSTL_WIN_1, .bSelIdx = WSTL_WIN_1, .bGrayIdx = WSTL_WIN_1
		},
		.pfnKeyMap = g_win_infomation_keymap, .pfnCallback = g_win_infomation_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&gwf_nit_value,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//gwf_nit_value ------------------------------------------------------------------------

TEXT_FIELD gwf_nit_value = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {202, 213, 337, 38},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_6, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_information
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_INFO_SEARCH,
	.pString = NULL
};
#endif//__WIN_INFOMATION_H__A127AE24_507E_4DA6_A9BC_3902597BB587