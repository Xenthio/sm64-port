#ifndef _OS_LIBC_H_
#define _OS_LIBC_H_

#include "ultratypes.h"
#ifdef TARGET_MACOS
  #include <strings.h> // macOS is fussy, not sure why but including it makes it happy.
#else

// Old deprecated functions from strings.h, replaced by memcpy/memset.
extern void bcopy(const void *, void *, size_t);
extern void bzero(void *, size_t);

#endif
#endif /* !_OS_LIBC_H_ */
