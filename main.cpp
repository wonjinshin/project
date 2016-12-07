#include "lib/diff-match-patch-cpp-stl/diff_match_patch.h"
#include <string>
#include <iostream>

using namespace std;
int main(int argc, char **argv) {
 diff_match_patch<wstring> dmp;
 wstring str1 = L"First string in diff";
 wstring str2 = L"Second string in diff";
 wstring strPatch = dmp.patch_toText(dmp.patch_make(str1, str2));
 pair<wstring, vector<bool> > out
   = dmp.patch_apply(dmp.patch_fromText(strPatch), str1);
 wstring strResult = out.first;
 // here, strResult will equal str2 above.
 wcout << strResult << endl;
 return 0;
}
