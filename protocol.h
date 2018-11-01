/* SPDX-License-Identifier: MIT */
/*
 * Copyright (C) 2018 Wireguard LLC
 */

#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <stdint.h>

/* possible types of requests the client can make */
enum wg_client_request = { WG_REQUEST_SIMPLE = 0 };

/* client request message */
struct wg_client_message {
	uint32_t request; /* what type of request to make */
};

/* server request message */
struct wg_server_message {
	uint32_t leased_ipv4; /* dynamic IPv4 leased to client */
	uint32_t leased_ipv4_cidr; /* CIDR of dynamic IPv4 leased to client */
	uint32_t lease_timeout; /* activity timeout for the IP lease in seconds */
	uint32_t route; /* route for client */
	uint32_t route_cidr; /* CIDR of route for client */
};

#endif