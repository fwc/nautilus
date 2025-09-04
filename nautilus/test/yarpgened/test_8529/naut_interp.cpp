/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8529
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8529
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
void test(val<unsigned char> var_0, val<long long int> var_10, val<short> var_14, val<signed char> var_15, val<int> zero, val<bool*> var_16, val<bool*> var_17, val<bool*> var_18) {
    *var_16 = ((val<bool>) var_14);
    *var_17 = ((/* implicit */val<bool>) (((val<bool>)1) ? ((~(((/* implicit */val<int>) var_0)))) : (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))) > (var_10))))))));
    *var_18 = ((/* implicit */val<bool>) (val<signed char>)57);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
long long int var_10 = -5231314973088321143LL;
short var_14 = (short)24296;
signed char var_15 = (signed char)106;
int zero = 0;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
