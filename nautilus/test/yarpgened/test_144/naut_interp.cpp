/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 144
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=144
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
void test(val<signed char> var_0, val<unsigned char> var_2, val<bool> var_4, val<unsigned char> var_11, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max(((-(((/* implicit */val<int>) var_2)))), ((+(((/* implicit */val<int>) var_11))))))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_4))));
    *var_14 = ((/* implicit */val<int>) min((min((((/* implicit */val<unsigned long long int>) (val<short>)252)), (((val<unsigned long long int>) var_0)))), (((/* implicit */val<unsigned long long int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned char var_2 = (unsigned char)122;
bool var_4 = (bool)1;
unsigned char var_11 = (unsigned char)34;
int zero = 0;
unsigned long long int var_13 = 13106819532107437476ULL;
int var_14 = 1611267808;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 34ULL;
    value_mismatch |= var_14 != 60;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
