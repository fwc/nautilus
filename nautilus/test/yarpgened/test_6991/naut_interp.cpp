/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6991
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6991
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
void test(val<unsigned short> var_4, val<short> var_6, val<short> var_8, val<signed char> var_9, val<unsigned char> var_10, val<short> var_13, val<unsigned char> var_14, val<int> zero, val<long long int*> var_17, val<int*> var_18, val<signed char*> var_19, val<unsigned short*> var_20) {
    *var_17 -= ((/* implicit */val<long long int>) ((min((((/* implicit */val<int>) ((((/* implicit */val<bool>) -7963909922195895706LL)) && (((/* implicit */val<bool>) 1516033321))))), (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_10)))))) >= ((+((-(((/* implicit */val<int>) var_14))))))));
    *var_18 = ((/* implicit */val<int>) var_8);
    *var_19 &= ((/* implicit */val<signed char>) var_10);
    *var_20 = ((/* implicit */val<unsigned short>) min((var_13), (((/* implicit */val<short>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1854;
short var_6 = (short)26627;
short var_8 = (short)-17453;
signed char var_9 = (signed char)-43;
unsigned char var_10 = (unsigned char)215;
short var_13 = (short)-19092;
unsigned char var_14 = (unsigned char)39;
int zero = 0;
long long int var_17 = -5883052480122711294LL;
int var_18 = 1061057450;
signed char var_19 = (signed char)-79;
unsigned short var_20 = (unsigned short)37210;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -5883052480122711295LL;
    value_mismatch |= var_18 != -17453;
    value_mismatch |= var_19 != (signed char)-111;
    value_mismatch |= var_20 != (unsigned short)46444;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_9, var_10, var_13, var_14, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
