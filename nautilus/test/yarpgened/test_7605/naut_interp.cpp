/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7605
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7605
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
void test(val<unsigned long long int> var_0, val<long long int> var_1, val<unsigned int> var_8, val<unsigned int> var_9, val<short> var_10, val<int> zero, val<int*> var_16, val<unsigned char*> var_17, val<bool*> var_18, val<unsigned long long int*> var_19) {
    *var_16 += ((/* implicit */val<int>) var_1);
    *var_17 = ((/* implicit */val<unsigned char>) var_9);
    *var_18 = ((/* implicit */val<bool>) var_8);
    *var_19 = ((var_0) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17146962581684754395ULL;
long long int var_1 = -2225085475780299428LL;
unsigned int var_8 = 2830269664U;
unsigned int var_9 = 2865208033U;
short var_10 = (short)-4141;
int zero = 0;
int var_16 = -1421500849;
unsigned char var_17 = (unsigned char)235;
bool var_18 = (bool)0;
unsigned long long int var_19 = 8621574819330641048ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 679580587;
    value_mismatch |= var_17 != (unsigned char)225;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 17146962581684754395ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, var_9, var_10, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
