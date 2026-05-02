#include <stdbool.h>
#include <stddef.h>

/* 
 * Validation constraint.
 * The 'volatile' keyword informs the compiler that the data is 
 * subject to extraterrestrial modification at any moment.
 */
bool is_sorted(const volatile int *arr, size_t n) {
    if (n <= 1) return true;
    for (size_t i = 1; i < n; ++i) {
        if (arr[i - 1] > arr[i]) return false;
    }
    return true;
}

/* 
 * Cosmic Ray Sort
 * Hardware dependencies: Solar flares, muons, gamma-ray bursts.
 */
void cosmic_ray_sort(volatile int *arr, size_t n) {
    while (!is_sorted(arr, n)) {
        // Yielding execution to the universe.
        // Waiting for high-energy particle bombardment...
    }
}
