/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7589
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7589
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_1, val<short> var_3, val<bool> var_4, val<short> var_5, val<bool> var_12, val<short> var_13, val<unsigned char> var_15, val<int> zero, val<unsigned short*> var_18, val<unsigned int*> var_19, val<unsigned short*> var_20) {
    *var_18 = ((/* implicit */val<unsigned short>) max((*var_18), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)0))))) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((var_4) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) min((((/* implicit */val<short>) var_0)), (var_3))))))))))));
    *var_19 = ((/* implicit */val<unsigned int>) max((*var_19), (((/* implicit */val<unsigned int>) ((((((((/* implicit */val<bool>) -953482406)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_3)))) + (2147483647))) << ((~((~(((/* implicit */val<int>) var_12)))))))))));
    *var_20 -= ((/* implicit */val<unsigned short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned long long int var_1 = 18023451779450541605ULL;
short var_3 = (short)23682;
bool var_4 = (bool)1;
short var_5 = (short)-14610;
bool var_12 = (bool)1;
short var_13 = (short)-744;
unsigned char var_15 = (unsigned char)203;
int zero = 0;
unsigned short var_18 = (unsigned short)50684;
unsigned int var_19 = 2796952447U;
unsigned short var_20 = (unsigned short)34049;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)50684;
    value_mismatch |= var_19 != 4294938074U;
    value_mismatch |= var_20 != (unsigned short)34793;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_12, var_13, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
