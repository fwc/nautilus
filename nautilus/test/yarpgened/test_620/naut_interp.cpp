/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 620
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=620
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
void test(val<unsigned short> var_1, val<signed char> var_2, val<signed char> var_3, val<unsigned short> var_5, val<unsigned short> var_6, val<signed char> var_11, val<signed char> var_18, val<int> zero, val<signed char*> var_19, val<signed char*> var_20) {
    *var_19 &= ((/* implicit */val<signed char>) ((min((((((/* implicit */val<int>) (val<signed char>)10)) - (((/* implicit */val<int>) (val<unsigned short>)65535)))), (((((/* implicit */val<bool>) (val<unsigned short>)64734)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_5)))))) <= (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<signed char>)-1)) : (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<int>) min((var_11), (var_2)))) : (((((/* implicit */val<bool>) (val<signed char>)-123)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_1))))))));
    *var_20 = var_11;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51879;
signed char var_2 = (signed char)19;
signed char var_3 = (signed char)77;
unsigned short var_5 = (unsigned short)12727;
unsigned short var_6 = (unsigned short)7520;
signed char var_11 = (signed char)-49;
signed char var_18 = (signed char)-72;
int zero = 0;
signed char var_19 = (signed char)115;
signed char var_20 = (signed char)-9;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != (signed char)-49;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_11, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
