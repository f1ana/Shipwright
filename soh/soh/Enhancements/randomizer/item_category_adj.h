#pragma once

#ifndef ITEM_CATEGORY_ADJ_H
#define ITEM_CATEGORY_ADJ_H

#include "../item-tables/ItemTableTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    CSMC_OFF,
    CSMC_ADAPTABLE,
    CSMC_FIXED,
} ContainersMatchContentsMode;

GetItemCategory Randomizer_AdjustItemCategory(GetItemEntry item);

#ifdef __cplusplus
}
#endif

#endif
