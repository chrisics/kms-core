/*
 * (C) Copyright 2014 Kurento (http://kurento.org/)
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 2.1 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-2.1.html
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 */

#ifndef __KMS_ENC_TREE_BIN_H__
#define __KMS_ENC_TREE_BIN_H__

#include "kmstreebin.h"

G_BEGIN_DECLS
/* #defines don't like whitespacey bits */
#define KMS_TYPE_ENC_TREE_BIN \
  (kms_enc_tree_bin_get_type())
#define KMS_ENC_TREE_BIN(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),KMS_TYPE_ENC_TREE_BIN,KmsEncTreeBin))
#define KMS_ENC_TREE_BIN_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),KMS_TYPE_ENC_TREE_BIN,KmsEncTreeBinClass))
#define KMS_IS_ENC_TREE_BIN(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),KMS_TYPE_ENC_TREE_BIN))
#define KMS_IS_ENC_TREE_BIN_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),KMS_TYPE_ENC_TREE_BIN))
#define KMS_ENC_TREE_BIN_CAST(obj) ((KmsEncTreeBin*)(obj))

typedef struct _KmsEncTreeBin KmsEncTreeBin;
typedef struct _KmsEncTreeBinClass KmsEncTreeBinClass;

struct _KmsEncTreeBin
{
  KmsTreeBin parent;
};

struct _KmsEncTreeBinClass
{
  KmsTreeBinClass parent_class;
};

GType kms_enc_tree_bin_get_type (void);

KmsEncTreeBin * kms_enc_tree_bin_new (const GstCaps * caps);

G_END_DECLS
#endif /* __KMS_ENC_TREE_BIN_H__ */
