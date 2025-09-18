/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7147
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7147
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
void test(val<long long int> var_0, val<unsigned char> var_2, val<long long int> var_4, val<int> var_9, val<unsigned int> var_13, val<int> zero, val<short*> var_15, val<signed char*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<short>) var_2);
    *var_16 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((val<bool>) -1485079863)) ? (var_4) : (((/* implicit */val<long long int>) (((val<bool>)1) ? (var_13) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))))))))) || (((/* implicit */val<bool>) var_13))));
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) 6157705421486513898ULL)) && (((/* implicit */val<bool>) (-(var_0))))))) <= (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1899379073885240755LL;
unsigned char var_2 = (unsigned char)14;
long long int var_4 = -4442300350053814130LL;
int var_9 = -721489951;
unsigned int var_13 = 3439742056U;
int zero = 0;
short var_15 = (short)2215;
signed char var_16 = (signed char)-109;
signed char var_17 = (signed char)28;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)14;
    value_mismatch |= var_16 != (signed char)-110;
    value_mismatch |= var_17 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_9, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
}
