/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "internal/sm2err.h"

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA SM2_str_functs[] = {
    {ERR_PACK(ERR_LIB_SM2, SM2_F_KDF_GMT003_2012, 0), "kdf_gmt003_2012"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_PKEY_SM2_COPY, 0), "pkey_sm2_copy"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_PKEY_SM2_CTRL, 0), "pkey_sm2_ctrl"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_PKEY_SM2_CTRL_STR, 0), "pkey_sm2_ctrl_str"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_PKEY_SM2_DIGEST_CUSTOM, 0),
     "pkey_sm2_digest_custom"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_PKEY_SM2_INIT, 0), "pkey_sm2_init"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_PKEY_SM2_KEYGEN, 0), "pkey_sm2_keygen"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_PKEY_SM2_SIGN, 0), "pkey_sm2_sign"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2KAP_COMPUTE_KEY, 0), "SM2Kap_compute_key"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_COMPUTE_MSG_HASH, 0),
     "sm2_compute_msg_hash"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_COMPUTE_USERID_DIGEST, 0),
     "sm2_compute_userid_digest"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_COMPUTE_Z_DIGEST, 0),
     "sm2_compute_z_digest"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_DECRYPT, 0), "sm2_decrypt"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_ENCRYPT, 0), "sm2_encrypt"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_PLAINTEXT_SIZE, 0), "sm2_plaintext_size"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_SIGN, 0), "sm2_sign"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_SIG_GEN, 0), "sm2_sig_gen"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_SIG_VERIFY, 0), "sm2_sig_verify"},
    {ERR_PACK(ERR_LIB_SM2, SM2_F_SM2_VERIFY, 0), "sm2_verify"},
    {0, NULL}
};

static const ERR_STRING_DATA SM2_str_reasons[] = {
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_ASN1_ERROR), "asn1 error"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_BAD_SIGNATURE), "bad signature"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_DIST_ID_TOO_LARGE), "dist id too large"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_ID_NOT_SET), "id not set"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_ID_TOO_LARGE), "id too large"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_INVALID_CURVE), "invalid curve"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_INVALID_DIGEST), "invalid digest"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_INVALID_DIGEST_TYPE),
    "invalid digest type"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_INVALID_ENCODING), "invalid encoding"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_INVALID_FIELD), "invalid field"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_NO_PARAMETERS_SET), "no parameters set"},
    {ERR_PACK(ERR_LIB_SM2, 0, SM2_R_USER_ID_TOO_LARGE), "user id too large"},
    {0, NULL}
};

#endif

int ERR_load_SM2_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(SM2_str_functs[0].error) == NULL) {
        ERR_load_strings_const(SM2_str_functs);
        ERR_load_strings_const(SM2_str_reasons);
    }
#endif
    return 1;
}
