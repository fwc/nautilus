/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7451
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7451
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
void test(val<long long int> var_0, val<short> var_3, val<bool> var_5, val<short> var_6, val<short> var_8, val<long long int> var_9, val<bool> var_10, val<unsigned int> var_12, val<int> zero, val<unsigned char*> var_13, val<unsigned int*> var_14) {
    *var_13 -= ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) var_6)), (var_0)));
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((var_9) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-61))))), (((/* implicit */val<long long int>) (!(var_10))))))) ? (min((((var_5) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (var_9))), (((((/* implicit */val<bool>) 1017102896U)) ? (var_0) : (((/* implicit */val<long long int>) 1017102896U)))))) : (((/* implicit */val<long long int>) ((((((/* implicit */val<int>) var_3)) ^ (((/* implicit */val<int>) (val<unsigned short>)31775)))) << (((((((((/* implicit */val<bool>) var_12)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))) + (787372071606359044LL))) - (3LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -787372071606359024LL;
short var_3 = (short)11012;
bool var_5 = (bool)0;
short var_6 = (short)20602;
short var_8 = (short)-9569;
long long int var_9 = 5629942894408583521LL;
bool var_10 = (bool)0;
unsigned int var_12 = 3627886603U;
int zero = 0;
unsigned char var_13 = (unsigned char)77;
unsigned int var_14 = 1226759834U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)61;
    value_mismatch |= var_14 != 3319196688U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_8, var_9, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
