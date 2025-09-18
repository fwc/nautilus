/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8433
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8433
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
void test(val<int> var_0, val<int> var_4, val<bool> var_7, val<signed char> var_9, val<unsigned char> var_10, val<bool> var_12, val<int> zero, val<unsigned char*> var_14, val<signed char*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17, val<short*> var_18) {
    *var_14 = ((/* implicit */val<unsigned char>) (+((~(((/* implicit */val<int>) ((var_0) != (((/* implicit */val<int>) (val<unsigned char>)212)))))))));
    *var_15 ^= ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((val<bool>) var_10)))));
    *var_16 ^= ((/* implicit */val<unsigned char>) ((val<unsigned int>) var_12));
    *var_17 *= ((/* implicit */val<unsigned int>) min((var_4), (((/* implicit */val<int>) var_9))));
    *var_18 = ((/* implicit */val<short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1201302711;
int var_4 = -1094686085;
bool var_7 = (bool)0;
signed char var_9 = (signed char)103;
unsigned char var_10 = (unsigned char)109;
bool var_12 = (bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)117;
signed char var_15 = (signed char)112;
unsigned char var_16 = (unsigned char)242;
unsigned int var_17 = 2254540836U;
short var_18 = (short)14151;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)254;
    value_mismatch |= var_15 != (signed char)-114;
    value_mismatch |= var_16 != (unsigned char)242;
    value_mismatch |= var_17 != 3381602636U;
    value_mismatch |= var_18 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_9, var_10, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
