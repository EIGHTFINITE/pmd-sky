#include "overlay_29_02344B9C.h"
#include "overlay_29_02344AF8.h"
#include "main_02001188.h"
#include "overlay_29_0234B024.h"

extern struct unk_023531A4 ov29_023531BC;
extern void SubstitutePlaceholderItemTags(s32 tag_id, struct item *item, struct unk_023531A4 *param_3);

void ov29_02344B9C(s32 idx, u32 val)
{
    SetPreprocessorArgsIdVal(idx, val);
}

void PrepareItemForPrinting2(struct preprocessor_args *preprocessor_args, u8 tag_id, struct item *item)
{
    preprocessor_args->id_vals[tag_id] = tag_id | 0x40000;
    SubstitutePlaceholderItemTags(tag_id, item, &ov29_023531BC);
}
