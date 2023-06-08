/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef AUDIO_PLAYBACK_MSG_ID_H
#define AUDIO_PLAYBACK_MSG_ID_H

enum {
	AUDIO_DSP_TASK_OPEN = 0x1,
	AUDIO_DSP_TASK_CLOSE,
	AUDIO_DSP_TASK_PREPARE,
	AUDIO_DSP_TASK_HWPARAM,
	AUDIO_DSP_TASK_MSGA2DSHAREMEM,
	AUDIO_DSP_TASK_MSGD2ASHAREMEM,
	AUDIO_DSP_TASK_EINGBUFASHAREMEM,
	AUDIO_DSP_TASK_HWFREE,
	AUDIO_DSP_TASK_DLCOPY,
	AUDIO_DSP_TASK_ULCOPY,
	AUDIO_DSP_TASK_DATAREAD,
	AUDIO_DSP_TASK_CONSUMEDATA,
	AUDIO_DSP_TASK_START,
	AUDIO_DSP_TASK_STOP,
	AUDIO_DSP_TASK_SETPRAM,
	AUDIO_DSP_TASK_IRQDL,
	AUDIO_DSP_TASK_IRQUL,
	AUDIO_DSP_TASK_AURISYS_INIT,
	AUDIO_DSP_TASK_AURISYS_DEINIT,
	AUDIO_DSP_TASK_AURISYS_LIB_PARAM,
	AUDIO_DSP_TASK_PCMDUMP_ON = 0x100,
	AUDIO_DSP_TASK_PCMDUMP_DATA,
	AUDIO_DSP_TASK_PCMDUMP_OK,
	AUDIO_DSP_TASK_SHAREMEMORY_SET = 0x200,
	AUDIO_DSP_TASK_PCM_HWPARAM,
	AUDIO_DSP_TASK_PCM_HWFREE,
	AUDIO_DSP_TASK_PCM_PREPARE,
	AUDIO_DSP_TASK_AURISYS_SET_BUF,
	AUDIO_DSP_TASK_AURISYS_GET_BUF
};

#endif /* end of AUDIO_PLAYBACK_MSG_ID_H */

