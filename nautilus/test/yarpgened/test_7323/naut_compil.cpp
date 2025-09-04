/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7323
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7323
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<bool> var_9, val<unsigned short> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) * (((/* implicit */val<int>) min((var_0), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_9)) >= (((/* implicit */val<int>) var_11))))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_10))));
    *var_16 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_9))))) | (min((9223372036854775807LL), (-9223372036854775807LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48022;
unsigned short var_1 = (unsigned short)10030;
bool var_9 = (bool)1;
unsigned short var_10 = (unsigned short)64769;
unsigned char var_11 = (unsigned char)143;
int zero = 0;
unsigned long long int var_14 = 3316260775376460621ULL;
unsigned long long int var_15 = 225830803250865295ULL;
signed char var_16 = (signed char)49;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_9, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
