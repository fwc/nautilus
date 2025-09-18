/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6668
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6668
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<unsigned short> var_3, val<signed char> var_5, val<int> zero, val<int*> var_11, val<int*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<int>) var_1);
    *var_12 = ((/* implicit */val<int>) var_0);
    *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) (~(((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_3)))) % (((/* implicit */val<int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
unsigned int var_1 = 2992377683U;
unsigned short var_3 = (unsigned short)34178;
signed char var_5 = (signed char)-78;
int zero = 0;
int var_11 = 720054124;
int var_12 = -935638093;
signed char var_13 = (signed char)-103;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -1302589613;
    value_mismatch |= var_12 != 36;
    value_mismatch |= var_13 != (signed char)-103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, zero, &var_11, &var_12, &var_13);
  checksum();
}
