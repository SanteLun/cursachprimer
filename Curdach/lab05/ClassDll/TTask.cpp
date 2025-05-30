#include "TTask.h"
TTask:: TTask()
{
 x = 0.0;
 y = 0.0;
}
TTask:: ~TTask()
{
}
void TTask::set_X(double _x)
{
 x = _x;
}
double TTask::get_X()
{
 return x;
}
void TTask::set_Y(double _y)
{
 y = _y;
}
double TTask::get_Y()
{
 return y;
}