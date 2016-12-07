#include "lib/diff-match-patch-cpp-stl/diff_match_patch.h"
2 #include <string>
3 #include <iostream>
4

5 using namespace std;
6 int main(int argc, char **argv) {
7   diff_match_patch<wstring> dmp;
8   wstring str1 = L"First string in diff";
9   wstring str2 = L"Second string in diff";
10   wstring strPatch = dmp.patch_toText(dmp.patch_make(str1, str2));
11   pair<wstring, vector<bool> > out
12     = dmp.patch_apply(dmp.patch_fromText(strPatch), str1);
13   wstring strResult = out.first;
14   // here, strResult will equal str2 above.
15   wcout << strResult << endl;
16   return 0;
17 }
