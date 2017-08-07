/*
**********************************************************************************************************************
														 ePDK
										 the Easy Portable/Player Develop Kits
*												 RES Compiler Sub-System
*
* 												(c) Copyright 2007-2010 
* 												 All Rights Reserved
*
* Moudle	: language compiler
* File		: lang.h
*
* By		: 
* Version	: v1.00
* Date		: 2017-8-7
**********************************************************************************************************************
*/


#ifndef __LANG__H__
#define __LANG__H__

// LangId 
#define	LANG_CHINESES_TYPE		0x410
#define	LANG_CHINESET_TYPE		0x420
#define	LANG_ENGLISH_TYPE		0x400

// StringID 
#define 	 STRING_USB_CONNECTING		0x01
#define 	 STRING_POWER_OFF		0x02
#define 	 STRING_UPDATE_ORCHID		0x03
#define 	 STRING_LOW_POWER		0x04
#define 	 STRING_FW_UPDATE		0x05
#define 	 STRING_ADJUST_FINISH		0x06
#define 	 STRING_FM		0x07
#define 	 STRING_FW_UPDONE		0x08
#define 	 STRING_HOME_INSERT_DISK		0x3e9
#define 	 STRING_HOME_TV		0x3ea
#define 	 STRING_HOME_FM		0x3eb
#define 	 STRING_HOME_MOVIE		0x3ec
#define 	 STRING_HOME_PHOTO		0x3ed
#define 	 STRING_HOME_CAPTURE		0x3ee
#define 	 STRING_HOME_OTHERS		0x3ef
#define 	 STRING_HOME_SETTING		0x3f0
#define 	 STRING_HOME_TV_PLAY		0x3f1
#define 	 STRING_HOME_CHANNEL_SEARCH		0x3f2
#define 	 STRING_HOME_AV_INPUT		0x3f3
#define 	 STRING_HOME_FM_PLAY		0x3f4
#define 	 STRING_HOME_NULL_DISK		0x3f5
#define 	 STRING_HOME_SD		0x3f6
#define 	 STRING_HOME_USB		0x3f7
#define 	 STRING_HOME_MMC		0x3f8
#define 	 STRING_HOME_EXPLORER		0x3f9
#define 	 STRING_HOME_EBOOK		0x3fa
#define 	 STRING_HOME_CALENDAR		0x3fb
#define 	 STRING_HOME_SET_COMMON		0x3fc
#define 	 STRING_HOME_SET_POWER		0x3fd
#define 	 STRING_HOME_SET_TIMER		0x3fe
#define 	 STRING_HOME_SET_MULTIMEDIA		0x3ff
#define 	 STRING_HOME_CUE		0x400
#define 	 STRING_HOME_RECORD		0x401
#define 	 STRING_EXPLR_EXPLORER		0x7d1
#define 	 STRING_EXPLR_MOVIE		0x7d2
#define 	 STRING_EXPLR_EBOOK		0x7d3
#define 	 STRING_EXPLR_SD		0x7d4
#define 	 STRING_EXPLR_USB		0x7d5
#define 	 STRING_EXPLR_TYPE		0x7d6
#define 	 STRING_EXPLR_FOLDER		0x7d7
#define 	 STRING_EXPLR_DATE		0x7d8
#define 	 STRING_EXPLR_SPACE		0x7d9
#define 	 STRING_EXPLR_RESOLUTION		0x7da
#define 	 STRING_EXPLR_BACKTOUP		0x7db
#define 	 STRING_EXPLR_TEST		0x7dc
#define 	 STRING_EXPLR_DELETE_CONFIRM		0x7dd
#define 	 STRING_EXPLR_TIME_YEAR		0x7de
#define 	 STRING_EXPLR_TIME_MONTH		0x7df
#define 	 STRING_EXPLR_TIME_DAY		0x7e0
#define 	 STRING_EXPLR_TIME_HOUR		0x7e1
#define 	 STRING_EXPLR_TIME_MINUTE		0x7e2
#define 	 STRING_EXPLR_TIME_SECOND		0x7e3
#define 	 STRING_EXPLR_MANAGER_TITLE		0x7e4
#define 	 STRING_EXPLR_DELETE_HINT		0x7e5
#define 	 STRING_EXPLR_DELETE_FAILED		0x7e6
#define 	 STRING_EXPLR_FW_UPDATE_CONFIRM		0x7e7
#define 	 STRING_MOVIE_PREV		0xbb9
#define 	 STRING_MOVIE_NEXT		0xbba
#define 	 STRING_MOVIE_PLAY		0xbbb
#define 	 STRING_MOVIE_RR		0xbbc
#define 	 STRING_MOVIE_FF		0xbbd
#define 	 STRING_MOVIE_JUMP		0xbbe
#define 	 STRING_MOVIE_PLAYMODE		0xbbf
#define 	 STRING_MOVIE_SCREENRATE		0xbc0
#define 	 STRING_MOVIE_BRIGHT		0xbc1
#define 	 STRING_MOVIE_REPEATALL		0xbc2
#define 	 STRING_MOVIE_REPEATONE		0xbc3
#define 	 STRING_MOVIE_PLAYALL		0xbc4
#define 	 STRING_MOVIE_NONE		0xbc5
#define 	 STRING_MOVIE_AUTO		0xbc6
#define 	 STRING_MOVIE_CUT		0xbc7
#define 	 STRING_MOVIE_STRECTCH		0xbc8
#define 	 STRING_MOVIE_ORIGINAL		0xbc9
#define 	 STRING_MOVIE_ACTUAL		0xbca
#define 	 STRING_MOVIE_VIDEO_INFO		0xbcb
#define 	 STRING_MOVIE_AUDIO_INFO		0xbcc
#define 	 STRING_MOVIE_FILE_INFO		0xbcd
#define 	 STRING_MOVIE_SUB_STATE		0xbce
#define 	 STRING_MOVIE_SUB_SIZE		0xbcf
#define 	 STRING_MOVIE_SUB_COLOR		0xbd0
#define 	 STRING_MOVIE_SUB_POS		0xbd1
#define 	 STRING_MOVIE_SUB_ON		0xbd2
#define 	 STRING_MOVIE_SUB_OFF		0xbd3
#define 	 STRING_MOVIE_SUB_WHITE		0xbd4
#define 	 STRING_MOVIE_SUB_RED		0xbd5
#define 	 STRING_MOVIE_SUB_BLUE		0xbd6
#define 	 STRING_MOVIE_SUB_BOTTOM		0xbd7
#define 	 STRING_MOVIE_SUB_MID		0xbd8
#define 	 STRING_MOVIE_SUB_TOP		0xbd9
#define 	 STRING_MOVIE_BREAKPLAY		0xbda
#define 	 STRING_MOVIE_FILE_NOT_SUPPORT		0xbdb
#define 	 STRING_MOVIE_PLAY_END		0xbdc
#define 	 STRING_MOVIE_TIPS		0xbdd
#define 	 STRING_MOVIE_SUB_STREAM		0xbde
#define 	 STRING_MOVIE_SUB_1		0xbdf
#define 	 STRING_MOVIE_SUB_2		0xbe0
#define 	 STRING_MUSIC_PLAY_ALL		0xfa1
#define 	 STRING_MUSIC_PLAY_ONCE		0xfa2
#define 	 STRING_MUSIC_PLAY_ROTATE_ONE		0xfa3
#define 	 STRING_MUSIC_PLAY_ROTATE_ALL		0xfa4
#define 	 STRING_MUSIC_PLAY_RANDOM		0xfa5
#define 	 STRING_MUSIC_EQ_NORMAL		0xfa6
#define 	 STRING_MUSIC_EQ_CLASSIC		0xfa7
#define 	 STRING_MUSIC_EQ_JAZZ		0xfa8
#define 	 STRING_MUSIC_EQ_ROCK		0xfa9
#define 	 STRING_MUSIC_EQ_POP		0xfaa
#define 	 STRING_MUSIC_BL_ON		0xfab
#define 	 STRING_MUSIC_BL_10S		0xfac
#define 	 STRING_MUSIC_BL_30S		0xfad
#define 	 STRING_MUSIC_BL_60S		0xfae
#define 	 STRING_MUSIC_BL_90S		0xfaf
#define 	 STRING_MUSIC_PLAY_PREVIOUS		0xfb0
#define 	 STRING_MUSIC_PLAY_NEXT		0xfb1
#define 	 STRING_MUSIC_PLAY_PAUSE		0xfb2
#define 	 STRING_MUSIC_PLAY_FORWARD		0xfb3
#define 	 STRING_MUSIC_PLAY_BACKWARD		0xfb4
#define 	 STRING_OK_CALENDAR		0x1389
#define 	 STRING_CALENDAR_DATE		0x138a
#define 	 STRING_CALENDAR_MODE		0x138b
#define 	 STRING_CALENDAR_TIME		0x138c
#define 	 STRING_CALENDAR_ADJUST		0x138d
#define 	 STRING_CALENDAR_TIMER		0x138e
#define 	 STRING_CALENDAR_ALARM		0x138f
#define 	 STRING_CALENDAR_MONDAY		0x1390
#define 	 STRING_CALENDAR_TUESDAY		0x1391
#define 	 STRING_CALENDAR_WEDNESDAY		0x1392
#define 	 STRING_CALENDAR_THURSDAY		0x1393
#define 	 STRING_CALENDAR_FRIDAY		0x1394
#define 	 STRING_CALENDAR_SATURDAY		0x1395
#define 	 STRING_CALENDAR_SUNDAY		0x1396
#define 	 STRING_CALENDAR_12HOUR		0x1397
#define 	 STRING_CALENDAR_24HOUR		0x1398
#define 	 STRING_CLD_SUNDAY		0x1399
#define 	 STRING_CLD_MONDAY		0x139a
#define 	 STRING_CLD_TUESDAY		0x139b
#define 	 STRING_CLD_WEDNESDAY		0x139c
#define 	 STRING_CLD_THURSDAY		0x139d
#define 	 STRING_CLD_FRIDAY		0x139e
#define 	 STRING_CLD_SATURDAY		0x139f
#define 	 STRING_CLD_AM		0x13a0
#define 	 STRING_CLD_PM		0x13a1
#define 	 STRING_SET_POWER_OFF_LAST10M_CON		0x1771
#define 	 STRING_SET_POWER_BGT_LAST10S_CON		0x1772
#define 	 STRING_SET_POWER_OFF_LAST20M_CON		0x1773
#define 	 STRING_SET_POWER_BGT_LAST30S_CON		0x1774
#define 	 STRING_SET_POWER_OFF_LAST30M_CON		0x1775
#define 	 STRING_SET_POWER_OFF_LAST1H_CON		0x1776
#define 	 STRING_SET_POWER_BGT_LAST60S_CON		0x1777
#define 	 STRING_SET_POWER_BGT_LAST90S_CON		0x1778
#define 	 STRING_SET_POWER_BGT_LAST5S_CON		0x1779
#define 	 STRING_SET_POWER_BGT_LAST20S_CON		0x177a
#define 	 STRING_SET_POWER_BGT_LAST5M_CON		0x177b
#define 	 STRING_SET_COMMON_PRODUCTINFO_DE		0x177c
#define 	 STRING_SET_OUTPUT_NTSC_CON		0x177d
#define 	 STRING_SET_OUTPUT_PAL_CON		0x177e
#define 	 STRING_SET_KEYTONE_TITLE		0x177f
#define 	 STRING_SET_KEYTONE_EX		0x1780
#define 	 STRING_SET_POWER_BGT_TITLE		0x1781
#define 	 STRING_SET_POWER_BGT_EX		0x1782
#define 	 STRING_SET_POWER_BGT_DE		0x1783
#define 	 STRING_SET_COMMON_PRODUCTINFO_TITLE		0x1784
#define 	 STRING_SET_COMMON_PRODUCTINFO_EX		0x1785
#define 	 STRING_SET_COMMON_FACTORY_DEFAULT_EX		0x1786
#define 	 STRING_SET_TIPS_TSIZE		0x1787
#define 	 STRING_SET_POWER_BGT_NEVER_CON		0x1788
#define 	 STRING_SET_POWER_OFF_NEVER_CON		0x1789
#define 	 STRING_SET_PROMPT_POWER_MANAGER		0x178a
#define 	 STRING_SET_COMMON_TOPIC_STYLE1_CON		0x178b
#define 	 STRING_SET_COMMON_TOPIC_STYLE2_CON		0x178c
#define 	 STRING_SET_COMMON_TOPIC_STYLE3_CON		0x178d
#define 	 STRING_SET_TIPS_NO		0x178e
#define 	 STRING_SET_KEYTONE_OFF_CON		0x178f
#define 	 STRING_SET_POWER_BGT_OFF_TITLE		0x1790
#define 	 STRING_SET_POWER_OFF_TITLE		0x1791
#define 	 STRING_SET_POWER_OFF_EX		0x1792
#define 	 STRING_SET_POWER_BGT_OFF_DE		0x1793
#define 	 STRING_SET_COMMON_FACTORY_DEFAULT_TITLE		0x1794
#define 	 STRING_SET_KEYTONE_ON_CON		0x1795
#define 	 STRING_SET_KEYTONE_DE		0x1796
#define 	 STRING_SET_POWER_BGT_ON_EX		0x1797
#define 	 STRING_SET_POWER_BGT_LEVEL1_CON		0x1798
#define 	 STRING_SET_POWER_BGT_LEVEL2_CON		0x1799
#define 	 STRING_SET_POWER_BGT_LEVEL3_CON		0x179a
#define 	 STRING_SET_POWER_BGT_LEVEL4_CON		0x179b
#define 	 STRING_SET_POWER_BGT_LEVEL5_CON		0x179c
#define 	 STRING_SET_TIPS_SVERS		0x179d
#define 	 STRING_SET_TIPS_CARDT		0x179e
#define 	 STRING_SET_TIPS_CARDF		0x179f
#define 	 STRING_SET_COMMON_TOPIC_STYLE_EX		0x17a0
#define 	 STRING_SET_POWER_OFF_DE		0x17a1
#define 	 STRING_SET_POWER_BGT_OFF_EX		0x17a2
#define 	 STRING_SET_COMMON_LANGUAGE_DE		0x17a3
#define 	 STRING_SET_COMMON_LANGUAGE_EX		0x17a4
#define 	 STRING_SET_DISPLAY_LCD_EX		0x17a5
#define 	 STRING_SET_SENIOR_LCD_EX		0x17a6
#define 	 STRING_SET_COMMON_TOPIC_STYLE_DE		0x17a7
#define 	 STRING_SET_TIPS_FSIZE		0x17a8
#define 	 STRING_SET_TIPS_YES		0x17a9
#define 	 STRING_SET_COMMON_FACTORY_DEFAULT_DE		0x17aa
#define 	 STRING_SET_OUTPUT_TITLE		0x17ab
#define 	 STRING_SET_OUTPUT_EX		0x17ac
#define 	 STRING_SET_OUTPUT_DE		0x17ad
#define 	 STRING_SET_PROMPT_COMMON		0x17ae
#define 	 STRING_SET_COMMON_LANGUAGE_ENGLISH_CON		0x17af
#define 	 STRING_SET_COMMON_LANGUAGE_TITLE		0x17b0
#define 	 STRING_SET_COMMON_LANGUAGE_CHINESE_CON		0x17b1
#define 	 STRING_SET_COMMON_LANGUAGE_KEREAN_CON		0x17b2
#define 	 STRING_SET_COMMON_TOPIC_STYLE_TITLE		0x17b3
#define 	 STRING_SET_COMMON_DISPLAY_TITLE		0x17b4
#define 	 STRING_SET_COMMON_SENIOR_TITLE		0x17b5
#define 	 STRING_SET_COMMON_RESTORE		0x17b6
#define 	 STRING_SET_OK		0x17b7
#define 	 STRING_SET_CUE		0x17b8
#define 	 STRING_SET_COMMON_CARDFOMART_TITLE		0x17b9
#define 	 STRING_SET_VER_NUM		0x17ba
#define 	 STRING_SET_COMMON_NOCARD_NOTE		0x17bb
#define 	 STRING_CONFIRM_BG_SET		0x1b59
#define 	 STRING_PHOTO_BG_SAVED		0x1b5a
#define 	 STRING_PHOTO_ORIGINFILE		0x1b5b
#define 	 STRING_PHOTO_ALLDIR		0x1b5c
#define 	 STRING_PHOTO_CURDIR		0x1b5d
#define 	 STRING_PHOTO_BG_MUSIC		0x1b5e
#define 	 STRING_PHOTO_ON		0x1b5f
#define 	 STRING_PHOTO_OFF		0x1b60
#define 	 STRING_PHOTO_ZOOM		0x1b61
#define 	 STRING_PHOTO_ROTATE		0x1b62
#define 	 STRING_PHOTO_BRIGHTNESS		0x1b63
#define 	 STRING_PHOTO_SLIDESHOW		0x1b64
#define 	 STRING_PHOTO_DEFAULT		0x1b65
#define 	 STRING_PHOTO_RANDOM_SEL		0x1b66
#define 	 STRING_PHOTO_FADE_IN_FADE_OUT		0x1b67
#define 	 STRING_PHOTO_PERSIAN_BLINDS_H		0x1b68
#define 	 STRING_PHOTO_PERSIAN_BLINDS_V		0x1b69
#define 	 STRING_PHOTO_SLIDE_DOWN		0x1b6a
#define 	 STRING_PHOTO_SLIDE_LEFT		0x1b6b
#define 	 STRING_PHOTO_SLIDE_RIGHT		0x1b6c
#define 	 STRING_PHOTO_SLIDE_UP		0x1b6d
#define 	 STRING_PHOTO_STRETCH_DOWN		0x1b6e
#define 	 STRING_PHOTO_STRETCH_UP		0x1b6f
#define 	 STRING_PHOTO_STRETCH_LEFT		0x1b70
#define 	 STRING_PHOTO_STRETCH_RIGHT		0x1b71
#define 	 STRING_PHOTO_MOSAIC		0x1b72
#define 	 STRING_PHOTO_ZOOM_IN		0x1b73
#define 	 STRING_PHOTO_ZOOM_OUT		0x1b74
#define 	 STRING_PHOTO_INTERVAL		0x1b75
#define 	 STRING_PHOTO_SCALE		0x1b76
#define 	 STRING_PHOTO_FAST		0x1b77
#define 	 STRING_PHOTO_MIDDLE		0x1b78
#define 	 STRING_PHOTO_SLOW		0x1b79
#define 	 STRING_PHOTO_AUTO		0x1b7a
#define 	 STRING_PHOTO_ORIGINAL		0x1b7b
#define 	 STRING_PHOTO_CROP		0x1b7c
#define 	 STRING_PHOTO_STRECTCH		0x1b7d
#define 	 STRING_PHOTO_TAKEN_TIME		0x1b7e
#define 	 STRING_PHOTO_FILE_SIZE		0x1b7f
#define 	 STRING_PHOTO_PLACE		0x1b80
#define 	 STRING_PHOTO_SIZE		0x1b81
#define 	 STRING_PHOTO_RESOLUTION		0x1b82
#define 	 STRING_PHOTO_CAMERA_MODEL		0x1b83
#define 	 STRING_PHOTO_EXPOSUREBAIS		0x1b84
#define 	 STRING_PHOTO_FLASH		0x1b85
#define 	 STRING_PHOTO_FOCUS_LENGTH		0x1b86
#define 	 STRING_PHOTO_COLOR_SPACE		0x1b87
#define 	 STRING_PHOTO_SET_BG		0x1b88
#define 	 STRING_EBOOK_BGMUSIC		0x1f41
#define 	 STRING_EBOOK_AUTO		0x1f42
#define 	 STRING_EBOOK_TXTCOLOR		0x1f43
#define 	 STRING_EBOOK_GOTO		0x1f44
#define 	 STRING_EBOOK_ON		0x1f45
#define 	 STRING_EBOOK_OFF		0x1f46
#define 	 STRING_EBOOK_FAST		0x1f47
#define 	 STRING_EBOOK_MIDDLE		0x1f48
#define 	 STRING_EBOOK_SLOW		0x1f49
#define 	 STRING_EBOOK_BLACK		0x1f4a
#define 	 STRING_EBOOK_WHITE		0x1f4b
#define 	 STRING_EBOOK_GREEN		0x1f4c
#define 	 STRING_EBOOK_YELLOW		0x1f4d
#define 	 STRING_EBOOK_TIPS_YES		0x1f4e
#define 	 STRING_EBOOK_TIPS_NO		0x1f4f
#define 	 STRING_EBOOK_BKPOINT		0x1f50
#define 	 STRING_EBOOK_LOADING		0x1f51
#define 	 STRING_QUALITY_RC		0x2329
#define 	 STRING_RECORD_RC		0x232a
#define 	 STRING_SAVE_RC		0x232b
#define 	 STRING_MUSCI_LIST_RC		0x232c
#define 	 STRING_GOOD_QUALITY_RC		0x232d
#define 	 STRING_NORMAL_QUALITY_RC		0x232e
#define 	 STRING_POOR_QUALITY_RC		0x232f
#define 	 STRING_BACK_RC		0x2330
#define 	 STRING_PRE_RC		0x2331
#define 	 STRING_NEXT_RC		0x2332
#define 	 STRING_BACKWARD_RC		0x2333
#define 	 STRING_FORWARD_RC		0x2334
#define 	 STRING_PLAY_RC		0x2335
#define 	 STRING_PAUSE_RC		0x2336
#define 	 STRING_DELETE_RC		0x2337
#define 	 STRING_PLAYING_RC		0x2338
#define 	 STRING_SAVING_RC		0x2339
#define 	 STRING_ATTR_RC		0x233a
#define 	 STRING_FILE_RC		0x233b
#define 	 STRING_TYPE_RC		0x233c
#define 	 STRING_SIZE_RC		0x233d
#define 	 STRING_STOP_RC		0x233e
#define 	 STRING_RECORD_TIME_RC		0x233f
#define 	 STRING_FILE_SIZE_RC		0x2340
#define 	 STRING_RECORDER_RC		0x2341
#define 	 STRING_RECORD_PLAYER_RC		0x2342
#define 	 STRING_YES_RC		0x2343
#define 	 STRING_NO_RC		0x2344
#define 	 STRING_MSG1_RC		0x2345
#define 	 STRING_MSG2_RC		0x2346
#define 	 STRING_MSG3_RC		0x2347
#define 	 STRING_MSG4_RC		0x2348
#define 	 STRING_FM_NAME		0x2711
#define 	 STRING_FM_CHSRH_TITLE		0x2712
#define 	 STRING_FM_CHSRH_TIPS1		0x2713
#define 	 STRING_FM_CHSRH_TIPS2		0x2714
#define 	 STRING_FM_TIPS_YES		0x2715
#define 	 STRING_FM_TIPS_NO		0x2716
#define 	 STRING_FM_CHANNELNU		0x2717
#define 	 STRING_FM_AUTOSRH		0x2718
#define 	 STRING_FM_MANUALSRH		0x2719
#define 	 STRING_FM_FINETUNE		0x271a
#define 	 STRING_FM_RECORD		0x271b
#define 	 STRING_DIALOG_OK		0x2af9
#define 	 STRING_DIALOG_YES		0x2afa
#define 	 STRING_DIALOG_CANCEL		0x2afb
#define 	 STRING_DIALOG_NO		0x2afc
#define 	 STRING_DIALOG_RETRY		0x2afd
#define 	 STRING_DIALOG_ABORT		0x2afe
#define 	 STRING_DIALOG_IGNORE		0x2aff
#define 	 STRING_DIALOG_DIALOG		0x2b00
#define 	 STRING_DIALOG_DET		0x2b01
#define 	 STRING_MP		0x2ee1
#define 	 STRING_REC_MP1		0x2ee2
#define 	 STRING_REC_MP2		0x2ee3
#define 	 STRING_CAM_MP1		0x2ee4
#define 	 STRING_CAM_MP2		0x2ee5
#define 	 STRING_CAM_MP3		0x2ee6
#define 	 STRING_NO_SD		0x2ee7
#define 	 STRING_DISK_FULL		0x2ee8
#define 	 STRING_REC		0x2ee9
#define 	 STRING_CAM		0x2eea
#define 	 STRING_SEARCH_ID		0x2eeb


#endif //__LANG__H__ 


