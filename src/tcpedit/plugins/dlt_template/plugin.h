/* $Id:$ */

/*
 * Copyright (c) 2006 Aaron Turner.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the names of the copyright owners nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include "dlt_plugins-int.h"

#ifndef _DLT_%{plugin}_H_
#define _DLT_%{plugin}_H_

int dlt_%{plugin}_register(tcpeditdlt_t *ctx);
int dlt_%{plugin}_init(tcpeditdlt_t *ctx);
int dlt_%{plugin}_cleanup(tcpeditdlt_t *ctx);
int dlt_%{plugin}_parse_opts(tcpeditdlt_t *ctx);
int dlt_%{plugin}_decode(tcpeditdlt_t *ctx, const u_char *packet, const int pktlen);
int dlt_%{plugin}_encode(tcpeditdlt_t *ctx, u_char **packet, int pktlen);
int dlt_%{plugin}_proto(tcpeditdlt_t *ctx, const u_char *packet, const int pktlen);
const u_char *dlt_%{plugin}_layer3(tcpeditdlt_t *ctx, const u_char *packet, const int pktlen);

/* 
 * FIXME: structure to hold any data in the tcpeditdlt_plugin_t->state 
 * Things like: 
 * - Parsed user options
 * - DLT specific storage to copy data that isn't defined in tcpeditdlt_t
 * - etc
 */
struct %{plugin}_state_s {
    
};
typedef struct %{plugin}_state_s %{plugin}_state_t;

#endif