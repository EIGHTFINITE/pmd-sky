#include "main_020527A8.h"
#include "monster_data.h"

u8 GetMonsterGender(s16 monster_id)
{
    return MONSTER_DATA_TABLE_PTR->entries[monster_id].gender;
}

u8 GetBodySize(s16 monster_id)
{
    return MONSTER_DATA_TABLE_PTR->entries[monster_id].body_size;
}

u8 GetSpriteSize(s16 monster_id)
{
    s32 raw = monster_id % 600;
    s16 mod = raw;
    u8 size = MONSTER_SPRITE_DATA[mod].sprite_size;
    if (size == 0) {
        return 0;
    }
    if (size <= 6) {
        return 6;
    }
    // NOTE: reload through raw (not size) is load-bearing for an exact
    // match: reusing size lets the compiler fold both loads into one.
    return MONSTER_SPRITE_DATA[raw].sprite_size;
}

u32 GetSpriteFileSize(s16 monster_id)
{
    s32 raw = monster_id % 600;
    // NOTE: u32 return (not u8 as in pmdsky-debug): no truncation is
    // emitted and callers accumulate the full value (field << 9).
    return MONSTER_SPRITE_DATA[raw].sprite_file_size << 9;
}
