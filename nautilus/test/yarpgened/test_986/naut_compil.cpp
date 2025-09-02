/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 986
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=986
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_1, val<short> var_4, val<short> var_5, val<unsigned short> var_6, val<unsigned short> var_8, val<unsigned short> var_13, val<int> zero, val<int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = max(((+(((((/* implicit */val<bool>) -1LL)) ? (((/* implicit */val<int>) (val<unsigned short>)3568)) : (((/* implicit */val<int>) (val<unsigned char>)128)))))), (((/* implicit */val<int>) var_8)));
    *var_21 = min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned short>)61978))))) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_4)), (var_13)))) : ((+(((/* implicit */val<int>) var_5))))))), (min((((/* implicit */val<unsigned long long int>) var_1)), (max((((/* implicit */val<unsigned long long int>) var_6)), (16212566178724978361ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4535701573021032877LL;
short var_4 = (short)-30147;
short var_5 = (short)-27674;
unsigned short var_6 = (unsigned short)45959;
unsigned short var_8 = (unsigned short)35997;
unsigned short var_13 = (unsigned short)35811;
int zero = 0;
int var_20 = 58459007;
unsigned long long int var_21 = 15871952464249220990ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 35997;
    value_mismatch |= var_21 != 35389ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_8, var_13, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
