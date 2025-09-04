/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7824
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7824
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
void test(val<short> var_8, val<int> zero, val<int*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<int>) var_8);
    *var_11 = ((/* implicit */val<long long int>) (~((+(((((/* implicit */val<bool>) (val<unsigned short>)224)) ? (15293779744828148355ULL) : (((/* implicit */val<unsigned long long int>) 4294967295U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-5036;
int zero = 0;
int var_10 = -2125657884;
long long int var_11 = 4498149453992824146LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -5036;
    value_mismatch |= var_11 != 3152964328881403260LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
