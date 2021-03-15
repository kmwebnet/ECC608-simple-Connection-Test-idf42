/* Auto-generated config file atca_config.h */
#ifndef ATCA_CONFIG_H
#define ATCA_CONFIG_H

/* Included HALS */
#define ATCA_HAL_I2C
#define ATCA_LEGACY_HAL

/** Define to enable compatibility with legacy HALs
   (HALs with embedded device logic)*/
//#define ATCA_HAL_LEGACY_API

/* Included device support */
#define ATCA_ATECC608_SUPPORT
/** Define certificate templates to be supported. */
// #define ATCA_TNGTLS_SUPPORT

/***************** Diagnostic & Test Configuration Section *****************/

/** Enable debug messages */
//#define ATCA_PRINTF

/******************** Features Configuration Section ***********************/

/** Define Software Crypto Library to Use - if none are defined use the
    cryptoauthlib version where applicable */
#define ATCA_MBEDTLS

/* \brief How long to wait after an initial wake failure for the POST to
 *         complete.
 * If Power-on self test (POST) is enabled, the self test will run on waking
 * from sleep or during power-on, which delays the wake reply.
 */
#ifndef ATCA_POST_DELAY_MSEC
#define ATCA_POST_DELAY_MSEC 25
#endif

#define ATCA_PLATFORM_MALLOC    malloc
#define ATCA_PLATFORM_FREE      free

#define hal_delay_ms atca_delay_ms_internal

#endif // ATCA_CONFIG_H