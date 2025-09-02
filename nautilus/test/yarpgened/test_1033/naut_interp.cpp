/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1033
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1033
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
void test(val<signed char> var_1, val<bool> var_2, val<unsigned char> var_3, val<bool> var_5, val<bool> var_6, val<bool> var_8, val<unsigned short> var_10, val<int> zero, val<unsigned short*> var_15, val<long long int*> var_16, val<signed char*> var_17) {
    *var_15 *= ((/* implicit */val<unsigned short>) 2886504981684725953LL);
    *var_16 = ((/* implicit */val<long long int>) ((max((var_2), ((val<bool>)1))) ? (min(((+(((/* implicit */val<int>) (val<unsigned char>)131)))), (((var_6) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_3)))))) : (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) max((var_1), (((/* implicit */val<signed char>) var_8))))) : (((/* implicit */val<int>) min(((val<unsigned short>)5865), ((val<unsigned short>)26933))))))));
    *var_17 |= ((/* implicit */val<signed char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-65;
bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)192;
bool var_5 = (bool)0;
bool var_6 = (bool)1;
bool var_8 = (bool)1;
unsigned short var_10 = (unsigned short)15134;
int zero = 0;
unsigned short var_15 = (unsigned short)42351;
long long int var_16 = 7559999709207291081LL;
signed char var_17 = (signed char)10;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)37039;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != (signed char)-54;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
