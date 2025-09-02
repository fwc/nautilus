/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6319
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6319
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_1, val<bool> var_6, val<int> var_7, val<bool> var_10, val<int> zero, val<unsigned int*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_0)) ? (var_7) : (((((/* implicit */val<int>) (!(var_6)))) & (((/* implicit */val<int>) ((var_7) >= (var_7))))))));
    *var_12 &= ((((/* implicit */val<int>) var_1)) * (((((/* implicit */val<int>) var_10)) * (((/* implicit */val<int>) ((val<unsigned char>) (-2147483647 - 1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8502413168451123441ULL;
unsigned char var_1 = (unsigned char)117;
bool var_6 = (bool)0;
int var_7 = 1597749955;
bool var_10 = (bool)1;
int zero = 0;
unsigned int var_11 = 4146143917U;
int var_12 = -680335197;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1597749955U;
    value_mismatch |= var_12 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_7, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
