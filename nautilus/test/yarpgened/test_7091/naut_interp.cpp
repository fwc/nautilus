/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7091
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7091
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
void test(val<signed char> var_5, val<bool> var_6, val<long long int> var_7, val<short> var_14, val<unsigned short> var_18, val<int> zero, val<signed char*> var_20, val<unsigned short*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) min((*var_20), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) max((((((/* implicit */val<int>) (val<unsigned short>)60844)) | (((/* implicit */val<int>) (val<unsigned short>)65535)))), (((/* implicit */val<int>) var_5))))))))));
    *var_21 = ((/* implicit */val<unsigned short>) (~(((((((/* implicit */val<bool>) (val<unsigned char>)105)) && (((/* implicit */val<bool>) (val<unsigned char>)105)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18))) : (3566534543U)))));
    *var_22 = ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (~(-1641535780)))), ((~(2530214975434716540LL)))))) ? (min(((~(((/* implicit */val<int>) (val<unsigned short>)4692)))), (((/* implicit */val<int>) ((val<unsigned short>) var_7))))) : (((/* implicit */val<int>) var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-34;
bool var_6 = (bool)1;
long long int var_7 = -5791172403225677811LL;
short var_14 = (short)-32362;
unsigned short var_18 = (unsigned short)13609;
int zero = 0;
signed char var_20 = (signed char)65;
unsigned short var_21 = (unsigned short)48740;
int var_22 = -33000995;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (unsigned short)51926;
    value_mismatch |= var_22 != -4693;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_14, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
