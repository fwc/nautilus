/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3388
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3388
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
void test(val<long long int> var_3, val<long long int> var_6, val<signed char> var_12, val<short> var_13, val<unsigned int> var_15, val<int> zero, val<unsigned char*> var_18, val<unsigned int*> var_19) {
    *var_18 &= ((/* implicit */val<unsigned char>) max((var_3), (min((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) % (var_15)))), (-4261940426393614LL)))));
    *var_19 = ((/* implicit */val<unsigned int>) ((val<unsigned char>) ((((/* implicit */val<int>) ((val<unsigned short>) var_6))) & (((/* implicit */val<int>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 740842257085791713LL;
long long int var_6 = -660251454309304336LL;
signed char var_12 = (signed char)-32;
short var_13 = (short)9530;
unsigned int var_15 = 2507489006U;
int zero = 0;
unsigned char var_18 = (unsigned char)2;
unsigned int var_19 = 3829910008U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != 48U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_12, var_13, var_15, zero, &var_18, &var_19);
  checksum();
}
