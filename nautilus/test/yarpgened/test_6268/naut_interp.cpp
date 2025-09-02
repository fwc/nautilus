/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6268
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6268
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
void test(val<unsigned char> var_4, val<int> var_6, val<short> var_9, val<long long int> var_11, val<int> zero, val<bool*> var_15, val<short*> var_16, val<int*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = ((/* implicit */val<bool>) var_9);
    *var_16 = ((/* implicit */val<short>) var_4);
    *var_17 = ((/* implicit */val<int>) min((*var_17), (((/* implicit */val<int>) var_11))));
    *var_18 ^= ((/* implicit */val<unsigned long long int>) (-(var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)98;
int var_6 = 1257739202;
short var_9 = (short)-17142;
long long int var_11 = -6667370392365474814LL;
int zero = 0;
bool var_15 = (bool)1;
short var_16 = (short)7718;
int var_17 = -1277427199;
unsigned long long int var_18 = 18256747160981607929ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (short)98;
    value_mismatch |= var_17 != -1277427199;
    value_mismatch |= var_18 != 189996911483582919ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_9, var_11, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
