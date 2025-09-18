/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5554
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5554
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<unsigned short> var_5, val<unsigned long long int> var_7, val<unsigned short> var_10, val<int> var_16, val<int> zero, val<long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned short*> var_19) {
    *var_17 = ((/* implicit */val<long long int>) var_16);
    *var_18 = var_7;
    *var_19 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_5))))) || (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) / (((/* implicit */val<int>) (val<short>)11887))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
signed char var_1 = (signed char)-54;
unsigned short var_5 = (unsigned short)16852;
unsigned long long int var_7 = 10049125972301069738ULL;
unsigned short var_10 = (unsigned short)16026;
int var_16 = -113086860;
int zero = 0;
long long int var_17 = -8865045356927946423LL;
unsigned long long int var_18 = 11114449972668629180ULL;
unsigned short var_19 = (unsigned short)27416;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -113086860LL;
    value_mismatch |= var_18 != 10049125972301069738ULL;
    value_mismatch |= var_19 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, var_10, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
}
