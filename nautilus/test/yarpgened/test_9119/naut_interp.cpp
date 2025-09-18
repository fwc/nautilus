/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9119
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9119
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
void test(val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned short> var_7, val<unsigned short> var_13, val<unsigned int> var_18, val<int> zero, val<bool*> var_19, val<unsigned char*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_5))));
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((3531478755U) <= (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_6)) / (((/* implicit */val<int>) var_5)))))))) >= (((/* implicit */val<int>) var_7))));
    *var_21 = ((/* implicit */val<bool>) max((*var_21), (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_5)), (max((((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned short>) (val<unsigned char>)94)), (var_13)))), (((((/* implicit */val<bool>) 763488523U)) ? (var_18) : (((/* implicit */val<unsigned int>) 502704607)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)255;
unsigned char var_6 = (unsigned char)221;
unsigned short var_7 = (unsigned short)56412;
unsigned short var_13 = (unsigned short)46752;
unsigned int var_18 = 1187799175U;
int zero = 0;
bool var_19 = (bool)1;
unsigned char var_20 = (unsigned char)233;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_13, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
