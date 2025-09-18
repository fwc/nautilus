/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7615
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7615
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
void test(val<signed char> var_0, val<unsigned int> var_9, val<signed char> var_14, val<int> zero, val<bool*> var_16, val<unsigned int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<bool>) (((+(var_9))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)59)))));
    *var_17 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) || (((/* implicit */val<bool>) (-(((val<unsigned long long int>) (val<short>)-16178)))))));
    *var_18 = ((/* implicit */val<signed char>) min((*var_18), (((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) * (((((val<unsigned long long int>) (val<signed char>)-59)) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned int var_9 = 3593426482U;
signed char var_14 = (signed char)81;
int zero = 0;
bool var_16 = (bool)1;
unsigned int var_17 = 3357316119U;
signed char var_18 = (signed char)105;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 1U;
    value_mismatch |= var_18 != (signed char)81;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
