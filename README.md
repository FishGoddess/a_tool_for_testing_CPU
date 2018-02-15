# a_tool_for_testing_CPU
I wrote it with vs2017, so it may need vc2017.

原本想加入显示 CPU　型号的功能，查了一下，需要用汇编来写，使用 cpuid 并将 eax 作为输入参数才能实现，后来实在没有继续完善的时间了，所以就没加。。。

这个测试器是通过让 CPU 跑固定的任务，然后看完成时间，时间越短越好
It has some missions, and record the time CPU worked. So to the time, shorter is better.
