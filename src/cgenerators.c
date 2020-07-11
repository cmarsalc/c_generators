#include "../include/cgenerators.h"

sGenerator32* getGenerator32(sGenerator32* generator, iGenerator32Next generatorNext, uint32_t initValue)
{
    generator->next = generatorNext;
    generator->value = initValue;
    return generator;
}

uint32_t generator32Next(sGenerator32* generator)
{
    uint32_t current = generator->value;
    generator->value = (*generator->next)(current);
    return current;
}
