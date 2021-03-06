/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_MANUAL_SEARCH_VEGA_H__363DFB91_202F_47E3_B1CA_74F1A3621E7A
#define __WIN_MANUAL_SEARCH_VEGA_H__363DFB91_202F_47E3_B1CA_74F1A3621E7A


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern CONTAINER main_search_con_item2;
extern CONTAINER g_win_manual_search;
extern EDIT_FIELD txt_ms_item_value2;
extern TEXT_FIELD txt_ms_item_name3;
extern TEXT_FIELD txt_ms_item_name1;
extern CONTAINER main_search_con_item5;
extern TEXT_FIELD search_set_txt;
extern CONTAINER manual_search_con_items;
extern MULTISEL txt_ms_item_value1;
extern TEXT_FIELD txt_ms_item_name5;
extern TEXT_FIELD txt_ms_item_name4;
extern MULTISEL txt_ms_item_value5;
extern CONTAINER main_search_con_item3;
extern TEXT_FIELD txt_ms_item_name2;
extern CONTAINER main_search_con_item1;
extern EDIT_FIELD txt_ms_item_value3;
extern MULTISEL txt_ms_item_value4;
extern CONTAINER main_search_con_item4;

//g_win_manual_search ------------------------------------------------------------------------
static VACTION win_manual_search_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT win_main_search_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_manual_search = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {292, 92, 377, 315},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = win_manual_search_keymap, .pfnCallback = win_main_search_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&manual_search_con_items,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//manual_search_con_items ------------------------------------------------------------------------
static VACTION con_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT con_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER manual_search_con_items = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {293, 100, 374, 297},
		.style = {
			.bShowIdx = WSTL_RCI_COM_MENU_BG, .bHLIdx = WSTL_RCI_COM_MENU_BG, .bSelIdx = WSTL_RCI_COM_MENU_BG, .bGrayIdx = WSTL_RCI_COM_MENU_BG
		},
		.pfnKeyMap = con_keymap, .pfnCallback = con_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_manual_search
	},
	.pNextInCntn = (POBJECT_HEAD)&main_search_con_item1,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//main_search_con_item1 ------------------------------------------------------------------------

CONTAINER main_search_con_item1 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 5, .bDownID = 2,
		.frame = {306, 156, 343, 30},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&main_search_con_item2, .pRoot = (POBJECT_HEAD)&manual_search_con_items
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_ms_item_name1,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//txt_ms_item_name1 ------------------------------------------------------------------------

TEXT_FIELD txt_ms_item_name1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {314, 156, 150, 30},
		.style = {
			.bShowIdx = WSTL_RCI_COM_SEL_NAME_BG, .bHLIdx = WSTL_RCI_COM_SEL_NAME_BG, .bSelIdx = WSTL_RCI_COM_SEL_NAME_BG, .bGrayIdx = WSTL_RCI_COM_SEL_NAME_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_ms_item_value1, .pRoot = (POBJECT_HEAD)&main_search_con_item1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SEARCH_MODE,
	.pString = NULL
};

//txt_ms_item_value1 ------------------------------------------------------------------------
static VACTION main_search_item_sel_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT main_search_item_sel_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

static UINT16 txt_ms_item_value1_seltable[] = {
	RS_INSTALLATION_AUTO_SEARCH,
	RS_MANUAL_SEARCH,
	RS_FULL_BAND_SEARCH,
};
MULTISEL txt_ms_item_value1 = {
	.head = {
		.bType = OT_MULTISEL,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 1, .bDownID = 1,
		.frame = {460, 156, 179, 29},
		.style = {
			.bShowIdx = WSTL_COM_SEL_BG, .bHLIdx = WSTL_COM_SEL_ARROW, .bSelIdx = WSTL_COM_SEL_BG, .bGrayIdx = WSTL_COM_SEL_BG
		},
		.pfnKeyMap = main_search_item_sel_keymap, .pfnCallback = main_search_item_sel_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&main_search_con_item1
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.bSelType = STRING_ID,
	.pSelTable = txt_ms_item_value1_seltable,
	.nCount = 3,
	.nSel = 0,
};

//main_search_con_item2 ------------------------------------------------------------------------

CONTAINER main_search_con_item2 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 2, .bRightID = 2, .bUpID = 1, .bDownID = 3,
		.frame = {306, 198, 343, 30},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&main_search_con_item3, .pRoot = (POBJECT_HEAD)&manual_search_con_items
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_ms_item_name2,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//txt_ms_item_name2 ------------------------------------------------------------------------

TEXT_FIELD txt_ms_item_name2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {314, 197, 150, 30},
		.style = {
			.bShowIdx = WSTL_RCI_COM_SEL_NAME_BG, .bHLIdx = WSTL_RCI_COM_SEL_NAME_BG, .bSelIdx = WSTL_RCI_COM_SEL_NAME_BG, .bGrayIdx = WSTL_RCI_COM_SEL_NAME_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_ms_item_value2, .pRoot = (POBJECT_HEAD)&main_search_con_item2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_FREQUENCY,
	.pString = NULL
};

//txt_ms_item_value2 ------------------------------------------------------------------------
static VACTION main_search_item_edit_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT main_search_item_sel_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

static char txt_ms_item_value2_pattern[] = "f32";
static const UINT8 txt_ms_item_value2_Suffix[] = {0, 77, 0, 72, 0, 122, 0, 0}; //Suffix = MHz
EDIT_FIELD txt_ms_item_value2 = {
	.head = {
		.bType = OT_EDITFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 1, .bDownID = 1,
		.frame = {460, 197, 179, 29},
		.style = {
			.bShowIdx = WSTL_COM_SEL_BG, .bHLIdx = WSTL_RCI_COM_SEL_SEL, .bSelIdx = WSTL_COM_SEL_BG, .bGrayIdx = WSTL_COM_SEL_BG
		},
		.pfnKeyMap = main_search_item_edit_keymap, .pfnCallback = main_search_item_sel_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&main_search_con_item2
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.bMaxLen = 10,
	.pcsPattern = txt_ms_item_value2_pattern,
	.bStyle = NORMAL_EDIT_MODE,
	.bCursorMode = CURSOR_NORMAL, .bCursor = 0,
	.pString = display_strs[20],
	.pPrefix = (UINT16*)NULL, .pSuffix = (UINT16*)txt_ms_item_value2_Suffix,
	.valbak = 0
};

//main_search_con_item3 ------------------------------------------------------------------------

CONTAINER main_search_con_item3 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 3, .bLeftID = 3, .bRightID = 3, .bUpID = 2, .bDownID = 4,
		.frame = {306, 240, 343, 32},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&main_search_con_item4, .pRoot = (POBJECT_HEAD)&manual_search_con_items
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_ms_item_name3,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//txt_ms_item_name3 ------------------------------------------------------------------------

TEXT_FIELD txt_ms_item_name3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {314, 239, 150, 30},
		.style = {
			.bShowIdx = WSTL_RCI_COM_SEL_NAME_BG, .bHLIdx = WSTL_RCI_COM_SEL_NAME_BG, .bSelIdx = WSTL_RCI_COM_SEL_NAME_BG, .bGrayIdx = WSTL_RCI_COM_SEL_NAME_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_ms_item_value3, .pRoot = (POBJECT_HEAD)&main_search_con_item3
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SEARCH_COD_SYMBOL,
	.pString = NULL
};

//txt_ms_item_value3 ------------------------------------------------------------------------
static VACTION main_search_item_edit_keymap(POBJECT_HEAD pObj, UINT32 key);

static char txt_ms_item_value3_pattern[] = "s5";
static const UINT8 txt_ms_item_value3_Suffix[] = {0, 75, 0, 66, 0, 97, 0, 117, 0, 100, 0, 0}; //Suffix = KBaud
EDIT_FIELD txt_ms_item_value3 = {
	.head = {
		.bType = OT_EDITFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 1, .bDownID = 1,
		.frame = {460, 239, 179, 29},
		.style = {
			.bShowIdx = WSTL_COM_SEL_BG, .bHLIdx = WSTL_RCI_COM_SEL_SEL, .bSelIdx = WSTL_COM_SEL_BG, .bGrayIdx = WSTL_COM_SEL_BG
		},
		.pfnKeyMap = main_search_item_edit_keymap, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&main_search_con_item3
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.bMaxLen = 10,
	.pcsPattern = txt_ms_item_value3_pattern,
	.bStyle = NORMAL_EDIT_MODE,
	.bCursorMode = CURSOR_NORMAL, .bCursor = 0,
	.pString = display_strs[21],
	.pPrefix = (UINT16*)NULL, .pSuffix = (UINT16*)txt_ms_item_value3_Suffix,
	.valbak = 0
};

//main_search_con_item4 ------------------------------------------------------------------------

CONTAINER main_search_con_item4 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 4, .bRightID = 4, .bUpID = 3, .bDownID = 5,
		.frame = {306, 284, 343, 30},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&main_search_con_item5, .pRoot = (POBJECT_HEAD)&manual_search_con_items
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_ms_item_name4,
	.FocusObjectID = 4,
	.bHiliteAsWhole = 2,
};

//txt_ms_item_name4 ------------------------------------------------------------------------

TEXT_FIELD txt_ms_item_name4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {314, 284, 150, 30},
		.style = {
			.bShowIdx = WSTL_RCI_COM_SEL_NAME_BG, .bHLIdx = WSTL_RCI_COM_SEL_NAME_BG, .bSelIdx = WSTL_RCI_COM_SEL_NAME_BG, .bGrayIdx = WSTL_RCI_COM_SEL_NAME_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_ms_item_value4, .pRoot = (POBJECT_HEAD)&main_search_con_item4
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SEARCH_COD_COMSEL,
	.pString = NULL
};

//txt_ms_item_value4 ------------------------------------------------------------------------
static VACTION main_search_item_sel_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT main_search_item_sel_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

static UINT16 txt_ms_item_value4_seltable[] = {
	RS_CONSTELLATION_16,
	RS_CONSTELLATION_32,
	RS_CONSTELLATION_64,
	RS_CONSTELLATION_128,
	RS_CONSTELLATION_256,
};
MULTISEL txt_ms_item_value4 = {
	.head = {
		.bType = OT_MULTISEL,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 1, .bRightID = 1, .bUpID = 1, .bDownID = 1,
		.frame = {460, 284, 179, 29},
		.style = {
			.bShowIdx = WSTL_COM_SEL_BG, .bHLIdx = WSTL_COM_SEL_ARROW, .bSelIdx = WSTL_COM_SEL_BG, .bGrayIdx = WSTL_COM_SEL_BG
		},
		.pfnKeyMap = main_search_item_sel_keymap, .pfnCallback = main_search_item_sel_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&main_search_con_item4
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.bSelType = STRING_ID,
	.pSelTable = txt_ms_item_value4_seltable,
	.nCount = 5,
	.nSel = 0,
};

//main_search_con_item5 ------------------------------------------------------------------------

CONTAINER main_search_con_item5 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 5, .bLeftID = 5, .bRightID = 5, .bUpID = 4, .bDownID = 1,
		.frame = {306, 328, 343, 30},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&search_set_txt, .pRoot = (POBJECT_HEAD)&manual_search_con_items
	},
	.pNextInCntn = (POBJECT_HEAD)&txt_ms_item_name5,
	.FocusObjectID = 5,
	.bHiliteAsWhole = 1,
};

//txt_ms_item_name5 ------------------------------------------------------------------------

TEXT_FIELD txt_ms_item_name5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {314, 327, 150, 30},
		.style = {
			.bShowIdx = WSTL_RCI_COM_SEL_NAME_BG, .bHLIdx = WSTL_RCI_COM_SEL_NAME_BG, .bSelIdx = WSTL_RCI_COM_SEL_NAME_BG, .bGrayIdx = WSTL_RCI_COM_SEL_NAME_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&txt_ms_item_value5, .pRoot = (POBJECT_HEAD)&main_search_con_item5
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_INSTALLATION_NIT_SCAN,
	.pString = NULL
};

//txt_ms_item_value5 ------------------------------------------------------------------------
static VACTION main_search_item_sel_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT main_search_item_sel_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

static UINT16 txt_ms_item_value5_seltable[] = {
	RS_COMMON_NO,
	RS_COMMON_YES,
};
MULTISEL txt_ms_item_value5 = {
	.head = {
		.bType = OT_MULTISEL,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 5, .bLeftID = 1, .bRightID = 1, .bUpID = 1, .bDownID = 1,
		.frame = {460, 327, 179, 29},
		.style = {
			.bShowIdx = WSTL_COM_SEL_BG, .bHLIdx = WSTL_COM_SEL_ARROW, .bSelIdx = WSTL_COM_SEL_BG, .bGrayIdx = WSTL_COM_SEL_BG
		},
		.pfnKeyMap = main_search_item_sel_keymap, .pfnCallback = main_search_item_sel_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&main_search_con_item5
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.bSelType = STRING_ID,
	.pSelTable = txt_ms_item_value5_seltable,
	.nCount = 2,
	.nSel = 0,
};

//search_set_txt ------------------------------------------------------------------------

TEXT_FIELD search_set_txt = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {331, 105, 107, 27},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&manual_search_con_items
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_SYSTEM_CHANNEL_SETUP,
	.pString = NULL
};
#endif//__WIN_MANUAL_SEARCH_VEGA_H__363DFB91_202F_47E3_B1CA_74F1A3621E7A
