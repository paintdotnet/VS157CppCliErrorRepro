# VS157CppCliErrorRepro
Repro for an internal error in the C++/CLI compiler that was introduced in VS 2017 15.7.

Reported at:
https://developercommunity.visualstudio.com/content/problem/246785/too-many-method-overloads-ccli-c1001-an-internal-e.html

Repro steps:
1. Open up solution in Visual Studio 2017 v15.7 or newer
2. Build -> Rebuild All

You'll see output like such:

```
1>------ Rebuild All started: Project: VS157CppCliErrorRepro, Configuration: Debug Win32 ------
1>stdafx.cpp
1>AssemblyInfo.cpp
1>NativeConversions.cpp
1>c:\src\scratch\vs157cppclierrorrepro\vs157cppclierrorrepro\nativeconversions.cpp(268): fatal error C1001: An internal error has occurred in the compiler.
1>(compiler file 'msc1.cpp', line 1516)
1> To work around this problem, try simplifying or changing the program near the locations listed above.
1>Please choose the Technical Support command on the Visual C++
1> Help menu, or open the Technical Support help file for more information
1>INTERNAL COMPILER ERROR in 'C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\CL.exe'
1>    Please choose the Technical Support command on the Visual C++
1>    Help menu, or open the Technical Support help file for more information
1>Done building project "VS157CppCliErrorRepro.vcxproj" -- FAILED.
========== Rebuild All: 0 succeeded, 1 failed, 0 skipped ==========
```
