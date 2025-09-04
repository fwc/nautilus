/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7255
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7255
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
void test(val<unsigned int> var_6, val<unsigned short> var_7, val<signed char> var_9, val<bool> var_13, val<long long int> var_17, val<int> zero, val<long long int*> var_18, val<signed char*> var_19) {
    *var_18 = ((9223372036854775807LL) << (((/* implicit */val<int>) ((var_13) || (((/* implicit */val<bool>) ((-830948916) & (830948916))))))));
    *var_19 -= ((/* implicit */val<signed char>) max((min((min((((/* implicit */val<long long int>) 830948916)), (var_17))), (((/* implicit */val<long long int>) ((val<unsigned char>) var_7))))), (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max(((val<short>)-21123), (((/* implicit */val<short>) var_9)))))) * (((((/* implicit */val<bool>) -830948916)) ? (((/* implicit */val<unsigned int>) 2147483647)) : (var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 26956465U;
unsigned short var_7 = (unsigned short)35263;
signed char var_9 = (signed char)-42;
bool var_13 = (bool)1;
long long int var_17 = -7277324831755666943LL;
int zero = 0;
long long int var_18 = -858497565221252806LL;
signed char var_19 = (signed char)-96;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -2LL;
    value_mismatch |= var_19 != (signed char)118;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, var_13, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
