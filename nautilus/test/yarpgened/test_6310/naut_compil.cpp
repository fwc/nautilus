/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6310
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6310
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
void test(val<unsigned char> var_0, val<unsigned char> var_6, val<long long int> var_8, val<int> zero, val<bool*> var_11, val<unsigned int*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<bool>) var_0);
    *var_12 = ((/* implicit */val<unsigned int>) var_0);
    *var_13 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned int>) var_6))))))) : (((val<unsigned long long int>) ((val<unsigned short>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned char var_6 = (unsigned char)31;
long long int var_8 = 6439646599944070441LL;
int zero = 0;
bool var_11 = (bool)1;
unsigned int var_12 = 2259576894U;
signed char var_13 = (signed char)44;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 162U;
    value_mismatch |= var_13 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
}
