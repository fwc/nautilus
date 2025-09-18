/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7176
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7176
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
void test(val<bool> var_0, val<unsigned char> var_2, val<unsigned int> var_6, val<unsigned short> var_14, val<int> zero, val<int*> var_16, val<unsigned long long int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<int>) (+(max((((/* implicit */val<unsigned int>) -1)), (((var_6) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14)))))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<int>) max((var_2), (((/* implicit */val<unsigned char>) var_0))))) | (((/* implicit */val<int>) var_14))))));
    *var_18 = ((/* implicit */val<signed char>) (+((+(((/* implicit */val<int>) var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_2 = (unsigned char)140;
unsigned int var_6 = 880378953U;
unsigned short var_14 = (unsigned short)42933;
int zero = 0;
int var_16 = -947943571;
unsigned long long int var_17 = 10612961348153184527ULL;
signed char var_18 = (signed char)46;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -1;
    value_mismatch |= var_17 != 18446744073709508674ULL;
    value_mismatch |= var_18 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
