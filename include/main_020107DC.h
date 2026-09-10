#ifndef PMDSKY_MAIN_020107DC_H
#define PMDSKY_MAIN_020107DC_H

u16 GetEggHatchTimer(void);
void SetEggHatchTimer(u16 timer);
void DecrementEggHatchTimer(void);
int RemoveInvalidKecleonShop1Items(void);
void RemoveItemFromKecleonShop1(int slot);

#endif
