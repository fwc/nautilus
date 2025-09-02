/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4501
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4501
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<int> var_3, val<int> zero, val<short*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<short>) max((*var_17), (((/* implicit */val<short>) var_3))));
    *var_18 = ((((/* implicit */val<bool>) (val<short>)16750)) ? (13112250658357144175ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)21441))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1390625709;
int zero = 0;
short var_17 = (short)-4483;
unsigned long long int var_18 = 11775488175387688155ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)17325;
    value_mismatch |= var_18 != 13112250658357144175ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
