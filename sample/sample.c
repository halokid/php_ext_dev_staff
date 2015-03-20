#include "php_sample.h"
zend_module_entry sample_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
STANDARD_MODULE_HEADER,
#endif
PHP_SAMPLE_EXTNAME,
NULL, /* Functions */
NULL, /* MINIT */
NULL, /* MSHUTDOWN */
NULL, /* RINIT */
NULL, /* RSHUTDOWN */
NULL, /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
PHP_SAMPLE_EXTVER,
#endif
STANDARD_MODULE_PROPERTIES
};
#ifdef COMPILE_DL_SAMPLE
ZEND_GET_MODULE(sample)
#endif