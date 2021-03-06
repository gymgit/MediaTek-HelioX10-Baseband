/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*******************************************************************************
 * Filename:
 * ---------
 *   mm_ratcm_enums.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************/

#ifndef MM_RATCM_ENUMS_H
#define MM_RATCM_ENUMS_H

typedef enum {
   RATCM_ORIG_CONVER_CALL,
   RATCM_ORIG_STREAMING_CALL,
   RATCM_ORIG_INTERACTIVE_CALL,
   RATCM_ORIG_BACKGROUND_CALL,
   RATCM_ORIG_SUBSCRIBED_CALL,
   RATCM_TERM_CONVER_CALL,
   RATCM_TERM_STREAMING_CALL,
   RATCM_TERM_INTERACTIVE_CALL,
   RATCM_TERM_BACKGROUND_CALL,
   RATCM_EMERGENCY_CALL,
   RATCM_INTER_RAT_CELL_RESELECTION,
   RATCM_REGISTRATION,
   RATCM_DETACH,
   RATCM_HIGH_PRIORITY_SIG,
   RATCM_LOW_PRIORITY_SIG,
   RATCM_CALL_RE_ESTABLISHMENT,
   RATCM_RRC_EstablishmentCause_terminatingHighPrioritySignalling,
   RATCM_RRC_EstablishmentCause_terminatingLowPrioritySignalling,
   RATCM_RRC_EstablishmentCause_terminatingCauseUnknown,
   RATCM_SPEECH_CALL,
   RATCM_DATA_CALL,
   RATCM_SS_DATA,
   RATCM_VIDEO_CALL /* __REL6__ */
}mm_ratcm_est_cause_enum;

#endif


