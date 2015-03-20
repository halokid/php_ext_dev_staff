#ifndef PHP_SAMPLE_H
/* 防止重复包含 */
#define PHP_SAMPLE_H
/* 定义扩展的属性 */

#define PHP_SAMPLE_EXTNAME "sample"
#define PHP_SAMPLE_EXTVER "1.0"
/* 在php源码树外面构建时引入配置选项 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
/* 包含php的标准头文件 */
#include "php.h"
/* 定义入口点符号, Zend在加载这个模块的时候使用 */
extern zend_module_entry sample_module_entry;
#define phpext_sample_ptr &sample_module_entry
#endif /* PHP_SAMPLE_H */

