/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9495
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9495
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
void test(val<unsigned int> var_10, val<int> zero, val<unsigned short*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) min((var_10), (var_10)));
    *var_16 = ((/* implicit */val<int>) (val<short>)-9478);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1298068007U;
int zero = 0;
unsigned short var_15 = (unsigned short)45581;
int var_16 = 2028566521;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)61991;
    value_mismatch |= var_16 != -9478;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_15, &var_16);
  checksum();
}
