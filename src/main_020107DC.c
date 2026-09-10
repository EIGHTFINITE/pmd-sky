#include "main_020107DC.h"
#include "item.h"

extern struct bag_items *BAG_ITEMS_PTR_MIRROR;

u16 GetEggHatchTimer(void)
{
    return BAG_ITEMS_PTR_MIRROR->field_0x13A8;
}

void SetEggHatchTimer(u16 timer)
{
    BAG_ITEMS_PTR_MIRROR->field_0x13A8 = timer;
}

void DecrementEggHatchTimer(void)
{
    if (BAG_ITEMS_PTR_MIRROR->field_0x13A8 != 0) {
        BAG_ITEMS_PTR_MIRROR->field_0x13A8--;
    }
}

int RemoveInvalidKecleonShop1Items(void)
{
    int count = 0;
    int i;
    struct bulk_item *items = (struct bulk_item *)BAG_ITEMS_PTR_MIRROR->field_0x132C;
    for (i = 0; i < 8; i++) {
        if (items[i].id != 0)
            count++;
    }
    return count;
}

void RemoveItemFromKecleonShop1(int slot)
{
    struct bulk_item *items = (struct bulk_item *)BAG_ITEMS_PTR_MIRROR->field_0x132C;
    u16 *item = (u16 *)&items[slot];
    item[0] = 0;
    item[1] = 0;
}
