/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7374
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7374
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
void test(val<unsigned char> var_1, val<unsigned short> var_4, val<unsigned long long int> var_9, val<unsigned char> var_17, val<int> zero, val<bool*> var_19, val<signed char*> var_20) {
    *var_19 = ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) var_4)))) & ((~(((/* implicit */val<int>) var_1))))))) && (((/* implicit */val<bool>) var_9)));
    *var_20 = ((/* implicit */val<signed char>) (val<unsigned char>)201);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)157;
unsigned short var_4 = (unsigned short)11659;
unsigned long long int var_9 = 5393961781107756648ULL;
unsigned char var_17 = (unsigned char)116;
int zero = 0;
bool var_19 = (bool)1;
signed char var_20 = (signed char)103;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (signed char)-55;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_9, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
