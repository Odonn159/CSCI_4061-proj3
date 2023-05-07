#ifndef STRING_VECTOR_H
#define STRING_VECTOR_H

typedef struct {
    unsigned int length;
    unsigned int capacity;
    char **data;
} strvec_t;

/*
 * Initializes a new, empty string vector
 * vec: Pointer to the vector to initialize
 * Returns 0 on success, -1 on error
 */
int strvec_init(strvec_t *vec);

/*
 * Removes all entries from a string vector
 * The underlying memory for the vector is also freed
 * vec: Pointer to the vector to clear
 * Note: You MUST re-initialize this vector with strvec_init() if you want to use it again
 */
void strvec_clear(strvec_t *vec);

/*
 * Add a new string to a string vector
 * vec: Pointer to the vector to add to
 * s: The string to add
 * Returns 0 on success, -1 on error
 * Note: The vector stores its own copy of this string
 */
int strvec_add(strvec_t *vec, const char *s);

/*
 * Retrieve an element from a string vector
 * vec: Pointer to the vector to retrieve from
 * i: Index of element to retrieve (starts at 0)
 * Returns the vector element (not a copy) on success, or NULL on error
 */
char *strvec_get(const strvec_t *vec, unsigned i);

/*
 * Search for a specific string within a string vector
 * vec: Pointer to the vector to search within
 * s: String to search for
 * Returns the index of the string within the vector if found, -1 if not found
 */
int strvec_find(const strvec_t *vec, const char *s);

/*
 * Search for a specifc string within a string vector, starting from the end
 * vec: Pointer to the vector to search within
 * s: String to search for
 * Returns index of the last occurrence of the string if found, -1 if not found
 */
int strvec_find_last(const strvec_t *vec, const char *s);

/*
 * Determine the number of occurrences of a specific string within a vector
 * vec: Pointer to the vector to search for occurrences
 * s: String to search for
 * Returns the number of occurrences of string 's' within vector 'vec'
 */
int strvec_num_occurrences(const strvec_t *vec, const char *s);

/*
 * Modify a string vector so that it only contains its first 'n' elements
 * vec: Pointer to string vector to shorten
 * n: Number of elements to retain in the vector
 */
void strvec_take(strvec_t *vec, unsigned n);

/*
 * Construct a slice from a string vector. The slice is a new vector containing
 * copies of a sequence of consecutive elements from the original vector.
 * src: String vector to construct a slice from
 * dest: String vector data structure in which to store the slice. You do not
 *       need to initialize this vector beforehand.
 * start: The starting index of the slice (inclusive)
 * end: The ending index of the slice (exclusive)
 * Returns 0 on success, -1 on error
 */
int strvec_slice(const strvec_t *src, strvec_t *dest, int start, int end);

#endif // STRING_VECTOR_H
