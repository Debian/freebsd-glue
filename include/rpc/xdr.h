#include_next <rpc/xdr.h>

#ifndef _FREEBSD_RPC_XDR_H
#define _FREEBSD_RPC_XDR_H

#include <sys/cdefs.h>

/*
 * These are XDR control operators
 */

#define        XDR_GET_BYTES_AVAIL     1
#define        XDR_PEEK                2
#define        XDR_SKIPBYTES           3

struct xdr_bytesrec {
	bool_t xc_is_last_record;
	size_t xc_num_avail;
};

typedef struct xdr_bytesrec xdr_bytesrec;

#define xdr_control(xdrs, req, op)	XDR_CONTROL(xdrs, req, op)

#endif
