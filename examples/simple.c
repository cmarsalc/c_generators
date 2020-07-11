#include <stdio.h>
#include "../include/cgenerators.h"

static uint32_t increment32(uint32_t value)
{
    return ++value;
}

int main(void)
{
    sGenerator32 gen32;

    (void)getGenerator32(&gen32, increment32, 1000);
    for (uint8_t i = 0; i < 255; i++)
    {
        printf("%d ", generator32Next(&gen32));
    }
}
