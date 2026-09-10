#include "main_020275F8.h"
#include "window.h"

extern u8 _022A88F0[];
#ifdef JAPAN
extern u8 _022A88FC[];
#endif

struct Window* GetWindow(s32 window_id)
{
    return &WINDOW_LIST[window_id];
}

u32 sub_0202760C(s32 idx)
{
#ifdef JAPAN
    return *(u32 *)(_022A88FC + idx * 0xE0);
#else
    return *(u32 *)(_022A88F0 + idx * 0xE0);
#endif
}

#ifdef JAPAN
u32 sub_0202796C_JP(s32 idx)
{
    return *(u32 *)(_022A88F0 + idx * 0xE0);
}
#endif
