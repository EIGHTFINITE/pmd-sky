#ifndef PMDSKY_MAIN_020527A8_H
#define PMDSKY_MAIN_020527A8_H

struct monster_sprite_data_entry {
    u8 sprite_size;
    u8 sprite_file_size;
};

extern struct monster_sprite_data_entry MONSTER_SPRITE_DATA[600];

u8 GetMonsterGender(s16 monster_id);
u8 GetBodySize(s16 monster_id);
u8 GetSpriteSize(s16 monster_id);
u32 GetSpriteFileSize(s16 monster_id);

#endif //PMDSKY_MAIN_020527A8_H
