/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4599
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4599
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
void test(val<unsigned int> var_2, val<signed char> var_8, val<unsigned int> var_11, val<signed char> var_13, val<signed char> var_14, val<int> zero, val<unsigned int*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) var_14);
    *var_19 = ((/* implicit */val<short>) ((((max((9295074236493105299ULL), (((/* implicit */val<unsigned long long int>) var_11)))) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_13)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))))) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1125039010U;
signed char var_8 = (signed char)36;
unsigned int var_11 = 916954177U;
signed char var_13 = (signed char)-61;
signed char var_14 = (signed char)-50;
int zero = 0;
unsigned int var_18 = 3797697365U;
short var_19 = (short)-8389;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4294967246U;
    value_mismatch |= var_19 != (short)-12766;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_11, var_13, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
