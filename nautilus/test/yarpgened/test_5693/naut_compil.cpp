/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5693
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5693
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
void test(val<unsigned char> var_2, val<unsigned int> var_3, val<unsigned int> var_4, val<short> var_12, val<int> zero, val<int*> var_19, val<bool*> var_20, val<unsigned char*> var_21, val<int*> var_22, val<bool*> var_23) {
    *var_19 = ((/* implicit */val<int>) (+(min((((/* implicit */val<unsigned long long int>) (val<short>)16560)), (15079566044337992647ULL)))));
    *var_20 = ((((/* implicit */val<int>) max((var_2), (((/* implicit */val<unsigned char>) (val<bool>)1))))) <= (((/* implicit */val<int>) var_12)));
    *var_21 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) (!((val<bool>)1))))));
    *var_22 *= ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<signed char>)-106)))))))) - (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<unsigned char>)0))))) && (((/* implicit */val<bool>) var_4))))));
    *var_23 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<bool>)1)), (var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)138;
unsigned int var_3 = 2234233090U;
unsigned int var_4 = 3551916544U;
short var_12 = (short)-18532;
int zero = 0;
int var_19 = -943833574;
bool var_20 = (bool)0;
unsigned char var_21 = (unsigned char)102;
int var_22 = 187696779;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 16560;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (unsigned char)0;
    value_mismatch |= var_22 != -187696779;
    value_mismatch |= var_23 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_12, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
