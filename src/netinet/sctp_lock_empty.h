/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2001-2007, by Cisco Systems, Inc. All rights reserved.
 * Copyright (c) 2008-2012, by Randall Stewart. All rights reserved.
 * Copyright (c) 2008-2012, by Michael Tuexen. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * a) Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * b) Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the distribution.
 *
 * c) Neither the name of Cisco Systems, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _NETINET_SCTP_LOCK_EMPTY_H_
#define _NETINET_SCTP_LOCK_EMPTY_H_

/*
 * Empty Lock declarations for all other platforms. Pre-process away to
 * nothing.
 */

/* Lock for INFO stuff */
#define SCTP_INP_INFO_LOCK_INIT()
#define SCTP_INP_INFO_RLOCK()
#define SCTP_INP_INFO_WLOCK()
#define SCTP_INP_INFO_RUNLOCK()
#define SCTP_INP_INFO_WUNLOCK()
#define SCTP_INP_INFO_LOCK_ASSERT()
#define SCTP_INP_INFO_RLOCK_ASSERT()
#define SCTP_INP_INFO_WLOCK_ASSERT()

#define SCTP_IPI_COUNT_INIT()

#define SCTP_STATLOG_INIT_LOCK()
#define SCTP_STATLOG_LOCK()
#define SCTP_STATLOG_UNLOCK()
#define SCTP_STATLOG_DESTROY()

#define SCTP_IPI_ITERATOR_WQ_INIT()
#define SCTP_IPI_ITERATOR_WQ_LOCK()
#define SCTP_IPI_ITERATOR_WQ_UNLOCK()

#define SCTP_IPI_ADDR_INIT()
#define SCTP_IPI_ADDR_DESTROY(_inp)
#define SCTP_IPI_ADDR_LOCK()
#define SCTP_IPI_ADDR_UNLOCK()

/* address list locks */
#define SCTP_IPI_ADDR_RLOCK()
#define SCTP_IPI_ADDR_RUNLOCK()
#define SCTP_IPI_ADDR_WLOCK()
#define SCTP_IPI_ADDR_WUNLOCK()
#define SCTP_IPI_ADDR_LOCK_ASSERT()
#define SCTP_IPI_ADDR_WLOCK_ASSERT()

/* Lock for INP */
#define SCTP_INP_LOCK_INIT(_inp)
#define SCTP_INP_LOCK_DESTROY(_inp)
#define SCTP_INP_RLOCK(_inp)
#define SCTP_INP_RUNLOCK(_inp)
#define SCTP_INP_WLOCK(_inp)
#define SCTP_INP_WUNLOCK(_inp)
#define SCTP_INP_RLOCK_ASSERT(_inp)
#define SCTP_INP_WLOCK_ASSERT(_inp)
#define SCTP_INP_INCR_REF(_inp)
#define SCTP_INP_DECR_REF(_inp)

#define SCTP_ASOC_CREATE_LOCK_INIT(_inp)
#define SCTP_ASOC_CREATE_LOCK_DESTROY(_inp)
#define SCTP_ASOC_CREATE_LOCK(_inp)
#define SCTP_ASOC_CREATE_UNLOCK(_inp)

#define SCTP_INP_READ_LOCK_INIT(_inp)
#define SCTP_INP_READ_LOCK_DESTROY(_inp)
#define SCTP_INP_READ_LOCK(_inp)
#define SCTP_INP_READ_UNLOCK(_inp)
#define SCTP_INP_READ_LOCK_ASSERT(_inp)

/* Lock for TCB */
#define SCTP_TCB_LOCK_INIT(_tcb)
#define SCTP_TCB_LOCK_DESTROY(_tcb)
#define SCTP_TCB_LOCK(_tcb)
#define SCTP_TCB_TRYLOCK(_tcb) 1
#define SCTP_TCB_UNLOCK(_tcb)
#define SCTP_TCB_UNLOCK_IFOWNED(_tcb)
#define SCTP_TCB_LOCK_ASSERT(_tcb)


/* socket locks that are not here in other than 5.3 > FreeBSD */
#define SOCK_LOCK(_so)
#define SOCK_UNLOCK(_so)
#define SOCKBUF_LOCK(_so_buf)
#define SOCKBUF_UNLOCK(_so_buf)
#define SOCKBUF_LOCK_ASSERT(_so_buf)
/* iterator locks */
#define SCTP_ITERATOR_LOCK_INIT()
#define SCTP_ITERATOR_LOCK()
#define SCTP_ITERATOR_UNLOCK()
#define SCTP_ITERATOR_LOCK_DESTROY()

/***************BEGIN all other count stuff**********************/
#define SCTP_INCR_EP_COUNT() \
                do { \
		       SCTP_BASE_INFO(ipi_count_ep++); \
	        } while (0)

#define SCTP_DECR_EP_COUNT() \
                do { \
		       SCTP_BASE_INFO(ipi_count_ep--); \
	        } while (0)

#define SCTP_INCR_ASOC_COUNT() \
                do { \
	               SCTP_BASE_INFO(ipi_count_asoc++); \
	        } while (0)

#define SCTP_DECR_ASOC_COUNT() \
                do { \
	               SCTP_BASE_INFO(ipi_count_asoc--); \
	        } while (0)

#define SCTP_INCR_LADDR_COUNT() \
                do { \
	               SCTP_BASE_INFO(ipi_count_laddr++); \
	        } while (0)

#define SCTP_DECR_LADDR_COUNT() \
                do { \
	               SCTP_BASE_INFO(ipi_count_laddr--); \
	        } while (0)

#define SCTP_INCR_RADDR_COUNT() \
                do { \
 	               SCTP_BASE_INFO(ipi_count_raddr++); \
	        } while (0)

#define SCTP_DECR_RADDR_COUNT() \
                do { \
 	               SCTP_BASE_INFO(ipi_count_raddr--); \
	        } while (0)

#define SCTP_INCR_CHK_COUNT() \
                do { \
  	               SCTP_BASE_INFO(ipi_count_chunk++); \
	        } while (0)

#define SCTP_DECR_CHK_COUNT() \
                do { \
  	               SCTP_BASE_INFO(ipi_count_chunk--); \
	        } while (0)

#define SCTP_INCR_READQ_COUNT() \
                do { \
		       SCTP_BASE_INFO(ipi_count_readq++); \
	        } while (0)

#define SCTP_DECR_READQ_COUNT() \
                do { \
		       SCTP_BASE_INFO(ipi_count_readq--); \
	        } while (0)

#define SCTP_INCR_STRMOQ_COUNT() \
                do { \
		       SCTP_BASE_INFO(ipi_count_strmoq++); \
	        } while (0)

#define SCTP_DECR_STRMOQ_COUNT() \
                do { \
		       SCTP_BASE_INFO(ipi_count_strmoq--); \
	        } while (0)


#endif
