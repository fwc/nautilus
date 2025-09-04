/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1876
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1876
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
void test(val<unsigned int> var_1, val<int> var_3, val<long long int> var_6, val<int> var_11, val<bool> var_14, val<bool> var_17, val<int> zero, val<int*> var_18, val<bool*> var_19) {
    *var_18 = max((((min((8), (var_11))) | (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) var_14)))))), (((var_3) & (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))));
    *var_19 = ((min(((~(1394801418))), (max((((/* implicit */val<int>) (val<bool>)1)), (1107776165))))) >= (-1475085457));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 992393413U;
int var_3 = -1383371054;
long long int var_6 = 1593784209318072422LL;
int var_11 = -1983913269;
bool var_14 = (bool)0;
bool var_17 = (bool)1;
int zero = 0;
int var_18 = 1431508199;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_11, var_14, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
