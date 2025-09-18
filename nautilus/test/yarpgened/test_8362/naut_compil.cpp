/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8362
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8362
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
void test(val<unsigned int> var_1, val<short> var_2, val<unsigned char> var_4, val<unsigned int> var_12, val<int> zero, val<unsigned short*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) min((((val<unsigned int>) var_2)), (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_4)))))))) : ((+(((((/* implicit */val<bool>) 4294967295U)) ? (5027689433322113925LL) : (((/* implicit */val<long long int>) var_1))))))));
    *var_18 = ((/* implicit */val<signed char>) 12103681686590981499ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 67665043U;
short var_2 = (short)-9975;
unsigned char var_4 = (unsigned char)109;
unsigned int var_12 = 3382127384U;
int zero = 0;
unsigned short var_17 = (unsigned short)26;
signed char var_18 = (signed char)98;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)55561;
    value_mismatch |= var_18 != (signed char)123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_12, zero, &var_17, &var_18);
  checksum();
}
