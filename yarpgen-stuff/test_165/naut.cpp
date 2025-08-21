/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 165
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=165
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
void test(val<long long int> var_1, val<unsigned long long int> var_11, val<unsigned long long int> var_13, val<unsigned int> var_15, val<int> zero, val<short*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) (~(var_1)))) * (((max((var_11), (16483998113720305834ULL))) - (min((((/* implicit */val<unsigned long long int>) var_15)), (2854140719467264522ULL)))))));
    *var_18 = var_13;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3209924708779771084LL;
unsigned long long int var_11 = 12462449465747309702ULL;
unsigned long long int var_13 = 5790866714578925997ULL;
unsigned int var_15 = 2509750554U;
int zero = 0;
short var_17 = (short)19094;
unsigned long long int var_18 = 6793357117691029691ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-208;
    value_mismatch |= var_18 != 5790866714578925997ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_13, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
