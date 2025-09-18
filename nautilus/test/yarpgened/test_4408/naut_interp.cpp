/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4408
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4408
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
void test(val<unsigned long long int> var_5, val<short> var_6, val<unsigned int> var_7, val<unsigned char> var_11, val<unsigned long long int> var_15, val<int> zero, val<unsigned int*> var_18, val<short*> var_19) {
    *var_18 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) ? (max((((/* implicit */val<unsigned long long int>) ((val<short>) var_6))), (var_15))) : (((((var_7) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))))) ? (var_15) : (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned short>)42561)))))))));
    *var_19 = ((/* implicit */val<short>) min(((-(var_15))), (((/* implicit */val<unsigned long long int>) ((val<unsigned char>) 6496070324630970923ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7529710800703930410ULL;
short var_6 = (short)23977;
unsigned int var_7 = 511000743U;
unsigned char var_11 = (unsigned char)248;
unsigned long long int var_15 = 12996397731694265446ULL;
int zero = 0;
unsigned int var_18 = 2412938327U;
short var_19 = (short)-23521;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 223347782U;
    value_mismatch |= var_19 != (short)43;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_11, var_15, zero, &var_18, &var_19);
  checksum();
}
