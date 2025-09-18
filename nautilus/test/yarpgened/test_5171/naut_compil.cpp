/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5171
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5171
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
void test(val<bool> var_2, val<unsigned int> var_4, val<short> var_6, val<unsigned char> var_7, val<unsigned char> var_9, val<int> zero, val<long long int*> var_11, val<long long int*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) var_4);
    *var_12 = ((/* implicit */val<long long int>) var_7);
    *var_13 = ((((((/* implicit */val<int>) var_2)) < (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))))) ? ((-(((((/* implicit */val<int>) var_9)) - (((/* implicit */val<int>) (val<unsigned char>)56)))))) : (((/* implicit */val<int>) var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
unsigned int var_4 = 126997330U;
short var_6 = (short)11854;
unsigned char var_7 = (unsigned char)121;
unsigned char var_9 = (unsigned char)105;
int zero = 0;
long long int var_11 = -7491823042052786798LL;
long long int var_12 = 6083369356572832777LL;
int var_13 = -1167193599;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 126997330LL;
    value_mismatch |= var_12 != 121LL;
    value_mismatch |= var_13 != 11854;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
}
