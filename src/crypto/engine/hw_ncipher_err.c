/* hw_ncipher_err.c */
/* ====================================================================
 * Copyright (c) 1999 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include "hw_ncipher_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
static ERR_STRING_DATA HWCRHK_str_functs[]=
	{
{ERR_PACK(0,HWCRHK_F_HWCRHK_CTRL,0),	"HWCRHK_CTRL"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_FINISH,0),	"HWCRHK_FINISH"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_GET_PASS,0),	"HWCRHK_GET_PASS"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_INIT,0),	"HWCRHK_INIT"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_INSERT_CARD,0),	"HWCRHK_INSERT_CARD"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_LOAD_PRIVKEY,0),	"HWCRHK_LOAD_PRIVKEY"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_LOAD_PUBKEY,0),	"HWCRHK_LOAD_PUBKEY"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_MOD_EXP,0),	"HWCRHK_MOD_EXP"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_RAND_BYTES,0),	"HWCRHK_RAND_BYTES"},
{ERR_PACK(0,HWCRHK_F_HWCRHK_RSA_MOD_EXP,0),	"HWCRHK_RSA_MOD_EXP"},
{0,NULL}
	};

static ERR_STRING_DATA HWCRHK_str_reasons[]=
	{
{HWCRHK_R_ALREADY_LOADED                 ,"already loaded"},
{HWCRHK_R_BIO_WAS_FREED                  ,"bio was freed"},
{HWCRHK_R_CHIL_ERROR                     ,"chil error"},
{HWCRHK_R_CTRL_COMMAND_NOT_IMPLEMENTED   ,"ctrl command not implemented"},
{HWCRHK_R_DSO_FAILURE                    ,"dso failure"},
{HWCRHK_R_MISSING_KEY_COMPONENTS         ,"missing key components"},
{HWCRHK_R_NOT_INITIALISED                ,"not initialised"},
{HWCRHK_R_NOT_LOADED                     ,"not loaded"},
{HWCRHK_R_NO_CALLBACK                    ,"no callback"},
{HWCRHK_R_NO_KEY                         ,"no key"},
{HWCRHK_R_PRIVATE_KEY_ALGORITHMS_DISABLED,"private key algorithms disabled"},
{HWCRHK_R_REQUEST_FAILED                 ,"request failed"},
{HWCRHK_R_REQUEST_FALLBACK               ,"request fallback"},
{HWCRHK_R_UNIT_FAILURE                   ,"unit failure"},
{0,NULL}
	};

#endif

#ifdef HWCRHK_LIB_NAME
static ERR_STRING_DATA HWCRHK_lib_name[]=
        {
{0	,HWCRHK_LIB_NAME},
{0,NULL}
	};
#endif


static int HWCRHK_lib_error_code=0;
static int HWCRHK_error_init=1;

static void ERR_load_HWCRHK_strings(void)
	{
	if (HWCRHK_lib_error_code == 0)
		HWCRHK_lib_error_code=ERR_get_next_error_library();

	if (HWCRHK_error_init)
		{
		HWCRHK_error_init=0;
#ifndef OPENSSL_NO_ERR
		ERR_load_strings(HWCRHK_lib_error_code,HWCRHK_str_functs);
		ERR_load_strings(HWCRHK_lib_error_code,HWCRHK_str_reasons);
#endif

#ifdef HWCRHK_LIB_NAME
		HWCRHK_lib_name->error = ERR_PACK(HWCRHK_lib_error_code,0,0);
		ERR_load_strings(0,HWCRHK_lib_name);
#endif
		}
	}

static void ERR_unload_HWCRHK_strings(void)
	{
	if (HWCRHK_error_init == 0)
		{
#ifndef OPENSSL_NO_ERR
		ERR_unload_strings(HWCRHK_lib_error_code,HWCRHK_str_functs);
		ERR_unload_strings(HWCRHK_lib_error_code,HWCRHK_str_reasons);
#endif

#ifdef HWCRHK_LIB_NAME
		ERR_unload_strings(0,HWCRHK_lib_name);
#endif
		HWCRHK_error_init=1;
		}
	}

static void ERR_HWCRHK_error(int function, int reason, char *file, int line)
	{
	if (HWCRHK_lib_error_code == 0)
		HWCRHK_lib_error_code=ERR_get_next_error_library();
	ERR_PUT_error(HWCRHK_lib_error_code,function,reason,file,line);
	}
