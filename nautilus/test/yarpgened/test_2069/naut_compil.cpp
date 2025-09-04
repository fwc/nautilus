/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2069
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2069
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
void test(val<signed char> var_0, val<signed char> var_1, val<unsigned long long int> var_2, val<signed char> var_4, val<signed char> var_7, val<signed char> var_9, val<unsigned long long int> var_10, val<signed char> var_12, val<signed char> var_15, val<signed char> var_16, val<int> zero, val<unsigned int*> var_17, val<signed char*> var_18, val<signed char*> var_19, val<int*> var_20, val<signed char*> var_21) {
    *var_17 = ((/* implicit */val<unsigned int>) max((max((((/* implicit */val<int>) var_15)), (((val<int>) var_7)))), (((/* implicit */val<int>) (val<signed char>)-126))));
    *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((val<int>) var_10))) != (var_10))))));
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((var_0), (var_7))))) : (((val<unsigned int>) var_0))))) ? (((val<unsigned long long int>) var_1)) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((min(((val<signed char>)-63), ((val<signed char>)-63))), (var_1)))))));
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<int>) min(((val<signed char>)-27), (max((var_16), (var_4)))))) != (((/* implicit */val<int>) var_12))));
    *var_21 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_4))))), ((+(var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
signed char var_1 = (signed char)-46;
unsigned long long int var_2 = 16525925574675003988ULL;
signed char var_4 = (signed char)106;
signed char var_7 = (signed char)55;
signed char var_9 = (signed char)-111;
unsigned long long int var_10 = 14492684915573058531ULL;
signed char var_12 = (signed char)-3;
signed char var_15 = (signed char)40;
signed char var_16 = (signed char)37;
int zero = 0;
unsigned int var_17 = 2695735207U;
signed char var_18 = (signed char)-60;
signed char var_19 = (signed char)-103;
int var_20 = -319448406;
signed char var_21 = (signed char)46;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 55U;
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (signed char)-46;
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != (signed char)-106;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_7, var_9, var_10, var_12, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
