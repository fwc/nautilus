/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9895
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9895
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
void test(val<bool> var_7, val<short> var_8, val<int> zero, val<unsigned char*> var_10, val<unsigned short*> var_11) {
    *var_10 &= ((/* implicit */val<unsigned char>) min((var_8), (((/* implicit */val<short>) var_7))));
    *var_11 = ((/* implicit */val<unsigned short>) max(((((val<bool>)0) ? (min((((/* implicit */val<unsigned long long int>) 2590999524989917284LL)), (4052770445269754008ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<bool>)0)), ((val<unsigned short>)24993))))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)24993)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned short>)15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)1;
short var_8 = (short)23220;
int zero = 0;
unsigned char var_10 = (unsigned char)192;
unsigned short var_11 = (unsigned short)1249;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)0;
    value_mismatch |= var_11 != (unsigned short)24993;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
