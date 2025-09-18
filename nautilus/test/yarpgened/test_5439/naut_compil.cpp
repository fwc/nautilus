/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5439
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5439
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
void test(val<unsigned long long int> var_6, val<int> zero, val<short*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<short>) ((val<int>) var_6));
    *var_20 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) (val<short>)7168))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 478895444151588545ULL;
int zero = 0;
short var_19 = (short)-32269;
unsigned char var_20 = (unsigned char)32;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)22209;
    value_mismatch |= var_20 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_19, &var_20);
  checksum();
}
