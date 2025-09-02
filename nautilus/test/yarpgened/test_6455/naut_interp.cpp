/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6455
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6455
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<bool> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_6, val<bool> var_9, val<bool> var_11, val<bool> var_12, val<short> var_13, val<bool> var_14, val<int> zero, val<bool*> var_19, val<short*> var_20, val<bool*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)31411))) - (9951649506408469204ULL)));
    *var_20 = ((/* implicit */val<short>) min((((/* implicit */val<int>) ((((/* implicit */val<int>) min(((val<short>)-31412), (((/* implicit */val<short>) (val<bool>)1))))) != (((/* implicit */val<int>) min((var_14), (var_11))))))), (min((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) != (var_1)))), (((((((/* implicit */val<int>) (val<short>)-31411)) + (2147483647))) << (((((/* implicit */val<int>) var_0)) - (15196)))))))));
    *var_21 &= ((min((max((var_4), (((/* implicit */val<unsigned long long int>) var_13)))), (max((var_4), (((/* implicit */val<unsigned long long int>) var_11)))))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<bool>)0)) + (((/* implicit */val<int>) (val<bool>)1)))) != (((((/* implicit */val<int>) var_11)) << (((/* implicit */val<int>) var_11)))))))));
    *var_22 = ((/* implicit */val<bool>) max((((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) | (var_6))) | (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) & (7730537186330975752ULL))))), (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_0)) * (((/* implicit */val<int>) var_9))))), (max((((/* implicit */val<unsigned long long int>) (val<bool>)0)), (var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15196;
unsigned long long int var_1 = 814459604297531635ULL;
bool var_3 = (bool)0;
unsigned long long int var_4 = 7117485725707917047ULL;
unsigned long long int var_6 = 486605712772219670ULL;
bool var_9 = (bool)0;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
short var_13 = (short)15504;
bool var_14 = (bool)0;
int zero = 0;
bool var_19 = (bool)0;
short var_20 = (short)21453;
bool var_21 = (bool)1;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_9, var_11, var_12, var_13, var_14, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
