/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 975
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=975
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
void test(val<long long int> var_0, val<bool> var_1, val<long long int> var_4, val<int> zero, val<unsigned char*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) min((*var_13), (((val<unsigned char>) 15ULL))));
    *var_14 &= ((/* implicit */val<unsigned short>) ((val<int>) (-(((var_1) ? (var_0) : (var_4))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5359853539997958958LL;
bool var_1 = (bool)1;
long long int var_4 = 8857574189896082201LL;
int zero = 0;
unsigned char var_13 = (unsigned char)54;
unsigned short var_14 = (unsigned short)64319;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)15;
    value_mismatch |= var_14 != (unsigned short)49966;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
