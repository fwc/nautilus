/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1045
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1045
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
void test(val<bool> var_0, val<long long int> var_1, val<unsigned short> var_3, val<bool> var_5, val<unsigned short> var_6, val<short> var_8, val<bool> var_10, val<unsigned char> var_12, val<int> zero, val<short*> var_13, val<bool*> var_14, val<unsigned int*> var_15) {
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) ((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) + ((~(0U)))))) != ((((!(var_0))) ? (max((((/* implicit */val<long long int>) var_0)), (var_1))) : (-5435070755036154401LL))))))));
    *var_14 = ((/* implicit */val<bool>) max((*var_14), (((/* implicit */val<bool>) var_8))));
    *var_15 = ((/* implicit */val<unsigned int>) min((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_5)), (var_12)))) : (((/* implicit */val<int>) min((var_3), (((/* implicit */val<unsigned short>) (val<short>)-21515))))))), (((/* implicit */val<int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
long long int var_1 = 2166297361196373818LL;
unsigned short var_3 = (unsigned short)39428;
bool var_5 = (bool)1;
unsigned short var_6 = (unsigned short)65184;
short var_8 = (short)9009;
bool var_10 = (bool)1;
unsigned char var_12 = (unsigned char)36;
int zero = 0;
short var_13 = (short)10157;
bool var_14 = (bool)0;
unsigned int var_15 = 1444561311U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)10157;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_8, var_10, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
