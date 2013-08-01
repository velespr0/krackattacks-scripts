/*
 * IEEE 802.11v WNM related functions and structures
 * Copyright (c) 2011-2013, Qualcomm Atheros, Inc.
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#ifndef WNM_AP_H
#define WNM_AP_H

struct rx_action;
struct sta_info;

int ieee802_11_rx_wnm_action_ap(struct hostapd_data *hapd,
				struct rx_action *action);
int wnm_send_ess_disassoc_imminent(struct hostapd_data *hapd,
				   struct sta_info *sta, const char *url,
				   int disassoc_timer);

#endif /* WNM_AP_H */
