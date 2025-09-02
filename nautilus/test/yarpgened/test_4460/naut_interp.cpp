/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4460
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4460
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
void test(val<bool> var_1, val<unsigned char> var_2, val<bool> var_9, val<unsigned long long int> var_10, val<unsigned char> var_12, val<int> zero, val<unsigned char*> var_14, val<signed char*> var_15, val<bool*> var_16, val<long long int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned char>) (val<short>)-4369);
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) 357836209)) | (18014398509481983ULL)));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((var_1) ? (524287U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65535))))), (((/* implicit */val<unsigned int>) (~(357836195))))))) ? (((/* implicit */val<unsigned long long int>) (((~(3099002213U))) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12)))))) : (var_10)));
    *var_17 = ((/* implicit */val<long long int>) (+(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<int>) (val<unsigned char>)240)) : (((/* implicit */val<int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_2 = (unsigned char)64;
bool var_9 = (bool)1;
unsigned long long int var_10 = 11447711227374810602ULL;
unsigned char var_12 = (unsigned char)210;
int zero = 0;
unsigned char var_14 = (unsigned char)173;
signed char var_15 = (signed char)-30;
bool var_16 = (bool)0;
long long int var_17 = 4318461905882638921LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)239;
    value_mismatch |= var_15 != (signed char)-1;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 240LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_9, var_10, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
