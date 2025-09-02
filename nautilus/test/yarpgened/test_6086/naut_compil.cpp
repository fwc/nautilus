/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6086
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6086
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
void test(val<unsigned char> var_0, val<long long int> var_3, val<long long int> var_6, val<signed char> var_8, val<unsigned short> var_13, val<int> zero, val<unsigned int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<bool>) (((val<bool>)1) ? (0LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) (val<signed char>)-1))))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<bool>)1))))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) ((val<signed char>) (val<signed char>)-1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
long long int var_3 = 2884251534346192228LL;
long long int var_6 = 7369139444732508726LL;
signed char var_8 = (signed char)-100;
unsigned short var_13 = (unsigned short)24453;
int zero = 0;
unsigned int var_14 = 2461095024U;
unsigned long long int var_15 = 11243353896243747603ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1U;
    value_mismatch |= var_15 != 18446744073709551615ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_8, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
