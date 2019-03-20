/* Copyright (c) 2013 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup memory_pool_internal Memory Pool Internal
 * @{
 * @ingroup memory_pool
 *
 * @brief Memory pool internal definitions
 */

#ifndef MEM_POOL_INTERNAL_H__
#define MEM_POOL_INTERNAL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define TX_BUF_SIZE       160u         /**< TX buffer size in bytes. */
#define RX_BUF_SIZE       TX_BUF_SIZE  /**< RX buffer size in bytes. */

#define RX_BUF_QUEUE_SIZE 2u           /**< RX buffer element size. */


#ifdef __cplusplus
}
#endif

#endif // MEM_POOL_INTERNAL_H__

/** @} */
