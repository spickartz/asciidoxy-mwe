/**
 * @brief My func.
 *
 * My longer function description.
 *
 * @param [in] arg      An important argument.
 * @param [in] func_ptr A callback function.
 * @param [in] priv     Argument to the func_ptr callback.
 */
void my_func(void *arg,
             void (*func_ptr)(int elem, void *priv),
             void *priv);
