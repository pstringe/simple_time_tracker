#include "foundation.h"
#include "time.h"

typedef struct s_duration {
    time_t      *start;
    time_t      *end;
    double      duration;
}              t_generation;

typedef struct s_generation {
    char                *name;
    struct s_duration   *duration;

}              t_generation;

int main (void) {
    return (0);
}
