# a_tool_for_testing_CPU
## I wrote it with vs2017, so it may need vc2017.

*原本想加入显示 CPU　型号的功能，查了一下，需要用汇编来写，使用 cpuid 并将 eax 作为输入参数才能实现，后来实在没有继续完善的时间了，所以就没加。。。*

这个测试器是通过让 CPU 跑固定的任务，然后看完成时间，时间越短越好<br/>
It has some missions, and record the time CPU worked. So to the time, shorter is better.<br/>

但是，我觉得单线程的完成时间实在太慢。。。而且有些机器比较老的，CPU 性能相对较弱，完成整个测试需要花费相当多的时间，所以，我在 2017 年的 2 月份又重新写了一个测试器。。。<br/>
Because that, its time is too long in some old CPUs, I have to write another software... But this test still works! if your CPU is new, don't need too much time!<br/>
