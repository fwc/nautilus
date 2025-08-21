/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 529
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=529
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
void test(val<int> var_3, val<unsigned long long int> var_13, val<int> zero, val<int*> var_17, val<unsigned short*> var_18) {
    *var_17 = var_3;
    *var_18 = ((/* implicit */val<unsigned short>) ((val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)30)) ? (var_13) : (((/* implicit */val<unsigned long long int>) -315849750))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 648050686;
unsigned long long int var_13 = 11135528114082102943ULL;
int zero = 0;
int var_17 = 81781458;
unsigned short var_18 = (unsigned short)39608;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 648050686;
    value_mismatch |= var_18 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_13, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
