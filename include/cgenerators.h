#ifndef C_GENERATORS_H_
#define C_GENERATORS_H_

#include <stdint.h>

/****************************************************************************
 * TYPES
 ****************************************************************************/
typedef uint32_t (*iGenerator32Next)(uint32_t value);
typedef struct {
        uint32_t value;
            iGenerator32Next next;
} sGenerator32;

/****************************************************************************
 * FUNCTION PROTOTYPES
 ****************************************************************************/
sGenerator32* getGenerator32(sGenerator32* generator, iGenerator32Next generatorNext, uint32_t initValue);
uint32_t generator32Next(sGenerator32* generator);

#endif

