/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7466
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7466
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
void test(val<signed char> var_1, val<unsigned short> var_6, val<unsigned char> var_7, val<int> var_8, val<unsigned int> var_11, val<unsigned long long int> var_12, val<unsigned char> var_15, val<unsigned long long int> var_18, val<signed char> var_19, val<int> zero, val<signed char*> var_20, val<unsigned short*> var_21, val<bool*> var_22, val<unsigned short*> var_23) {
    *var_20 = ((/* implicit */val<signed char>) max((*var_20), (((/* implicit */val<signed char>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((var_18), (((/* implicit */val<unsigned long long int>) var_6)))))))))))));
    *var_21 = ((/* implicit */val<unsigned short>) min((var_15), (((/* implicit */val<unsigned char>) var_19))));
    *var_22 = ((/* implicit */val<bool>) var_11);
    *var_23 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((0) ^ (((/* implicit */val<int>) (val<signed char>)45))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) var_8)) : (var_11)))) : ((~(var_12)))))) ? (((/* implicit */val<int>) var_15)) : (min((((/* implicit */val<int>) var_6)), (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<signed char>)-41)) : (((/* implicit */val<int>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
unsigned short var_6 = (unsigned short)62816;
unsigned char var_7 = (unsigned char)153;
int var_8 = 1340677695;
unsigned int var_11 = 2240082636U;
unsigned long long int var_12 = 9052745058504508611ULL;
unsigned char var_15 = (unsigned char)250;
unsigned long long int var_18 = 13620250125170204481ULL;
signed char var_19 = (signed char)7;
int zero = 0;
signed char var_20 = (signed char)45;
unsigned short var_21 = (unsigned short)27896;
bool var_22 = (bool)1;
unsigned short var_23 = (unsigned short)62458;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)45;
    value_mismatch |= var_21 != (unsigned short)7;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (unsigned short)250;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_7, var_8, var_11, var_12, var_15, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
