/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2568
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2568
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
void test(val<bool> var_1, val<unsigned long long int> var_5, val<short> var_6, val<int> zero, val<short*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<short>) max((min((((/* implicit */val<unsigned long long int>) var_1)), (min((5960097782112810385ULL), (((/* implicit */val<unsigned long long int>) 9223372036854775807LL)))))), (var_5)));
    *var_16 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned long long int var_5 = 14403662488650694695ULL;
short var_6 = (short)-17365;
int zero = 0;
short var_15 = (short)-20331;
int var_16 = 828013619;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-16345;
    value_mismatch |= var_16 != -17365;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
