
#include "../ImgReader.h"
typedef u64 UINT64;
typedef u32 UINT32;
typedef u16 UINT16;
typedef u8 UINT8;

typedef s64 INT64;
typedef s32 INT32;
typedef s16 INT16;
typedef s8 INT8;

//gli #define INLINE inline
#define core_file FILE

#define ARRAY_LENGTH(x) (sizeof(x)/sizeof(x[0]))

#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))