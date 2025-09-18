/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7070
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7070
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
void test(val<signed char> var_7, val<int> var_11, val<signed char> var_13, val<unsigned short> var_16, val<int> zero, val<int*> var_20, val<int*> var_21, val<unsigned short*> var_22, val<unsigned short*> var_23) {
    *var_20 = ((/* implicit */val<int>) max((*var_20), ((~(((((/* implicit */val<bool>) max((var_16), ((val<unsigned short>)448)))) ? (((/* implicit */val<int>) var_7)) : (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<unsigned short>)65535)) : (var_11)))))))));
    *var_21 = ((/* implicit */val<int>) min((*var_21), (max((((/* implicit */val<int>) (val<signed char>)0)), (max((((/* implicit */val<int>) ((val<signed char>) (val<unsigned short>)64891))), ((-(((/* implicit */val<int>) (val<unsigned short>)28159))))))))));
    *var_22 = ((/* implicit */val<unsigned short>) min((*var_22), (((/* implicit */val<unsigned short>) var_13))));
    *var_23 ^= (val<unsigned short>)0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)78;
int var_11 = 158269667;
signed char var_13 = (signed char)65;
unsigned short var_16 = (unsigned short)37033;
int zero = 0;
int var_20 = 1352240410;
int var_21 = -654494736;
unsigned short var_22 = (unsigned short)17691;
unsigned short var_23 = (unsigned short)50182;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1352240410;
    value_mismatch |= var_21 != -654494736;
    value_mismatch |= var_22 != (unsigned short)65;
    value_mismatch |= var_23 != (unsigned short)50182;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, var_13, var_16, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
