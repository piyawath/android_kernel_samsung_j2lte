/*
 * samsung EXYNOS FIMC-IS2 (Imaging Subsystem) driver
 *
 * Copyright (C) 2015 Samsung Electronics Co., Ltd.
 *
 * This program is free software, you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_SFR_FD_V11_H
#define FIMC_IS_SFR_FD_V11_H

#include "fimc-is-hw-api-common.h"

#define FD_REG_CNT 294
enum fimc_is_fd_reg_format {
	FD_R_VERSION,
	FD_R_CTRL,
	FD_R_AXI_CTRL,
	FD_R_STATUS,
	FD_R_INTSTATUS,
	FD_R_INTMASK,
	FD_R_SHADOW_CTRL,
	FD_R_FRAME_END,
	FD_R_REGISTER_01,
	FD_R_CLIENT_VERSION,
	FD_R_SHIFT,
	FD_R_COEF_K,
	FD_R_DS_SCALE_X,
	FD_R_DS_SCALE_Y,
	FD_R_START_Y,
	FD_R_HEIGHT,
	FD_R_START_X,
	FD_R_WIDTH,
	FD_R_MAP0_OUT_ADDRESS,
	FD_R_MAP1_OUT_ADDRESS,
	FD_R_MAP2_OUT_ADDRESS,
	FD_R_MAP3_OUT_ADDRESS,
	FD_R_MAP4_OUT_ADDRESS,
	FD_R_MAP5_OUT_ADDRESS,
	FD_R_MAP6_OUT_ADDRESS,
	FD_R_MAP7_OUT_ADDRESS,
	FD_R_OUTPUT_SIZE,
	FD_R_RESULT_SAT,
	FD_R_PB_Y_ADDRESS,
	FD_R_PB_CB_ADDRESS,
	FD_R_PB_CR_ADDRESS,
	FD_R_PB_WIDTH,
	FD_R_OUTPUT_WIDTH,
	FD_R_OUTPUT_HEIGHT,
	FD_R_OUTPUT_START_X,
	FD_R_OUTPUT_START_Y,
	FD_R_INPUT_SIZE,
	FD_R_SENSOR_CTRL,
	FD_R_Y_MAP0,
	FD_R_Y_MAP1,
	FD_R_Y_MAP2,
	FD_R_Y_MAP3,
	FD_R_Y_MAP4,
	FD_R_Y_MAP5,
	FD_R_Y_MAP6,
	FD_R_Y_MAP7,
	FD_R_Y_MAP8,
	FD_R_Y_MAP9,
	FD_R_Y_MAP10,
	FD_R_Y_MAP11,
	FD_R_Y_MAP12,
	FD_R_Y_MAP13,
	FD_R_Y_MAP14,
	FD_R_Y_MAP15,
	FD_R_Y_MAP16,
	FD_R_Y_MAP17,
	FD_R_Y_MAP18,
	FD_R_Y_MAP19,
	FD_R_Y_MAP20,
	FD_R_Y_MAP21,
	FD_R_Y_MAP22,
	FD_R_Y_MAP23,
	FD_R_Y_MAP24,
	FD_R_Y_MAP25,
	FD_R_Y_MAP26,
	FD_R_Y_MAP27,
	FD_R_Y_MAP28,
	FD_R_Y_MAP29,
	FD_R_Y_MAP30,
	FD_R_Y_MAP31,
	FD_R_Y_MAP32,
	FD_R_Y_MAP33,
	FD_R_Y_MAP34,
	FD_R_Y_MAP35,
	FD_R_Y_MAP36,
	FD_R_Y_MAP37,
	FD_R_Y_MAP38,
	FD_R_Y_MAP39,
	FD_R_Y_MAP40,
	FD_R_Y_MAP41,
	FD_R_Y_MAP42,
	FD_R_Y_MAP43,
	FD_R_Y_MAP44,
	FD_R_Y_MAP45,
	FD_R_Y_MAP46,
	FD_R_Y_MAP47,
	FD_R_Y_MAP48,
	FD_R_Y_MAP49,
	FD_R_Y_MAP50,
	FD_R_Y_MAP51,
	FD_R_Y_MAP52,
	FD_R_Y_MAP53,
	FD_R_Y_MAP54,
	FD_R_Y_MAP55,
	FD_R_Y_MAP56,
	FD_R_Y_MAP57,
	FD_R_Y_MAP58,
	FD_R_Y_MAP59,
	FD_R_Y_MAP60,
	FD_R_Y_MAP61,
	FD_R_Y_MAP62,
	FD_R_Y_MAP63,
	FD_R_Y_MAP64,
	FD_R_Y_MAP65,
	FD_R_Y_MAP66,
	FD_R_Y_MAP67,
	FD_R_Y_MAP68,
	FD_R_Y_MAP69,
	FD_R_Y_MAP70,
	FD_R_Y_MAP71,
	FD_R_Y_MAP72,
	FD_R_Y_MAP73,
	FD_R_Y_MAP74,
	FD_R_Y_MAP75,
	FD_R_Y_MAP76,
	FD_R_Y_MAP77,
	FD_R_Y_MAP78,
	FD_R_Y_MAP79,
	FD_R_Y_MAP80,
	FD_R_Y_MAP81,
	FD_R_Y_MAP82,
	FD_R_Y_MAP83,
	FD_R_Y_MAP84,
	FD_R_Y_MAP85,
	FD_R_Y_MAP86,
	FD_R_Y_MAP87,
	FD_R_Y_MAP88,
	FD_R_Y_MAP89,
	FD_R_Y_MAP90,
	FD_R_Y_MAP91,
	FD_R_Y_MAP92,
	FD_R_Y_MAP93,
	FD_R_Y_MAP94,
	FD_R_Y_MAP95,
	FD_R_Y_MAP96,
	FD_R_Y_MAP97,
	FD_R_Y_MAP98,
	FD_R_Y_MAP99,
	FD_R_Y_MAP100,
	FD_R_Y_MAP101,
	FD_R_Y_MAP102,
	FD_R_Y_MAP103,
	FD_R_Y_MAP104,
	FD_R_Y_MAP105,
	FD_R_Y_MAP106,
	FD_R_Y_MAP107,
	FD_R_Y_MAP108,
	FD_R_Y_MAP109,
	FD_R_Y_MAP110,
	FD_R_Y_MAP111,
	FD_R_Y_MAP112,
	FD_R_Y_MAP113,
	FD_R_Y_MAP114,
	FD_R_Y_MAP115,
	FD_R_Y_MAP116,
	FD_R_Y_MAP117,
	FD_R_Y_MAP118,
	FD_R_Y_MAP119,
	FD_R_Y_MAP120,
	FD_R_Y_MAP121,
	FD_R_Y_MAP122,
	FD_R_Y_MAP123,
	FD_R_Y_MAP124,
	FD_R_Y_MAP125,
	FD_R_Y_MAP126,
	FD_R_Y_MAP127,
	FD_R_Y_MAP128,
	FD_R_Y_MAP129,
	FD_R_Y_MAP130,
	FD_R_Y_MAP131,
	FD_R_Y_MAP132,
	FD_R_Y_MAP133,
	FD_R_Y_MAP134,
	FD_R_Y_MAP135,
	FD_R_Y_MAP136,
	FD_R_Y_MAP137,
	FD_R_Y_MAP138,
	FD_R_Y_MAP139,
	FD_R_Y_MAP140,
	FD_R_Y_MAP141,
	FD_R_Y_MAP142,
	FD_R_Y_MAP143,
	FD_R_Y_MAP144,
	FD_R_Y_MAP145,
	FD_R_Y_MAP146,
	FD_R_Y_MAP147,
	FD_R_Y_MAP148,
	FD_R_Y_MAP149,
	FD_R_Y_MAP150,
	FD_R_Y_MAP151,
	FD_R_Y_MAP152,
	FD_R_Y_MAP153,
	FD_R_Y_MAP154,
	FD_R_Y_MAP155,
	FD_R_Y_MAP156,
	FD_R_Y_MAP157,
	FD_R_Y_MAP158,
	FD_R_Y_MAP159,
	FD_R_Y_MAP160,
	FD_R_Y_MAP161,
	FD_R_Y_MAP162,
	FD_R_Y_MAP163,
	FD_R_Y_MAP164,
	FD_R_Y_MAP165,
	FD_R_Y_MAP166,
	FD_R_Y_MAP167,
	FD_R_Y_MAP168,
	FD_R_Y_MAP169,
	FD_R_Y_MAP170,
	FD_R_Y_MAP171,
	FD_R_Y_MAP172,
	FD_R_Y_MAP173,
	FD_R_Y_MAP174,
	FD_R_Y_MAP175,
	FD_R_Y_MAP176,
	FD_R_Y_MAP177,
	FD_R_Y_MAP178,
	FD_R_Y_MAP179,
	FD_R_Y_MAP180,
	FD_R_Y_MAP181,
	FD_R_Y_MAP182,
	FD_R_Y_MAP183,
	FD_R_Y_MAP184,
	FD_R_Y_MAP185,
	FD_R_Y_MAP186,
	FD_R_Y_MAP187,
	FD_R_Y_MAP188,
	FD_R_Y_MAP189,
	FD_R_Y_MAP190,
	FD_R_Y_MAP191,
	FD_R_Y_MAP192,
	FD_R_Y_MAP193,
	FD_R_Y_MAP194,
	FD_R_Y_MAP195,
	FD_R_Y_MAP196,
	FD_R_Y_MAP197,
	FD_R_Y_MAP198,
	FD_R_Y_MAP199,
	FD_R_Y_MAP200,
	FD_R_Y_MAP201,
	FD_R_Y_MAP202,
	FD_R_Y_MAP203,
	FD_R_Y_MAP204,
	FD_R_Y_MAP205,
	FD_R_Y_MAP206,
	FD_R_Y_MAP207,
	FD_R_Y_MAP208,
	FD_R_Y_MAP209,
	FD_R_Y_MAP210,
	FD_R_Y_MAP211,
	FD_R_Y_MAP212,
	FD_R_Y_MAP213,
	FD_R_Y_MAP214,
	FD_R_Y_MAP215,
	FD_R_Y_MAP216,
	FD_R_Y_MAP217,
	FD_R_Y_MAP218,
	FD_R_Y_MAP219,
	FD_R_Y_MAP220,
	FD_R_Y_MAP221,
	FD_R_Y_MAP222,
	FD_R_Y_MAP223,
	FD_R_Y_MAP224,
	FD_R_Y_MAP225,
	FD_R_Y_MAP226,
	FD_R_Y_MAP227,
	FD_R_Y_MAP228,
	FD_R_Y_MAP229,
	FD_R_Y_MAP230,
	FD_R_Y_MAP231,
	FD_R_Y_MAP232,
	FD_R_Y_MAP233,
	FD_R_Y_MAP234,
	FD_R_Y_MAP235,
	FD_R_Y_MAP236,
	FD_R_Y_MAP237,
	FD_R_Y_MAP238,
	FD_R_Y_MAP239,
	FD_R_Y_MAP240,
	FD_R_Y_MAP241,
	FD_R_Y_MAP242,
	FD_R_Y_MAP243,
	FD_R_Y_MAP244,
	FD_R_Y_MAP245,
	FD_R_Y_MAP246,
	FD_R_Y_MAP247,
	FD_R_Y_MAP248,
	FD_R_Y_MAP249,
	FD_R_Y_MAP250,
	FD_R_Y_MAP251,
	FD_R_Y_MAP252,
	FD_R_Y_MAP253,
	FD_R_Y_MAP254,
	FD_R_Y_MAP255
};

static struct fimc_is_reg fd_regs[FD_REG_CNT] = {
	{0x0000, "VERSION"},
	{0x0004, "CTRL"},
	{0x0008, "AXI_CTRL"},
	{0x000C, "STATUS"},
	{0x0010, "INTSTATUS"},
	{0x0014, "INTMASK"},
	{0x0018, "SHADOW_CTRL"},
	{0x001C, "FRAME_END"},
	{0x0020, "REGISTER_01"},
	{0x0028, "CLIENT_VERSION"},
	{0x0034, "SHIFT"},
	{0x0038, "COEF_K"},
	{0x003C, "DS_SCALE_X"},
	{0x0040, "DS_SCALE_Y"},
	{0x0044, "START_Y"},
	{0x0048, "HEIGHT"},
	{0x004C, "START_X"},
	{0x0050, "WIDTH"},
	{0x0054, "MAP0_OUT_ADDRESS"},
	{0x0058, "MAP1_OUT_ADDRESS"},
	{0x005C, "MAP2_OUT_ADDRESS"},
	{0x0060, "MAP3_OUT_ADDRESS"},
	{0x0064, "MAP4_OUT_ADDRESS"},
	{0x0068, "MAP5_OUT_ADDRESS"},
	{0x006C, "MAP6_OUT_ADDRESS"},
	{0x0070, "MAP7_OUT_ADDRESS"},
	{0x0074, "OUTPUT_SIZE"},
	{0x0078, "RESULT_SAT"},
	{0x007C, "PB_Y_ADDRESS"},
	{0x0080, "PB_CB_ADDRESS"},
	{0x0084, "PB_CR_ADDRESS"},
	{0x0088, "PB_WIDTH"},
	{0x008C, "OUTPUT_WIDTH"},
	{0x0090, "OUTPUT_HEIGHT"},
	{0x0094, "OUTPUT_START_X"},
	{0x0098, "OUTPUT_START_Y"},
	{0x009C, "INPUT_SIZE"},
	{0x00A0, "SENSOR_CTRL"},
	{0x0C00, "Y_MAP0"},
	{0x0C04, "Y_MAP1"},
	{0x0C08, "Y_MAP2"},
	{0x0C0C, "Y_MAP3"},
	{0x0C10, "Y_MAP4"},
	{0x0C14, "Y_MAP5"},
	{0x0C18, "Y_MAP6"},
	{0x0C1C, "Y_MAP7"},
	{0x0C20, "Y_MAP8"},
	{0x0C24, "Y_MAP9"},
	{0x0C28, "Y_MAP10"},
	{0x0C2C, "Y_MAP11"},
	{0x0C30, "Y_MAP12"},
	{0x0C34, "Y_MAP13"},
	{0x0C38, "Y_MAP14"},
	{0x0C3C, "Y_MAP15"},
	{0x0C40, "Y_MAP16"},
	{0x0C44, "Y_MAP17"},
	{0x0C48, "Y_MAP18"},
	{0x0C4C, "Y_MAP19"},
	{0x0C50, "Y_MAP20"},
	{0x0C54, "Y_MAP21"},
	{0x0C58, "Y_MAP22"},
	{0x0C5C, "Y_MAP23"},
	{0x0C60, "Y_MAP24"},
	{0x0C64, "Y_MAP25"},
	{0x0C68, "Y_MAP26"},
	{0x0C6C, "Y_MAP27"},
	{0x0C70, "Y_MAP28"},
	{0x0C74, "Y_MAP29"},
	{0x0C78, "Y_MAP30"},
	{0x0C7C, "Y_MAP31"},
	{0x0C80, "Y_MAP32"},
	{0x0C84, "Y_MAP33"},
	{0x0C88, "Y_MAP34"},
	{0x0C8C, "Y_MAP35"},
	{0x0C90, "Y_MAP36"},
	{0x0C94, "Y_MAP37"},
	{0x0C98, "Y_MAP38"},
	{0x0C9C, "Y_MAP39"},
	{0x0CA0, "Y_MAP40"},
	{0x0CA4, "Y_MAP41"},
	{0x0CA8, "Y_MAP42"},
	{0x0CAC, "Y_MAP43"},
	{0x0CB0, "Y_MAP44"},
	{0x0CB4, "Y_MAP45"},
	{0x0CB8, "Y_MAP46"},
	{0x0CBC, "Y_MAP47"},
	{0x0CC0, "Y_MAP48"},
	{0x0CC4, "Y_MAP49"},
	{0x0CC8, "Y_MAP50"},
	{0x0CCC, "Y_MAP51"},
	{0x0CD0, "Y_MAP52"},
	{0x0CD4, "Y_MAP53"},
	{0x0CD8, "Y_MAP54"},
	{0x0CDC, "Y_MAP55"},
	{0x0CE0, "Y_MAP56"},
	{0x0CE4, "Y_MAP57"},
	{0x0CE8, "Y_MAP58"},
	{0x0CEC, "Y_MAP59"},
	{0x0CF0, "Y_MAP60"},
	{0x0CF4, "Y_MAP61"},
	{0x0CF8, "Y_MAP62"},
	{0x0CFC, "Y_MAP63"},
	{0x0D00, "Y_MAP64"},
	{0x0D04, "Y_MAP65"},
	{0x0D08, "Y_MAP66"},
	{0x0D0C, "Y_MAP67"},
	{0x0D10, "Y_MAP68"},
	{0x0D14, "Y_MAP69"},
	{0x0D18, "Y_MAP70"},
	{0x0D1C, "Y_MAP71"},
	{0x0D20, "Y_MAP72"},
	{0x0D24, "Y_MAP73"},
	{0x0D28, "Y_MAP74"},
	{0x0D2C, "Y_MAP75"},
	{0x0D30, "Y_MAP76"},
	{0x0D34, "Y_MAP77"},
	{0x0D38, "Y_MAP78"},
	{0x0D3C, "Y_MAP79"},
	{0x0D40, "Y_MAP80"},
	{0x0D44, "Y_MAP81"},
	{0x0D48, "Y_MAP82"},
	{0x0D4C, "Y_MAP83"},
	{0x0D50, "Y_MAP84"},
	{0x0D54, "Y_MAP85"},
	{0x0D58, "Y_MAP86"},
	{0x0D5C, "Y_MAP87"},
	{0x0D60, "Y_MAP88"},
	{0x0D64, "Y_MAP89"},
	{0x0D68, "Y_MAP90"},
	{0x0D6C, "Y_MAP91"},
	{0x0D70, "Y_MAP92"},
	{0x0D74, "Y_MAP93"},
	{0x0D78, "Y_MAP94"},
	{0x0D7C, "Y_MAP95"},
	{0x0D80, "Y_MAP96"},
	{0x0D84, "Y_MAP97"},
	{0x0D88, "Y_MAP98"},
	{0x0D8C, "Y_MAP99"},
	{0x0D90, "Y_MAP100"},
	{0x0D94, "Y_MAP101"},
	{0x0D98, "Y_MAP102"},
	{0x0D9C, "Y_MAP103"},
	{0x0DA0, "Y_MAP104"},
	{0x0DA4, "Y_MAP105"},
	{0x0DA8, "Y_MAP106"},
	{0x0DAC, "Y_MAP107"},
	{0x0DB0, "Y_MAP108"},
	{0x0DB4, "Y_MAP109"},
	{0x0DB8, "Y_MAP110"},
	{0x0DBC, "Y_MAP111"},
	{0x0DC0, "Y_MAP112"},
	{0x0DC4, "Y_MAP113"},
	{0x0DC8, "Y_MAP114"},
	{0x0DCC, "Y_MAP115"},
	{0x0DD0, "Y_MAP116"},
	{0x0DD4, "Y_MAP117"},
	{0x0DD8, "Y_MAP118"},
	{0x0DDC, "Y_MAP119"},
	{0x0DE0, "Y_MAP120"},
	{0x0DE4, "Y_MAP121"},
	{0x0DE8, "Y_MAP122"},
	{0x0DEC, "Y_MAP123"},
	{0x0DF0, "Y_MAP124"},
	{0x0DF4, "Y_MAP125"},
	{0x0DF8, "Y_MAP126"},
	{0x0DFC, "Y_MAP127"},
	{0x0E00, "Y_MAP128"},
	{0x0E04, "Y_MAP129"},
	{0x0E08, "Y_MAP130"},
	{0x0E0C, "Y_MAP131"},
	{0x0E10, "Y_MAP132"},
	{0x0E14, "Y_MAP133"},
	{0x0E18, "Y_MAP134"},
	{0x0E1C, "Y_MAP135"},
	{0x0E20, "Y_MAP136"},
	{0x0E24, "Y_MAP137"},
	{0x0E28, "Y_MAP138"},
	{0x0E2C, "Y_MAP139"},
	{0x0E30, "Y_MAP140"},
	{0x0E34, "Y_MAP141"},
	{0x0E38, "Y_MAP142"},
	{0x0E3C, "Y_MAP143"},
	{0x0E40, "Y_MAP144"},
	{0x0E44, "Y_MAP145"},
	{0x0E48, "Y_MAP146"},
	{0x0E4C, "Y_MAP147"},
	{0x0E50, "Y_MAP148"},
	{0x0E54, "Y_MAP149"},
	{0x0E58, "Y_MAP150"},
	{0x0E5C, "Y_MAP151"},
	{0x0E60, "Y_MAP152"},
	{0x0E64, "Y_MAP153"},
	{0x0E68, "Y_MAP154"},
	{0x0E6C, "Y_MAP155"},
	{0x0E70, "Y_MAP156"},
	{0x0E74, "Y_MAP157"},
	{0x0E78, "Y_MAP158"},
	{0x0E7C, "Y_MAP159"},
	{0x0E80, "Y_MAP160"},
	{0x0E84, "Y_MAP161"},
	{0x0E88, "Y_MAP162"},
	{0x0E8C, "Y_MAP163"},
	{0x0E90, "Y_MAP164"},
	{0x0E94, "Y_MAP165"},
	{0x0E98, "Y_MAP166"},
	{0x0E9C, "Y_MAP167"},
	{0x0EA0, "Y_MAP168"},
	{0x0EA4, "Y_MAP169"},
	{0x0EA8, "Y_MAP170"},
	{0x0EAC, "Y_MAP171"},
	{0x0EB0, "Y_MAP172"},
	{0x0EB4, "Y_MAP173"},
	{0x0EB8, "Y_MAP174"},
	{0x0EBC, "Y_MAP175"},
	{0x0EC0, "Y_MAP176"},
	{0x0EC4, "Y_MAP177"},
	{0x0EC8, "Y_MAP178"},
	{0x0ECC, "Y_MAP179"},
	{0x0ED0, "Y_MAP180"},
	{0x0ED4, "Y_MAP181"},
	{0x0ED8, "Y_MAP182"},
	{0x0EDC, "Y_MAP183"},
	{0x0EE0, "Y_MAP184"},
	{0x0EE4, "Y_MAP185"},
	{0x0EE8, "Y_MAP186"},
	{0x0EEC, "Y_MAP187"},
	{0x0EF0, "Y_MAP188"},
	{0x0EF4, "Y_MAP189"},
	{0x0EF8, "Y_MAP190"},
	{0x0EFC, "Y_MAP191"},
	{0x0F00, "Y_MAP192"},
	{0x0F04, "Y_MAP193"},
	{0x0F08, "Y_MAP194"},
	{0x0F0C, "Y_MAP195"},
	{0x0F10, "Y_MAP196"},
	{0x0F14, "Y_MAP197"},
	{0x0F18, "Y_MAP198"},
	{0x0F1C, "Y_MAP199"},
	{0x0F20, "Y_MAP200"},
	{0x0F24, "Y_MAP201"},
	{0x0F28, "Y_MAP202"},
	{0x0F2C, "Y_MAP203"},
	{0x0F30, "Y_MAP204"},
	{0x0F34, "Y_MAP205"},
	{0x0F38, "Y_MAP206"},
	{0x0F3C, "Y_MAP207"},
	{0x0F40, "Y_MAP208"},
	{0x0F44, "Y_MAP209"},
	{0x0F48, "Y_MAP210"},
	{0x0F4C, "Y_MAP211"},
	{0x0F50, "Y_MAP212"},
	{0x0F54, "Y_MAP213"},
	{0x0F58, "Y_MAP214"},
	{0x0F5C, "Y_MAP215"},
	{0x0F60, "Y_MAP216"},
	{0x0F64, "Y_MAP217"},
	{0x0F68, "Y_MAP218"},
	{0x0F6C, "Y_MAP219"},
	{0x0F70, "Y_MAP220"},
	{0x0F74, "Y_MAP221"},
	{0x0F78, "Y_MAP222"},
	{0x0F7C, "Y_MAP223"},
	{0x0F80, "Y_MAP224"},
	{0x0F84, "Y_MAP225"},
	{0x0F88, "Y_MAP226"},
	{0x0F8C, "Y_MAP227"},
	{0x0F90, "Y_MAP228"},
	{0x0F94, "Y_MAP229"},
	{0x0F98, "Y_MAP230"},
	{0x0F9C, "Y_MAP231"},
	{0x0FA0, "Y_MAP232"},
	{0x0FA4, "Y_MAP233"},
	{0x0FA8, "Y_MAP234"},
	{0x0FAC, "Y_MAP235"},
	{0x0FB0, "Y_MAP236"},
	{0x0FB4, "Y_MAP237"},
	{0x0FB8, "Y_MAP238"},
	{0x0FBC, "Y_MAP239"},
	{0x0FC0, "Y_MAP240"},
	{0x0FC4, "Y_MAP241"},
	{0x0FC8, "Y_MAP242"},
	{0x0FCC, "Y_MAP243"},
	{0x0FD0, "Y_MAP244"},
	{0x0FD4, "Y_MAP245"},
	{0x0FD8, "Y_MAP246"},
	{0x0FDC, "Y_MAP247"},
	{0x0FE0, "Y_MAP248"},
	{0x0FE4, "Y_MAP249"},
	{0x0FE8, "Y_MAP250"},
	{0x0FEC, "Y_MAP251"},
	{0x0FF0, "Y_MAP252"},
	{0x0FF4, "Y_MAP253"},
	{0x0FF8, "Y_MAP254"},
	{0x0FFC, "Y_MAP255"}
};

#define FD_REG_FIELD_CNT 354
enum fimc_is_fd_reg_field {
	FD_F_VERSION,
	FD_F_START,
	FD_F_SOFTWARERESET,
	FD_F_ENDIANNESS,
	FD_F_INTERRUPTTYPE,
	FD_F_LP_ENABLE,
	FD_F_ONESHOT,
	FD_F_FIELD_01,
	FD_F_BURSTSIZE,
	FD_F_PENDINGWRITEREQUESTS,
	FD_F_PENDINGREADREQUESTS,
	FD_F_WRITECOMPLETE,
	FD_F_BUF0OVERFLOW,
	FD_F_BUF1OVERFLOW,
	FD_F_BUF2OVERFLOW,
	FD_F_BUF3OVERFLOW,
	FD_F_BUF4OVERFLOW,
	FD_F_BUF5OVERFLOW,
	FD_F_BUF6OVERFLOW,
	FD_F_BUF7OVERFLOW,
	FD_F_BUF8OVERFLOW,
	FD_F_BUF9OVERFLOW,
	FD_F_BUF10OVERFLOW,
	FD_F_AXI_ERROR,
	FD_F_IS_DONE,
	FD_F_IS_AXI_ERROR,
	FD_F_IS_BUFFERSFULL,
	FD_F_IS_AXI_ENTERIDLE,
	FD_F_IS_AXI_EXITIDLE,
	FD_F_IS_SHADOWCONDITION,
	FD_F_IS_SHADOWHWCONDITION,
	FD_F_IS_TRIGGERCONDITION,
	FD_F_IS_RDMACLEANUP,
	FD_F_IS_SOFTWARERESETDONE,
	FD_F_IS_STARTPROCESSING,
	FD_F_IS_VSYNCFALLING,
	FD_F_IM_DONE,
	FD_F_IM_AXI_ERROR,
	FD_F_IM_BUFFERSFULL,
	FD_F_IM_AXI_ENTERIDLE,
	FD_F_IM_AXI_EXITIDLE,
	FD_F_IM_SHADOWCONDITION,
	FD_F_IM_SHADOWHWCONDITION,
	FD_F_IM_TRIGGERCONDITION,
	FD_F_IM_RDMACLEANUP,
	FD_F_IM_SOFTWARERESETDONE,
	FD_F_IM_STARTPROCESSING,
	FD_F_IM_VSYNCFALLING,
	FD_F_SHADOWMODE,
	FD_F_FIELD_02,
	FD_F_SHADOWSW,
	FD_F_SHADOWDISABLE,
	FD_F_SHADOWTRIGGERMODE,
	FD_F_SHADOWENABLEMODE,
	FD_F_FIELD_03,
	FD_F_PROGRAMMODERAM,
	FD_F_SELREGISTERMODE,
	FD_F_FRAMEENDTOTRIGGER,
	FD_F_FIELD_04,
	FD_F_CLIENTVERSION,
	FD_F_SHIFT,
	FD_F_COEFK,
	FD_F_DSSCALEX,
	FD_F_DSSCALEY,
	FD_F_STARTY,
	FD_F_HEIGHT,
	FD_F_STARTX,
	FD_F_WIDTH,
	FD_F_MAP0ADDRESS,
	FD_F_MAP1ADDRESS,
	FD_F_MAP2ADDRESS,
	FD_F_MAP3ADDRESS,
	FD_F_MAP4ADDRESS,
	FD_F_MAP5ADDRESS,
	FD_F_MAP6ADDRESS,
	FD_F_MAP7ADDRESS,
	FD_F_OUTPUTSIZE,
	FD_F_SAT,
	FD_F_PBYADDRESS,
	FD_F_PBCBADDRESS,
	FD_F_PBCRADDRESS,
	FD_F_PBWIDTH,
	FD_F_OUTPUTWIDTH,
	FD_F_OUTPUTHEIGHT,
	FD_F_OUTPUTSTARTX,
	FD_F_OUTPUTSTARTY,
	FD_F_INPUTSIZE,
	FD_F_FIELD_05,
	FD_F_FIELD_06,
	FD_F_FIELD_07,
	FD_F_FIELD_08,
	FD_F_PLAYBACKMODE,
	FD_F_YCC_FORMAT,
	FD_F_CBALIGNMENT,
	FD_F_CRALIGNMENT,
	FD_F_NUMPLANES,
	FD_F_CHROMALINE,
	FD_F_SKIPFRAMES,
	FD_F_Y_MAP0,
	FD_F_Y_MAP1,
	FD_F_Y_MAP2,
	FD_F_Y_MAP3,
	FD_F_Y_MAP4,
	FD_F_Y_MAP5,
	FD_F_Y_MAP6,
	FD_F_Y_MAP7,
	FD_F_Y_MAP8,
	FD_F_Y_MAP9,
	FD_F_Y_MAP10,
	FD_F_Y_MAP11,
	FD_F_Y_MAP12,
	FD_F_Y_MAP13,
	FD_F_Y_MAP14,
	FD_F_Y_MAP15,
	FD_F_Y_MAP16,
	FD_F_Y_MAP17,
	FD_F_Y_MAP18,
	FD_F_Y_MAP19,
	FD_F_Y_MAP20,
	FD_F_Y_MAP21,
	FD_F_Y_MAP22,
	FD_F_Y_MAP23,
	FD_F_Y_MAP24,
	FD_F_Y_MAP25,
	FD_F_Y_MAP26,
	FD_F_Y_MAP27,
	FD_F_Y_MAP28,
	FD_F_Y_MAP29,
	FD_F_Y_MAP30,
	FD_F_Y_MAP31,
	FD_F_Y_MAP32,
	FD_F_Y_MAP33,
	FD_F_Y_MAP34,
	FD_F_Y_MAP35,
	FD_F_Y_MAP36,
	FD_F_Y_MAP37,
	FD_F_Y_MAP38,
	FD_F_Y_MAP39,
	FD_F_Y_MAP40,
	FD_F_Y_MAP41,
	FD_F_Y_MAP42,
	FD_F_Y_MAP43,
	FD_F_Y_MAP44,
	FD_F_Y_MAP45,
	FD_F_Y_MAP46,
	FD_F_Y_MAP47,
	FD_F_Y_MAP48,
	FD_F_Y_MAP49,
	FD_F_Y_MAP50,
	FD_F_Y_MAP51,
	FD_F_Y_MAP52,
	FD_F_Y_MAP53,
	FD_F_Y_MAP54,
	FD_F_Y_MAP55,
	FD_F_Y_MAP56,
	FD_F_Y_MAP57,
	FD_F_Y_MAP58,
	FD_F_Y_MAP59,
	FD_F_Y_MAP60,
	FD_F_Y_MAP61,
	FD_F_Y_MAP62,
	FD_F_Y_MAP63,
	FD_F_Y_MAP64,
	FD_F_Y_MAP65,
	FD_F_Y_MAP66,
	FD_F_Y_MAP67,
	FD_F_Y_MAP68,
	FD_F_Y_MAP69,
	FD_F_Y_MAP70,
	FD_F_Y_MAP71,
	FD_F_Y_MAP72,
	FD_F_Y_MAP73,
	FD_F_Y_MAP74,
	FD_F_Y_MAP75,
	FD_F_Y_MAP76,
	FD_F_Y_MAP77,
	FD_F_Y_MAP78,
	FD_F_Y_MAP79,
	FD_F_Y_MAP80,
	FD_F_Y_MAP81,
	FD_F_Y_MAP82,
	FD_F_Y_MAP83,
	FD_F_Y_MAP84,
	FD_F_Y_MAP85,
	FD_F_Y_MAP86,
	FD_F_Y_MAP87,
	FD_F_Y_MAP88,
	FD_F_Y_MAP89,
	FD_F_Y_MAP90,
	FD_F_Y_MAP91,
	FD_F_Y_MAP92,
	FD_F_Y_MAP93,
	FD_F_Y_MAP94,
	FD_F_Y_MAP95,
	FD_F_Y_MAP96,
	FD_F_Y_MAP97,
	FD_F_Y_MAP98,
	FD_F_Y_MAP99,
	FD_F_Y_MAP100,
	FD_F_Y_MAP101,
	FD_F_Y_MAP102,
	FD_F_Y_MAP103,
	FD_F_Y_MAP104,
	FD_F_Y_MAP105,
	FD_F_Y_MAP106,
	FD_F_Y_MAP107,
	FD_F_Y_MAP108,
	FD_F_Y_MAP109,
	FD_F_Y_MAP110,
	FD_F_Y_MAP111,
	FD_F_Y_MAP112,
	FD_F_Y_MAP113,
	FD_F_Y_MAP114,
	FD_F_Y_MAP115,
	FD_F_Y_MAP116,
	FD_F_Y_MAP117,
	FD_F_Y_MAP118,
	FD_F_Y_MAP119,
	FD_F_Y_MAP120,
	FD_F_Y_MAP121,
	FD_F_Y_MAP122,
	FD_F_Y_MAP123,
	FD_F_Y_MAP124,
	FD_F_Y_MAP125,
	FD_F_Y_MAP126,
	FD_F_Y_MAP127,
	FD_F_Y_MAP128,
	FD_F_Y_MAP129,
	FD_F_Y_MAP130,
	FD_F_Y_MAP131,
	FD_F_Y_MAP132,
	FD_F_Y_MAP133,
	FD_F_Y_MAP134,
	FD_F_Y_MAP135,
	FD_F_Y_MAP136,
	FD_F_Y_MAP137,
	FD_F_Y_MAP138,
	FD_F_Y_MAP139,
	FD_F_Y_MAP140,
	FD_F_Y_MAP141,
	FD_F_Y_MAP142,
	FD_F_Y_MAP143,
	FD_F_Y_MAP144,
	FD_F_Y_MAP145,
	FD_F_Y_MAP146,
	FD_F_Y_MAP147,
	FD_F_Y_MAP148,
	FD_F_Y_MAP149,
	FD_F_Y_MAP150,
	FD_F_Y_MAP151,
	FD_F_Y_MAP152,
	FD_F_Y_MAP153,
	FD_F_Y_MAP154,
	FD_F_Y_MAP155,
	FD_F_Y_MAP156,
	FD_F_Y_MAP157,
	FD_F_Y_MAP158,
	FD_F_Y_MAP159,
	FD_F_Y_MAP160,
	FD_F_Y_MAP161,
	FD_F_Y_MAP162,
	FD_F_Y_MAP163,
	FD_F_Y_MAP164,
	FD_F_Y_MAP165,
	FD_F_Y_MAP166,
	FD_F_Y_MAP167,
	FD_F_Y_MAP168,
	FD_F_Y_MAP169,
	FD_F_Y_MAP170,
	FD_F_Y_MAP171,
	FD_F_Y_MAP172,
	FD_F_Y_MAP173,
	FD_F_Y_MAP174,
	FD_F_Y_MAP175,
	FD_F_Y_MAP176,
	FD_F_Y_MAP177,
	FD_F_Y_MAP178,
	FD_F_Y_MAP179,
	FD_F_Y_MAP180,
	FD_F_Y_MAP181,
	FD_F_Y_MAP182,
	FD_F_Y_MAP183,
	FD_F_Y_MAP184,
	FD_F_Y_MAP185,
	FD_F_Y_MAP186,
	FD_F_Y_MAP187,
	FD_F_Y_MAP188,
	FD_F_Y_MAP189,
	FD_F_Y_MAP190,
	FD_F_Y_MAP191,
	FD_F_Y_MAP192,
	FD_F_Y_MAP193,
	FD_F_Y_MAP194,
	FD_F_Y_MAP195,
	FD_F_Y_MAP196,
	FD_F_Y_MAP197,
	FD_F_Y_MAP198,
	FD_F_Y_MAP199,
	FD_F_Y_MAP200,
	FD_F_Y_MAP201,
	FD_F_Y_MAP202,
	FD_F_Y_MAP203,
	FD_F_Y_MAP204,
	FD_F_Y_MAP205,
	FD_F_Y_MAP206,
	FD_F_Y_MAP207,
	FD_F_Y_MAP208,
	FD_F_Y_MAP209,
	FD_F_Y_MAP210,
	FD_F_Y_MAP211,
	FD_F_Y_MAP212,
	FD_F_Y_MAP213,
	FD_F_Y_MAP214,
	FD_F_Y_MAP215,
	FD_F_Y_MAP216,
	FD_F_Y_MAP217,
	FD_F_Y_MAP218,
	FD_F_Y_MAP219,
	FD_F_Y_MAP220,
	FD_F_Y_MAP221,
	FD_F_Y_MAP222,
	FD_F_Y_MAP223,
	FD_F_Y_MAP224,
	FD_F_Y_MAP225,
	FD_F_Y_MAP226,
	FD_F_Y_MAP227,
	FD_F_Y_MAP228,
	FD_F_Y_MAP229,
	FD_F_Y_MAP230,
	FD_F_Y_MAP231,
	FD_F_Y_MAP232,
	FD_F_Y_MAP233,
	FD_F_Y_MAP234,
	FD_F_Y_MAP235,
	FD_F_Y_MAP236,
	FD_F_Y_MAP237,
	FD_F_Y_MAP238,
	FD_F_Y_MAP239,
	FD_F_Y_MAP240,
	FD_F_Y_MAP241,
	FD_F_Y_MAP242,
	FD_F_Y_MAP243,
	FD_F_Y_MAP244,
	FD_F_Y_MAP245,
	FD_F_Y_MAP246,
	FD_F_Y_MAP247,
	FD_F_Y_MAP248,
	FD_F_Y_MAP249,
	FD_F_Y_MAP250,
	FD_F_Y_MAP251,
	FD_F_Y_MAP252,
	FD_F_Y_MAP253,
	FD_F_Y_MAP254,
	FD_F_Y_MAP255
};

static struct fimc_is_field fd_fields[FD_REG_FIELD_CNT] = {
	/* 1. field_name 2. bit start 3. bit width 4. access type 5. reset */
	{"VERSION",			0,	16,	RO,	262},		/* VERSION */
	{"START", 			0,	1,	RW,	0},		/* CTRL */
	{"SOFTWARERESET",		1,	1,	RW,	0},		/* CTRL */
	{"ENDIANNESS",			2,	1,	RW,	0},		/* CTRL */
	{"INTERRUPTTYPE",		3,	1,	RW,	0},		/* CTRL */
	{"LP_ENABLE",			4,	1,	RW,	0},		/* CTRL */
	{"ONESHOT",			5,	1,	RW,	0},		/* CTRL */
	{"FD_FIELD_01",			6,	1,	RW,	0},		/* CTRL */
	{"BURSTSIZE",			0,	2,	RW,	0},		/* AXI_CTRL */
	{"PENDINGWRITEREQUESTS",	2,	3,	RW,	0},		/* AXI_CTRL */
	{"PENDINGREADREQUESTS",		5,	3,	RW,	0},		/* AXI_CTRL */
	{"WRITECOMPLETE",		0,	1,	RAC,	0},		/* STATUS */
	{"BUF0OVERFLOW",		1,	1,	RAC,	0},		/* STATUS */
	{"BUF1OVERFLOW",		2,	1,	RAC,	0},		/* STATUS */
	{"BUF2OVERFLOW",		3,	1,	RAC,	0},		/* STATUS */
	{"BUF3OVERFLOW",		4,	1,	RAC,	0},		/* STATUS */
	{"BUF4OVERFLOW",		5,	1,	RAC,	0},		/* STATUS */
	{"BUF5OVERFLOW",		6,	1,	RAC,	0},		/* STATUS */
	{"BUF6OVERFLOW",		7,	1,	RAC,	0},		/* STATUS */
	{"BUF7OVERFLOW",		8,	1,	RAC,	0},		/* STATUS */
	{"BUF8OVERFLOW",		9,	1,	RAC,	0},		/* STATUS */
	{"BUF9OVERFLOW",		10,	1,	RAC,	0},		/* STATUS */
	{"BUF10OVERFLOW",		11,	1,	RAC,	0},		/* STATUS */
	{"AXI_ERROR",			12,	1,	RAC,	0},		/* STATUS */
	{"IS_DONE",			0,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_AXI_ERROR",		1,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_BUFFERSFULL",		2,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_AXI_ENTERIDLE",		3,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_AXI_EXITIDLE",		4,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_SHADOWCONDITION",		5,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_SHADOWHWCONDITION",	6,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_TRIGGERCONDITION",		7,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_RDMACLEANUP",		8,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_SOFTWARERESETDONE",	9,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_STARTPROCESSING",		10,	1,	RWC,	0},		/* INTSTATUS */
	{"IS_VSYNCFALLING",		11,	1,	RWC,	0},		/* INTSTATUS */
	{"IM_DONE",			0,	1,	RW,	0},		/* INTMASK */
	{"IM_AXI_ERROR",		1,	1,	RW,	0},		/* INTMASK */
	{"IM_BUFFERSFULL",		2,	1,	RW,	0},		/* INTMASK */
	{"IM_AXI_ENTERIDLE",		3,	1,	RW,	0},		/* INTMASK */
	{"IM_AXI_EXITIDLE",		4,	1,	RW,	0},		/* INTMASK */
	{"IM_SHADOWCONDITION",		5,	1,	RW,	0},		/* INTMASK */
	{"IM_SHADOWHWCONDITION",	6,	1,	RW,	0},		/* INTMASK */
	{"IM_TRIGGERCONDITION",		7,	1,	RW,	0},		/* INTMASK */
	{"IM_RDMACLEANUP",		8,	1,	RW,	0},		/* INTMASK */
	{"IM_SOFTWARERESETDONE",	9,	1,	RW,	0},		/* INTMASK */
	{"IM_STARTPROCESSING",		10,	1,	RW,	0},		/* INTMASK */
	{"IM_VSYNCFALLING",		11,	1,	RW,	0},		/* INTMASK */
	{"SHADOWMODE",			0,	1,	RW,	0},		/* SHADOW_CTRL */
	{"FD_FIELD_02",			1,	1,	RW,	0},		/* SHADOW_CTRL */
	{"SHADOWSW",			2,	1,	RW,	0},		/* SHADOW_CTRL */
	{"SHADOWDISABLE",		3,	1,	RW,	0},		/* SHADOW_CTRL */
	{"SHADOWTRIGGERMODE",		4,	1,	RW,	0},		/* SHADOW_CTRL */
	{"SHADOWENABLEMODE",		5,	1,	RW,	0},		/* SHADOW_CTRL */
	{"FD_FIELD_03",			6,	1,	RW,	0},		/* SHADOW_CTRL */
	{"PROGRAMMODERAM",		7,	1,	RW,	0},		/* SHADOW_CTRL */
	{"SELREGISTERMODE",		8,	1,	RW,	0},		/* SHADOW_CTRL */
	{"FRAMEENDTOTRIGGER",		0,	32,	RW,	15},		/* FRAME_END */
	{"FD_FIELD_04",			0,	1,	RW,	0},		/* REGISTER_01 */
	{"CLIENTVERSION",		0,	32,	RO,	16843008},	/* CLIENT_VERSION */
	{"SHIFT",			0,	3,	RW,	0},		/* SHIFT */
	{"COEFK",			0,	8,	RW,	15},		/* COEF_K */
	{"DSSCALEX",			0,	12,	RW,	256},		/* DS_SCALE_X */
	{"DSSCALEY",			0,	12,	RW,	256},		/* DS_SCALE_Y */
	{"STARTY",			0,	13,	RW,	0},		/* FD_START_Y */
	{"HEIGHT",			0,	13,	RW,	480},		/* FD_HEIGHT */
	{"STARTX",			0,	13,	RW,	0},		/* FD_START_X */
	{"WIDTH",			0,	13,	RW,	640},		/* WIDTH */
	{"MAP0ADDRESS",			0,	32,	RW,	0},		/* MAP0_OUT_ADDRESS */
	{"MAP1ADDRESS",			0,	32,	RW,	0},		/* MAP1_OUT_ADDRESS */
	{"MAP2ADDRESS",			0,	32,	RW,	0},		/* MAP2_OUT_ADDRESS */
	{"MAP3ADDRESS",			0,	32,	RW,	0},		/* MAP3_OUT_ADDRESS */
	{"MAP4ADDRESS",			0,	32,	RW,	0},		/* MAP4_OUT_ADDRESS */
	{"MAP5ADDRESS",			0,	32,	RW,	0},		/* MAP5_OUT_ADDRESS */
	{"MAP6ADDRESS",			0,	32,	RW,	0},		/* MAP6_OUT_ADDRESS */
	{"MAP7ADDRESS",			0,	32,	RW,	0},		/* MAP7_OUT_ADDRESS */
	{"OUTPUTSIZE",			0,	19,	RW,	307200},	/* OUTPUT_SIZE */
	{"SAT",				0,	32,	RO,	0},		/* RESULT_SAT */
	{"PBYADDRESS",			0,	32,	RW,	0},		/* PB_Y_ADDRESS */
	{"PBCBADDRESS",			0,	32,	RW,	0},		/* PB_CB_ADDRESS */
	{"PBCRADDRESS",			0,	32,	RW,	0},		/* PB_CR_ADDRESS */
	{"PBWIDTH",			0,	13,	RW,	640},		/* PB_WIDTH */
	{"OUTPUTWIDTH",			0,	10,	RW,	0},		/* OUTPUT_WIDTH */
	{"OUTPUTHEIGHT",		0,	10,	RW,	0},		/* OUTPUT_HEIGHT */
	{"OUTPUTSTARTX",		0,	8,	RW,	0},		/* OUTPUT_START_X */
	{"OUTPUTSTARTY",		0,	8,	RW,	0},		/* OUTPUT_START_Y */
	{"INPUTSIZE",			0,	26,	RW,	0},		/* INPUT_SIZE */
	{"FD_FIELD_05",			0,	1,	RW,	0},		/* SENSOR_CTRL */
	{"FD_FIELD_06",			1,	1,	RW,	0},		/* SENSOR_CTRL */
	{"FD_FIELD_07",			2,	1,	RW,	0},		/* SENSOR_CTRL */
	{"FD_FIELD_08",			3,	1,	RW,	0},		/* SENSOR_CTRL */
	{"PLAYBACKMODE",		4,	1,	RW,	0},		/* SENSOR_CTRL */
	{"YCC_FORMAT",			5,	2,	RW,	0},		/* SENSOR_CTRL */
	{"CBALIGNMENT",			7,	1,	RW,	0},		/* SENSOR_CTRL */
	{"CRALIGNMENT",			8,	1,	RW,	0},		/* SENSOR_CTRL */
	{"NUMPLANES",			9,	2,	RW,	0},		/* SENSOR_CTRL */
	{"CHROMALINE",			11,	1,	RW,	0},		/* SENSOR_CTRL */
	{"SKIPFRAMES",			12,	4,	RW,	0},		/* SENSOR_CTRL */
	{"Y_MAP0",			0,	8,	RW,	0},
	{"Y_MAP1",			0,	8,	RW,	0},
	{"Y_MAP2",			0,	8,	RW,	0},
	{"Y_MAP3",			0,	8,	RW,	0},
	{"Y_MAP4",			0,	8,	RW,	0},
	{"Y_MAP5",			0,	8,	RW,	0},
	{"Y_MAP6",			0,	8,	RW,	0},
	{"Y_MAP7",			0,	8,	RW,	0},
	{"Y_MAP8",			0,	8,	RW,	0},
	{"Y_MAP9",			0,	8,	RW,	0},
	{"Y_MAP10",			0,	8,	RW,	0},
	{"Y_MAP11",			0,	8,	RW,	0},
	{"Y_MAP12",			0,	8,	RW,	0},
	{"Y_MAP13",			0,	8,	RW,	0},
	{"Y_MAP14",			0,	8,	RW,	0},
	{"Y_MAP15",			0,	8,	RW,	0},
	{"Y_MAP16",			0,	8,	RW,	0},
	{"Y_MAP17",			0,	8,	RW,	0},
	{"Y_MAP18",			0,	8,	RW,	0},
	{"Y_MAP19",			0,	8,	RW,	0},
	{"Y_MAP20",			0,	8,	RW,	0},
	{"Y_MAP21",			0,	8,	RW,	0},
	{"Y_MAP22",			0,	8,	RW,	0},
	{"Y_MAP23",			0,	8,	RW,	0},
	{"Y_MAP24",			0,	8,	RW,	0},
	{"Y_MAP25",			0,	8,	RW,	0},
	{"Y_MAP26",			0,	8,	RW,	0},
	{"Y_MAP27",			0,	8,	RW,	0},
	{"Y_MAP28",			0,	8,	RW,	0},
	{"Y_MAP29",			0,	8,	RW,	0},
	{"Y_MAP30",			0,	8,	RW,	0},
	{"Y_MAP31",			0,	8,	RW,	0},
	{"Y_MAP32",			0,	8,	RW,	0},
	{"Y_MAP33",			0,	8,	RW,	0},
	{"Y_MAP34",			0,	8,	RW,	0},
	{"Y_MAP35",			0,	8,	RW,	0},
	{"Y_MAP36",			0,	8,	RW,	0},
	{"Y_MAP37",			0,	8,	RW,	0},
	{"Y_MAP38",			0,	8,	RW,	0},
	{"Y_MAP39",			0,	8,	RW,	0},
	{"Y_MAP40",			0,	8,	RW,	0},
	{"Y_MAP41",			0,	8,	RW,	0},
	{"Y_MAP42",			0,	8,	RW,	0},
	{"Y_MAP43",			0,	8,	RW,	0},
	{"Y_MAP44",			0,	8,	RW,	0},
	{"Y_MAP45",			0,	8,	RW,	0},
	{"Y_MAP46",			0,	8,	RW,	0},
	{"Y_MAP47",			0,	8,	RW,	0},
	{"Y_MAP48",			0,	8,	RW,	0},
	{"Y_MAP49",			0,	8,	RW,	0},
	{"Y_MAP50",			0,	8,	RW,	0},
	{"Y_MAP51",			0,	8,	RW,	0},
	{"Y_MAP52",			0,	8,	RW,	0},
	{"Y_MAP53",			0,	8,	RW,	0},
	{"Y_MAP54",			0,	8,	RW,	0},
	{"Y_MAP55",			0,	8,	RW,	0},
	{"Y_MAP56",			0,	8,	RW,	0},
	{"Y_MAP57",			0,	8,	RW,	0},
	{"Y_MAP58",			0,	8,	RW,	0},
	{"Y_MAP59",			0,	8,	RW,	0},
	{"Y_MAP60",			0,	8,	RW,	0},
	{"Y_MAP61",			0,	8,	RW,	0},
	{"Y_MAP62",			0,	8,	RW,	0},
	{"Y_MAP63",			0,	8,	RW,	0},
	{"Y_MAP64",			0,	8,	RW,	0},
	{"Y_MAP65",			0,	8,	RW,	0},
	{"Y_MAP66",			0,	8,	RW,	0},
	{"Y_MAP67",			0,	8,	RW,	0},
	{"Y_MAP68",			0,	8,	RW,	0},
	{"Y_MAP69",			0,	8,	RW,	0},
	{"Y_MAP70",			0,	8,	RW,	0},
	{"Y_MAP71",			0,	8,	RW,	0},
	{"Y_MAP72",			0,	8,	RW,	0},
	{"Y_MAP73",			0,	8,	RW,	0},
	{"Y_MAP74",			0,	8,	RW,	0},
	{"Y_MAP75",			0,	8,	RW,	0},
	{"Y_MAP76",			0,	8,	RW,	0},
	{"Y_MAP77",			0,	8,	RW,	0},
	{"Y_MAP78",			0,	8,	RW,	0},
	{"Y_MAP79",			0,	8,	RW,	0},
	{"Y_MAP80",			0,	8,	RW,	0},
	{"Y_MAP81",			0,	8,	RW,	0},
	{"Y_MAP82",			0,	8,	RW,	0},
	{"Y_MAP83",			0,	8,	RW,	0},
	{"Y_MAP84",			0,	8,	RW,	0},
	{"Y_MAP85",			0,	8,	RW,	0},
	{"Y_MAP86",			0,	8,	RW,	0},
	{"Y_MAP87",			0,	8,	RW,	0},
	{"Y_MAP88",			0,	8,	RW,	0},
	{"Y_MAP89",			0,	8,	RW,	0},
	{"Y_MAP90",			0,	8,	RW,	0},
	{"Y_MAP91",			0,	8,	RW,	0},
	{"Y_MAP92",			0,	8,	RW,	0},
	{"Y_MAP93",			0,	8,	RW,	0},
	{"Y_MAP94",			0,	8,	RW,	0},
	{"Y_MAP95",			0,	8,	RW,	0},
	{"Y_MAP96",			0,	8,	RW,	0},
	{"Y_MAP97",			0,	8,	RW,	0},
	{"Y_MAP98",			0,	8,	RW,	0},
	{"Y_MAP99",			0,	8,	RW,	0},
	{"Y_MAP100",			0,	8,	RW,	0},
	{"Y_MAP101",			0,	8,	RW,	0},
	{"Y_MAP102",			0,	8,	RW,	0},
	{"Y_MAP103",			0,	8,	RW,	0},
	{"Y_MAP104",			0,	8,	RW,	0},
	{"Y_MAP105",			0,	8,	RW,	0},
	{"Y_MAP106",			0,	8,	RW,	0},
	{"Y_MAP107",			0,	8,	RW,	0},
	{"Y_MAP108",			0,	8,	RW,	0},
	{"Y_MAP109",			0,	8,	RW,	0},
	{"Y_MAP110",			0,	8,	RW,	0},
	{"Y_MAP111",			0,	8,	RW,	0},
	{"Y_MAP112",			0,	8,	RW,	0},
	{"Y_MAP113",			0,	8,	RW,	0},
	{"Y_MAP114",			0,	8,	RW,	0},
	{"Y_MAP115",			0,	8,	RW,	0},
	{"Y_MAP116",			0,	8,	RW,	0},
	{"Y_MAP117",			0,	8,	RW,	0},
	{"Y_MAP118",			0,	8,	RW,	0},
	{"Y_MAP119",			0,	8,	RW,	0},
	{"Y_MAP120",			0,	8,	RW,	0},
	{"Y_MAP121",			0,	8,	RW,	0},
	{"Y_MAP122",			0,	8,	RW,	0},
	{"Y_MAP123",			0,	8,	RW,	0},
	{"Y_MAP124",			0,	8,	RW,	0},
	{"Y_MAP125",			0,	8,	RW,	0},
	{"Y_MAP126",			0,	8,	RW,	0},
	{"Y_MAP127",			0,	8,	RW,	0},
	{"Y_MAP128",			0,	8,	RW,	0},
	{"Y_MAP129",			0,	8,	RW,	0},
	{"Y_MAP130",			0,	8,	RW,	0},
	{"Y_MAP131",			0,	8,	RW,	0},
	{"Y_MAP132",			0,	8,	RW,	0},
	{"Y_MAP133",			0,	8,	RW,	0},
	{"Y_MAP134",			0,	8,	RW,	0},
	{"Y_MAP135",			0,	8,	RW,	0},
	{"Y_MAP136",			0,	8,	RW,	0},
	{"Y_MAP137",			0,	8,	RW,	0},
	{"Y_MAP138",			0,	8,	RW,	0},
	{"Y_MAP139",			0,	8,	RW,	0},
	{"Y_MAP140",			0,	8,	RW,	0},
	{"Y_MAP141",			0,	8,	RW,	0},
	{"Y_MAP142",			0,	8,	RW,	0},
	{"Y_MAP143",			0,	8,	RW,	0},
	{"Y_MAP144",			0,	8,	RW,	0},
	{"Y_MAP145",			0,	8,	RW,	0},
	{"Y_MAP146",			0,	8,	RW,	0},
	{"Y_MAP147",			0,	8,	RW,	0},
	{"Y_MAP148",			0,	8,	RW,	0},
	{"Y_MAP149",			0,	8,	RW,	0},
	{"Y_MAP150",			0,	8,	RW,	0},
	{"Y_MAP151",			0,	8,	RW,	0},
	{"Y_MAP152",			0,	8,	RW,	0},
	{"Y_MAP153",			0,	8,	RW,	0},
	{"Y_MAP154",			0,	8,	RW,	0},
	{"Y_MAP155",			0,	8,	RW,	0},
	{"Y_MAP156",			0,	8,	RW,	0},
	{"Y_MAP157",			0,	8,	RW,	0},
	{"Y_MAP158",			0,	8,	RW,	0},
	{"Y_MAP159",			0,	8,	RW,	0},
	{"Y_MAP160",			0,	8,	RW,	0},
	{"Y_MAP161",			0,	8,	RW,	0},
	{"Y_MAP162",			0,	8,	RW,	0},
	{"Y_MAP163",			0,	8,	RW,	0},
	{"Y_MAP164",			0,	8,	RW,	0},
	{"Y_MAP165",			0,	8,	RW,	0},
	{"Y_MAP166",			0,	8,	RW,	0},
	{"Y_MAP167",			0,	8,	RW,	0},
	{"Y_MAP168",			0,	8,	RW,	0},
	{"Y_MAP169",			0,	8,	RW,	0},
	{"Y_MAP170",			0,	8,	RW,	0},
	{"Y_MAP171",			0,	8,	RW,	0},
	{"Y_MAP172",			0,	8,	RW,	0},
	{"Y_MAP173",			0,	8,	RW,	0},
	{"Y_MAP174",			0,	8,	RW,	0},
	{"Y_MAP175",			0,	8,	RW,	0},
	{"Y_MAP176",			0,	8,	RW,	0},
	{"Y_MAP177",			0,	8,	RW,	0},
	{"Y_MAP178",			0,	8,	RW,	0},
	{"Y_MAP179",			0,	8,	RW,	0},
	{"Y_MAP180",			0,	8,	RW,	0},
	{"Y_MAP181",			0,	8,	RW,	0},
	{"Y_MAP182",			0,	8,	RW,	0},
	{"Y_MAP183",			0,	8,	RW,	0},
	{"Y_MAP184",			0,	8,	RW,	0},
	{"Y_MAP185",			0,	8,	RW,	0},
	{"Y_MAP186",			0,	8,	RW,	0},
	{"Y_MAP187",			0,	8,	RW,	0},
	{"Y_MAP188",			0,	8,	RW,	0},
	{"Y_MAP189",			0,	8,	RW,	0},
	{"Y_MAP190",			0,	8,	RW,	0},
	{"Y_MAP191",			0,	8,	RW,	0},
	{"Y_MAP192",			0,	8,	RW,	0},
	{"Y_MAP193",			0,	8,	RW,	0},
	{"Y_MAP194",			0,	8,	RW,	0},
	{"Y_MAP195",			0,	8,	RW,	0},
	{"Y_MAP196",			0,	8,	RW,	0},
	{"Y_MAP197",			0,	8,	RW,	0},
	{"Y_MAP198",			0,	8,	RW,	0},
	{"Y_MAP199",			0,	8,	RW,	0},
	{"Y_MAP200",			0,	8,	RW,	0},
	{"Y_MAP201",			0,	8,	RW,	0},
	{"Y_MAP202",			0,	8,	RW,	0},
	{"Y_MAP203",			0,	8,	RW,	0},
	{"Y_MAP204",			0,	8,	RW,	0},
	{"Y_MAP205",			0,	8,	RW,	0},
	{"Y_MAP206",			0,	8,	RW,	0},
	{"Y_MAP207",			0,	8,	RW,	0},
	{"Y_MAP208",			0,	8,	RW,	0},
	{"Y_MAP209",			0,	8,	RW,	0},
	{"Y_MAP210",			0,	8,	RW,	0},
	{"Y_MAP211",			0,	8,	RW,	0},
	{"Y_MAP212",			0,	8,	RW,	0},
	{"Y_MAP213",			0,	8,	RW,	0},
	{"Y_MAP214",			0,	8,	RW,	0},
	{"Y_MAP215",			0,	8,	RW,	0},
	{"Y_MAP216",			0,	8,	RW,	0},
	{"Y_MAP217",			0,	8,	RW,	0},
	{"Y_MAP218",			0,	8,	RW,	0},
	{"Y_MAP219",			0,	8,	RW,	0},
	{"Y_MAP220",			0,	8,	RW,	0},
	{"Y_MAP221",			0,	8,	RW,	0},
	{"Y_MAP222",			0,	8,	RW,	0},
	{"Y_MAP223",			0,	8,	RW,	0},
	{"Y_MAP224",			0,	8,	RW,	0},
	{"Y_MAP225",			0,	8,	RW,	0},
	{"Y_MAP226",			0,	8,	RW,	0},
	{"Y_MAP227",			0,	8,	RW,	0},
	{"Y_MAP228",			0,	8,	RW,	0},
	{"Y_MAP229",			0,	8,	RW,	0},
	{"Y_MAP230",			0,	8,	RW,	0},
	{"Y_MAP231",			0,	8,	RW,	0},
	{"Y_MAP232",			0,	8,	RW,	0},
	{"Y_MAP233",			0,	8,	RW,	0},
	{"Y_MAP234",			0,	8,	RW,	0},
	{"Y_MAP235",			0,	8,	RW,	0},
	{"Y_MAP236",			0,	8,	RW,	0},
	{"Y_MAP237",			0,	8,	RW,	0},
	{"Y_MAP238",			0,	8,	RW,	0},
	{"Y_MAP239",			0,	8,	RW,	0},
	{"Y_MAP240",			0,	8,	RW,	0},
	{"Y_MAP241",			0,	8,	RW,	0},
	{"Y_MAP242",			0,	8,	RW,	0},
	{"Y_MAP243",			0,	8,	RW,	0},
	{"Y_MAP244",			0,	8,	RW,	0},
	{"Y_MAP245",			0,	8,	RW,	0},
	{"Y_MAP246",			0,	8,	RW,	0},
	{"Y_MAP247",			0,	8,	RW,	0},
	{"Y_MAP248",			0,	8,	RW,	0},
	{"Y_MAP249",			0,	8,	RW,	0},
	{"Y_MAP250",			0,	8,	RW,	0},
	{"Y_MAP251",			0,	8,	RW,	0},
	{"Y_MAP252",			0,	8,	RW,	0},
	{"Y_MAP253",			0,	8,	RW,	0},
	{"Y_MAP254",			0,	8,	RW,	0},
	{"Y_MAP255",			0,	8,	RW,	0}
};
#endif