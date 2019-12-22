#include <stdint.h>

/*
 * RNG function - must be provided externally
 *
 * in: output - must point to a writable buffer of at least output_size bytes.
 *     output_size - the number of random bytes to write to output.
 * out: output is filled with output_size random bytes.
 *      return 0 on success, non-zero on errors.
 */
extern int p256_generate_random(uint8_t * output, unsigned output_size);
