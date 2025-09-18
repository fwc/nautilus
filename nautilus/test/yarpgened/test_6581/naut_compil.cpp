/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6581
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6581
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
void test(val<long long int> var_2, val<int> var_8, val<unsigned short> var_11, val<int> zero, val<signed char*> var_13, val<bool*> var_14) {
    *var_13 |= ((/* implicit */val<signed char>) ((val<int>) ((((((/* implicit */val<bool>) var_2)) ? (var_8) : (((/* implicit */val<int>) var_11)))) * (((((/* implicit */val<int>) (val<short>)2421)) / (var_8))))));
    *var_14 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) min(((val<short>)28983), (((/* implicit */val<short>) (val<signed char>)83)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8650227200062089474LL;
int var_8 = -83390510;
unsigned short var_11 = (unsigned short)65200;
int zero = 0;
signed char var_13 = (signed char)-68;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-68;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_11, zero, &var_13, &var_14);
  checksum();
}
