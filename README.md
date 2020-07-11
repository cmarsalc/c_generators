# C generators

This is a tiny C library inspired in Python generators. 

For now it only supports generators yiedling uint32_t values, but could be easily extended to other types of variables. A generic implementation could be done with MACROS, as C language has no support for templates.

The library does not use dynamic memory.

Basically...

```
typedef uint32_t (*iGenerator32Next)(uint32_t value);

typedef struct {
  uint32_t value;
  iGenerator32Next next;
} sGenerator32;

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
```

Examples can be found at the ```/examples``` folder.
