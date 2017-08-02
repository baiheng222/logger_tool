#include <QDebug>

//A Assert
#define qDebugA(format, ...) qDebug("\033[35m[A/LOG]  [%s:%d:(%s)]   "format"\033[0m", __FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__);
//E Error
#define qDebugE(format, ...) qDebug("\033[31m[E/LOG]  [%s:%d:(%s)]   "format"\033[0m", __FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__);
//W Warnning
#define qDebugW(format, ...) qDebug("\033[33m[W/LOG]  [%s:%d:(%s)]   "format"\033[0m", __FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__);
//D Debug
#define qDebugD(format, ...) qDebug("\033[32m[D/LOG]  [%s:%d:(%s)]   "format"\033[0m", __FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__);
//I Info
#define qDebugI(format, ...) qDebug("\033[36m[I/LOG]  [%s:%d:(%s)]   "format"\033[0m", __FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__);
//V Verbose 
#define qDebugV(format, ...) qDebug("\033[34m[V/LOG]  [%s:%d:(%s)]   "format"\033[0m", __FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__);
//T Trace
#define qDebugT(format, ...) qDebug("\033[37m[T/LOG]  [%s:%d:(%s)]   "format"\033[0m", __FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__);

#if 0
#define qDebugE(format, ...) qDebug("\033[31m[A/LOG] "format" File:%s, Line:%d, Function:%s", ##__VA_ARGS__, __FILE__, __LINE__ , __FUNCTION__);
#define qDebugW(format, ...) qDebug("\033[33m[A/LOG] "format" File:%s, Line:%d, Function:%s", ##__VA_ARGS__, __FILE__, __LINE__ , __FUNCTION__);
#define qDebugD(format, ...) qDebug("\033[32m[A/LOG] "format" File:%s, Line:%d, Function:%s", ##__VA_ARGS__, __FILE__, __LINE__ , __FUNCTION__);
#define qDebugI(format, ...) qDebug("\033[36m[A/LOG] "format" File:%s, Line:%d, Function:%s", ##__VA_ARGS__, __FILE__, __LINE__ , __FUNCTION__);
#define qDebugV(format, ...) qDebug("\033[34m[A/LOG] "format" File:%s, Line:%d, Function:%s", ##__VA_ARGS__, __FILE__, __LINE__ , __FUNCTION__);
#endif
