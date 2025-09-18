/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8229
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8229
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
void test(val<unsigned char> var_10, val<int> var_14, val<signed char> var_18, val<int> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<signed char>)-14)) < (((/* implicit */val<int>) (val<bool>)1))));
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<short>)-4711)) : (((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<bool>)0)), (var_19)))) ? (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) (val<signed char>)-116)))) : (((/* implicit */val<int>) (val<short>)4711))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)115;
int var_14 = -210486437;
signed char var_18 = (signed char)84;
int var_19 = -1436390999;
int zero = 0;
unsigned short var_20 = (unsigned short)54343;
unsigned char var_21 = (unsigned char)102;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != (unsigned char)153;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_14, var_18, var_19, zero, &var_20, &var_21);
  checksum();
}
