/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_CA_STBID_LIST_H__D3B6804A_38FA_41D2_A186_0185472BC460
#define __WIN_CA_STBID_LIST_H__D3B6804A_38FA_41D2_A186_0185472BC460


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern TEXT_FIELD STBIDlst_name4;
extern CONTAINER STBIDlist_item3;
extern CONTAINER STBIDlist_item8;
extern CONTAINER STBIDlist_item4;
extern TEXT_FIELD STBIDlst_idx2;
extern CONTAINER STBIDlist_item2;
extern TEXT_FIELD STBIDlst_idx1;
extern TEXT_FIELD STBIDlst_idx7;
extern TEXT_FIELD STBIDlst_name6;
extern TEXT_FIELD STBIDlist_title_index;
extern TEXT_FIELD STBIDlst_idx3;
extern CONTAINER STBIDlist_item1;
extern SCROLL_BAR STBIDlist_scb;
extern TEXT_FIELD STBIDlst_name5;
extern CONTAINER STBIDlist_con;
extern TEXT_FIELD STBIDlst_name7;
extern TEXT_FIELD STBIDlst_name1;
extern CONTAINER STBIDlist_item5;
extern OBJLIST STBIDlist_olist;
extern TEXT_FIELD STBIDlist_title_stbids;
extern TEXT_FIELD STBIDlst_name2;
extern TEXT_FIELD STBIDlst_idx6;
extern CONTAINER STBIDlist_item6;
extern TEXT_FIELD STBIDlst_idx4;
extern CONTAINER g_win_STBIDlst;
extern TEXT_FIELD STBIDlist_info;
extern TEXT_FIELD STBIDlst_name3;
extern TEXT_FIELD STBIDlst_name8;
extern TEXT_FIELD STBIDlst_idx8;
extern CONTAINER STBIDlist_item7;
extern TEXT_FIELD STBIDlist_info2;
extern CONTAINER STBIDlist_item0;
extern TEXT_FIELD STBIDlst_idx5;
extern TEXT_FIELD STBIDlst_name0;
extern TEXT_FIELD STBIDlst_idx0;

//g_win_STBIDlst ------------------------------------------------------------------------
static VACTION win_STBIDlist_keymap(POBJECT_HEAD pObj, UINT32 key);
static PRESULT win_STBIDlist_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

CONTAINER g_win_STBIDlst = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {0, 90, 720, 400},
		.style = {
			.bShowIdx = WSTL_COMMON_BACK_2, .bHLIdx = WSTL_COMMON_BACK_2, .bSelIdx = WSTL_COMMON_BACK_2, .bGrayIdx = WSTL_COMMON_BACK_2
		},
		.pfnKeyMap = win_STBIDlist_keymap, .pfnCallback = win_STBIDlist_callback,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlist_con,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//STBIDlist_con ------------------------------------------------------------------------

CONTAINER STBIDlist_con = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {66, 102, 604, 350},
		.style = {
			.bShowIdx = WSTL_WIN_1, .bHLIdx = WSTL_WIN_1, .bSelIdx = WSTL_WIN_1, .bGrayIdx = WSTL_WIN_1
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_olist, .pRoot = (POBJECT_HEAD)&g_win_STBIDlst
	},
	.pNextInCntn = (POBJECT_HEAD)NULL,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//STBIDlist_olist ------------------------------------------------------------------------
static PRESULT win_STBIDlist_list_callback(POBJECT_HEAD pObj, VEVENT event, UINT32 param1, UINT32 param2);

static POBJECT_HEAD STBIDlist_olist_ListField[] = {
	(POBJECT_HEAD)&STBIDlist_item0,
	(POBJECT_HEAD)&STBIDlist_item1,
	(POBJECT_HEAD)&STBIDlist_item2,
	(POBJECT_HEAD)&STBIDlist_item3,
	(POBJECT_HEAD)&STBIDlist_item4,
	(POBJECT_HEAD)&STBIDlist_item5,
	(POBJECT_HEAD)&STBIDlist_item6,
	(POBJECT_HEAD)&STBIDlist_item7,
	(POBJECT_HEAD)&STBIDlist_item8,
};
OBJLIST STBIDlist_olist = {
	.head = {
		.bType = OT_OBJLIST,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 1, .bRightID = 1, .bUpID = 0, .bDownID = 0,
		.frame = {66, 136, 604, 316},
		.style = {
			.bShowIdx = WSTL_NOSHOW_IDX, .bHLIdx = WSTL_NOSHOW_IDX, .bSelIdx = WSTL_NOSHOW_IDX, .bGrayIdx = WSTL_NOSHOW_IDX
		},
		.pfnKeyMap = NULL, .pfnCallback = win_STBIDlist_list_callback,
		.pNext = (POBJECT_HEAD)&STBIDlist_title_index, .pRoot = (POBJECT_HEAD)&g_win_STBIDlst
	},
	.pListField = STBIDlist_olist_ListField,
	.scrollBar = NULL,
	.bListStyle = LIST_VER|LIST_NO_SLECT|LIST_NOKEEP_FOUCS|LIST_NOKEEP_SELECT|LIST_ITEMS_NOCOMPLETE|LIST_SCROLL|LIST_GRID|LIST_SELECT_FIRST|LIST_PAGE_KEEP_CURITEM|LIST_FULL_PAGE|LIST_BARSCROLL_NOCOMPLETE,
	.wDep = 9, .wCount = 0,
	.wTop = 0, .wCurPoint = 0, .wNewPoint = 0,
	.wSelect = 0, .dwSelect = NULL,
	.pSelMarkObj = NULL
};

//STBIDlist_scb ------------------------------------------------------------------------

SCROLL_BAR STBIDlist_scb = {
	.head = {
		.bType = OT_SCROLLBAR,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {650, 136, 15, 300},
		.style = {
			.bShowIdx = WSTL_SCROLLBAR_1, .bHLIdx = WSTL_SCROLLBAR_1, .bSelIdx = WSTL_SCROLLBAR_1, .bGrayIdx = WSTL_SCROLLBAR_1
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item0, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.bStyle = BAR_VERT_AUTO|SBAR_STYLE_RECT_STYLE,
	.bPage = 9,
	.wThumbID = WSTL_SCROLLBAR_2, .wTickBg = WSTL_NOSHOW_IDX,
	.rcBar = {0, 10, 12, 280},
	.nMax = 100, .nPos = 0
};

//STBIDlist_item0 ------------------------------------------------------------------------

CONTAINER STBIDlist_item0 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 9, .bDownID = 2,
		.frame = {70, 136, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item1, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx0,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 0,
};

//STBIDlst_idx0 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx0 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 136, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name0, .pRoot = (POBJECT_HEAD)&STBIDlist_item0
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[0]
};

//STBIDlst_name0 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name0 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {250, 136, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item0
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[1]
};

//STBIDlist_item1 ------------------------------------------------------------------------

CONTAINER STBIDlist_item1 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 2, .bLeftID = 0, .bRightID = 0, .bUpID = 1, .bDownID = 3,
		.frame = {70, 170, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item2, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx1,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx1 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 170, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name1, .pRoot = (POBJECT_HEAD)&STBIDlist_item1
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[2]
};

//STBIDlst_name1 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name1 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 170, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item1
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[3]
};

//STBIDlist_item2 ------------------------------------------------------------------------

CONTAINER STBIDlist_item2 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 3, .bLeftID = 0, .bRightID = 0, .bUpID = 2, .bDownID = 4,
		.frame = {70, 204, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item3, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx2,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx2 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 204, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name2, .pRoot = (POBJECT_HEAD)&STBIDlist_item2
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[4]
};

//STBIDlst_name2 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 204, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item2
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[5]
};

//STBIDlist_item3 ------------------------------------------------------------------------

CONTAINER STBIDlist_item3 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 0, .bRightID = 0, .bUpID = 3, .bDownID = 5,
		.frame = {70, 238, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item4, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx3,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx3 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 238, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name3, .pRoot = (POBJECT_HEAD)&STBIDlist_item3
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[6]
};

//STBIDlst_name3 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name3 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 238, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item3
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[7]
};

//STBIDlist_item4 ------------------------------------------------------------------------

CONTAINER STBIDlist_item4 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 5, .bLeftID = 0, .bRightID = 0, .bUpID = 4, .bDownID = 6,
		.frame = {70, 272, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item5, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx4,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx4 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 272, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name4, .pRoot = (POBJECT_HEAD)&STBIDlist_item4
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[8]
};

//STBIDlst_name4 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name4 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 272, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item4
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[9]
};

//STBIDlist_item5 ------------------------------------------------------------------------

CONTAINER STBIDlist_item5 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 6, .bLeftID = 0, .bRightID = 0, .bUpID = 5, .bDownID = 7,
		.frame = {70, 306, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item6, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx5,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx5 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 306, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name5, .pRoot = (POBJECT_HEAD)&STBIDlist_item5
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[10]
};

//STBIDlst_name5 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name5 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 306, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item5
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[11]
};

//STBIDlist_item6 ------------------------------------------------------------------------

CONTAINER STBIDlist_item6 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 7, .bLeftID = 0, .bRightID = 0, .bUpID = 6, .bDownID = 8,
		.frame = {70, 340, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item7, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx6,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx6 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 340, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name6, .pRoot = (POBJECT_HEAD)&STBIDlist_item6
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[12]
};

//STBIDlst_name6 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name6 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 340, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item6
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[13]
};

//STBIDlist_item7 ------------------------------------------------------------------------

CONTAINER STBIDlist_item7 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 8, .bLeftID = 0, .bRightID = 0, .bUpID = 7, .bDownID = 9,
		.frame = {70, 374, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_item8, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx7,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx7 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 374, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name7, .pRoot = (POBJECT_HEAD)&STBIDlist_item7
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[14]
};

//STBIDlst_name7 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name7 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 374, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item7
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[15]
};

//STBIDlist_item8 ------------------------------------------------------------------------

CONTAINER STBIDlist_item8 = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 9, .bLeftID = 0, .bRightID = 0, .bUpID = 8, .bDownID = 1,
		.frame = {70, 408, 580, 30},
		.style = {
			.bShowIdx = WSTL_BUTTON_2, .bHLIdx = WSTL_BUTTON_1, .bSelIdx = WSTL_BUTTON_2, .bGrayIdx = WSTL_BUTTON_2
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_olist
	},
	.pNextInCntn = (POBJECT_HEAD)&STBIDlst_idx8,
	.FocusObjectID = 1,
	.bHiliteAsWhole = 1,
};

//STBIDlst_idx8 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_idx8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 1, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 408, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlst_name8, .pRoot = (POBJECT_HEAD)&STBIDlist_item8
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[16]
};

//STBIDlst_name8 ------------------------------------------------------------------------

TEXT_FIELD STBIDlst_name8 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {252, 408, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&STBIDlist_item8
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_STATUS_READED,
	.pString = display_strs[17]
};

//STBIDlist_title_index ------------------------------------------------------------------------

TEXT_FIELD STBIDlist_title_index = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {70, 106, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_4, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_title_stbids, .pRoot = (POBJECT_HEAD)&g_win_STBIDlst
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_DETITLE_INDEX,
	.pString = NULL
};

//STBIDlist_title_stbids ------------------------------------------------------------------------

TEXT_FIELD STBIDlist_title_stbids = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {245, 106, 180, 30},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_4, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_info, .pRoot = (POBJECT_HEAD)&g_win_STBIDlst
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 20, .bY = 0,
	.wStringID = RS_CASINFO_STBID,
	.pString = NULL
};

//STBIDlist_info ------------------------------------------------------------------------

TEXT_FIELD STBIDlist_info = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {100, 136, 400, 28},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&STBIDlist_info2, .pRoot = (POBJECT_HEAD)&g_win_STBIDlst
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_CA_STBID_PAIRED,
	.pString = NULL
};

//STBIDlist_info2 ------------------------------------------------------------------------

TEXT_FIELD STBIDlist_info2 = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {100, 168, 400, 28},
		.style = {
			.bShowIdx = WSTL_TXT_4, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_10
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_STBIDlst
	},
	.bAlign = C_ALIGN_CENTER|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = display_strs[10]
};
#endif//__WIN_CA_STBID_LIST_H__D3B6804A_38FA_41D2_A186_0185472BC460
