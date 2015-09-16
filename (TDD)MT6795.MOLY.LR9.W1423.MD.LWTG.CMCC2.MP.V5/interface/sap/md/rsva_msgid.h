/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/****************************************************************************
 * PARTS OF THIS FILE ARE AUTOGENERATED
 * DO NOT EDIT EXCEPT BETWEEN LINES MARKED !BEGIN MANUAL CODE and !END MANUAL CODE
 *               Assignment :
 *               CONFIDENTIAL
 *               Copyright (c) 2000-2005, UbiNetics Ltd. All rights reserved.
 *               Cambridge Technology Centre
 *               Melbourn Royston
 *               Herts SG8 6DP UK
 *               Tel: +44 1763 262222
 *
 ****************************************************************************
 * !BEGIN MANUAL CODE! (HEADERS)
 *
 * COMPONENT:    (Insert Component Name)
 * MODULE:       $RCSfile: rsva_sap.h,v $
 * VERSION:      $Revision: 1.0 $
 * DATED:        $Date: 2009/06/12 14:22:29 $
 * AUTHOR:
 * DESCRIPTION:  Check Header for full description
 *
 ****************************************************************************/
/* !END MANUAL CODE! (HEADERS) */
/*****************************************************************************
 * $Log:$
 *
 * removed!
 * removed!
 * .Gemini RSVAE check-in
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * removed!
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * removed!
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * <saved by Perforce>
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _RSVA_MSG_H
#define _RSVA_MSG_H

#if defined(__GEMINI__) 

MODULE_MSG_BEGIN( MSG_ID_RSVAS_CODE_BEGIN )
// RSVAS
MSG_ID_RSVAS_SERVICE_RES_OCCUPY_REQ = MSG_ID_RSVAS_CODE_BEGIN,

/* ifdef UNIT_TEST */
MSG_ID_RSVAS_SERVICE_RES_OCCUPY_CNF, /* only for UT */
/* endif UNIT_TEST */

MSG_ID_RSVAS_SERVICE_RES_TRANSFER_REQ,
MSG_ID_RSVAS_SERVICE_RES_RELEASE_REQ,

MSG_ID_RSVAS_GAS_SERVICE_RES_OCCUPY_IND,
MSG_ID_RSVAS_UAS_SERVICE_RES_OCCUPY_IND,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif

MSG_ID_RSVAS_L1_SUSPEND_REQ,
MSG_ID_RSVAS_L1_SUSPEND_CNF,
#if 0 /* move to ul1_sap.h */
/* under construction !*/
/* under construction !*/
#endif
MSG_ID_RSVAS_EL1_SUSPEND_REQ,
MSG_ID_RSVAS_EL1_SUSPEND_CNF,

MSG_ID_RSVAS_LL1_SUSPEND_IND,

MSG_ID_RSVAS_L1_RESUME_REQ,
#if 0 /* move to ul1_sap.h */
/* under construction !*/
#endif
MSG_ID_RSVAS_EL1_RESUME_REQ,

MSG_ID_RSVAS_LL1_RESUME_IND,

#if 0 /* move to rr_sap.h */
/* under construction !*/
#endif /* 0 */
MSG_ID_RSVAS_UAS_SUSPEND_SERVICE_REQ,
MSG_ID_RSVAS_UL2_SUSPEND_SERVICE_REQ,
MSG_ID_RSVAS_UL2D_SUSPEND_SERVICE_REQ,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif
MSG_ID_RSVAS_EL2TASK_SUSPEND_SERVICE_REQ,

MSG_ID_RSVAS_L4C_SUSPEND_SERVICE_IND,

MSG_ID_RSVAS_GAS_SUSPEND_SERVICE_CNF,
MSG_ID_RSVAS_UAS_SUSPEND_SERVICE_CNF,
MSG_ID_RSVAS_EAS_SUSPEND_SERVICE_CNF,

MSG_ID_RSVAS_MRS_SUSPEND_SERVICE_COMPLETE_IND,

#if 0 /* move to rr_sap.h */
/* under construction !*/
#endif /* 0 */
MSG_ID_RSVAS_UAS_RESUME_SERVICE_REQ,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif 

MSG_ID_RSVAS_UL2_RESUME_SERVICE_REQ,
MSG_ID_RSVAS_UL2D_RESUME_SERVICE_REQ,

MSG_ID_RSVAS_L4C_RESUME_SERVICE_IND,

/* ifdef __GEMINI_PREEMPT_PEER_SERVICE__ */
#if 0 /* move to rr_sap.h */
/* under construction !*/
#endif /* 0 */
MSG_ID_RSVAS_GAS_ABORT_SERVICE_CNF,
MSG_ID_RSVAS_UAS_ABORT_SERVICE_REQ,
MSG_ID_RSVAS_UAS_ABORT_SERVICE_CNF,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif
MSG_ID_RSVAS_EAS_ABORT_SERVICE_CNF,

MSG_ID_RSVAS_L4C_ABORT_SERVICE_IND,

#if 0 /* move to rr_sap.h */
/* under construction !*/
#endif /* 0 */
MSG_ID_RSVAS_UAS_ABORT_SERVICE_COMPLETE_IND,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif

MSG_ID_RSVAS_L4C_ABORT_SERVICE_COMPLETE_IND,
/* endif __GEMINI_PREEMPT_PEER_SERVICE__ */

/* ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#if 0 /* move to rr_sap.h */
/* under construction !*/
#endif /* 0 */
MSG_ID_RSVAS_UAS_VIRTUAL_SUSPEND_SERVICE_REQ,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif
MSG_ID_RSVAS_GAS_VIRTUAL_SUSPEND_SERVICE_CNF,
MSG_ID_RSVAS_UAS_VIRTUAL_SUSPEND_SERVICE_CNF,
MSG_ID_RSVAS_EAS_VIRTUAL_SUSPEND_SERVICE_CNF,
#if 0 /* move to rr_sap.h */
/* under construction !*/
#endif /* 0 */
MSG_ID_RSVAS_UAS_VIRTUAL_SUSPEND_SERVICE_COMPLETE_IND,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif
#if 0 /* move to rr_sap.h */
/* under construction !*/
#endif /* 0 */
MSG_ID_RSVAS_UAS_VIRTUAL_RESUME_SERVICE_REQ,
#if 0 /* move to errc_msgid.h */
/* under construction !*/
#endif

MSG_ID_RSVAS_L1_VIRTUAL_RESUME_REQ,
#if 0 /* move to ul1_sap.h */
/* under construction !*/
#endif
MSG_ID_RSVAS_EL1_VIRTUAL_RESUME_REQ,

MSG_ID_RSVAS_LL1_VIRTUAL_RESUME_IND,

MSG_ID_RSVAS_MONITOR_PEER_PCH_SWITCH_REQ,
/* endif __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

MSG_ID_RSVAS_RF_SWITCH_REQ,

/* ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
MSG_ID_RSVAS_AS_PREFERENCE_MODE_REQ,
/* endif __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

/* ifdef __SINGLE_AP_DUAL_MODEM__ */
MSG_ID_RSVAS_SIM_STATUS_CONFIG_REQ,
/* endif __SINGLE_AP_DUAL_MODEM__ */

/* #if defined(__ETWS_SUPPORT__) || defined(__LTE_RAT__) */
MSG_ID_RSVAS_AS_UPDATE_ETWS_PRIORITY_REQ,
/* endif __ETWS_SUPPORT__ || __LTE_RAT__ */

/* ifdef UNIT_TEST */
MSG_ID_RSVAS_AS_UPDATE_ETWS_PRIORITY_CNF, /* only for UT */
/* endif UNIT_TEST */

/* ifdef UNIT_TEST */
MSG_ID_RSVAS_UT_RESULT_IND, /* only for UT */
/* endif UNIT_TEST */

MSG_ID_RSVAS_NON_USED_MESSAGE,
MSG_ID_RSVAS_CODE_END = MSG_ID_RSVAS_NON_USED_MESSAGE,

MODULE_MSG_END( MSG_ID_RSVAS_CODE_TAIL )

#if defined(__UMTS_RAT__)

MODULE_MSG_BEGIN( MSG_ID_RSVAK_CODE_BEGIN )
// RSVAK
MSG_ID_RSVA_RES_RESERVE_REQ = MSG_ID_RSVAK_CODE_BEGIN,
MSG_ID_RSVA_RES_MODIFY_REQ,
MSG_ID_RSVA_RES_RELEASE_REQ,
MSG_ID_RSVA_RES_RESERVE_CNF,
MSG_ID_RSVA_RES_MODIFY_CNF,
MSG_ID_RSVA_RES_RESERVE_ACCEPT_IND,
MSG_ID_RSVA_RES_RESERVE_PREEMPT_IND,
MSG_ID_RSVAK_CODE_END = MSG_ID_RSVA_RES_RESERVE_PREEMPT_IND,
MODULE_MSG_END( MSG_ID_RSVAK_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_RSVAU_CODE_BEGIN )
// RSVAU
MSG_ID_RSVAS_RSVAU_SUSPEND_SERVICE_REQ = MSG_ID_RSVAU_CODE_BEGIN,
MSG_ID_RSVAS_RSVAU_RESUME_SERVICE_REQ,
MSG_ID_RSVAU_CODE_END = MSG_ID_RSVAS_RSVAU_RESUME_SERVICE_REQ,
MODULE_MSG_END( MSG_ID_RSVAU_CODE_TAIL )

// RSVAG
#ifdef  __GSM_RAT__
MODULE_MSG_BEGIN( MSG_ID_RSVAG_CODE_BEGIN )
MSG_ID_GAS_RSVAG_FREQUENCY_SCAN_START_REQ  = MSG_ID_RSVAG_CODE_BEGIN,
MSG_ID_GAS_RSVAG_FREQUENCY_SCAN_STOP_REQ,
MSG_ID_RSVAG_CODE_END = MSG_ID_GAS_RSVAG_FREQUENCY_SCAN_STOP_REQ,
MODULE_MSG_END( MSG_ID_RSVAG_CODE_TAIL )
#endif /* __GSM_RAT__ */

// RSVAE
#ifdef __LTE_RAT__
MODULE_MSG_BEGIN( MSG_ID_RSVAE_CODE_BEGIN )
MSG_ID_EAS_RSVAE_FREQUENCY_SCAN_START_REQ  = MSG_ID_RSVAE_CODE_BEGIN,
MSG_ID_EAS_RSVAE_FREQUENCY_SCAN_STOP_REQ,
MSG_ID_EAS_RSVAE_FREQUENCY_SCAN_MODIFY_REQ,
MSG_ID_RSVAE_CODE_END = MSG_ID_EAS_RSVAE_FREQUENCY_SCAN_MODIFY_REQ,

MODULE_MSG_END( MSG_ID_RSVAE_CODE_TAIL )
#endif /* __LTE_RAT__ */

#endif /* __UMTS_RAT__ */

#endif /* __GEMINI__ */
#endif  //_RSVA_MSG_H