/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1348
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1348
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
void test(val<unsigned char> var_9, val<unsigned char> var_12, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)120)) ? (((/* implicit */val<int>) (val<unsigned char>)175)) : (((/* implicit */val<int>) (val<unsigned char>)226))))) ? (((/* implicit */val<int>) (val<unsigned char>)225)) : (((/* implicit */val<int>) min(((val<unsigned char>)6), ((val<unsigned char>)64))))))) ? (((((/* implicit */val<bool>) ((val<signed char>) (val<unsigned char>)224))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-17))))) : (((/* implicit */val<int>) min((var_9), (((/* implicit */val<unsigned char>) (val<signed char>)-115))))))) : (min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)114))))), (((((/* implicit */val<bool>) (val<signed char>)70)) ? (((/* implicit */val<int>) (val<signed char>)115)) : (((/* implicit */val<int>) (val<unsigned char>)6))))))));
    *var_20 = var_12;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)56;
unsigned char var_12 = (unsigned char)154;
int zero = 0;
unsigned char var_19 = (unsigned char)115;
unsigned char var_20 = (unsigned char)194;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (unsigned char)154;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_12, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
