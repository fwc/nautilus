/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3942
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3942
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
void test(val<int> var_1, val<unsigned char> var_3, val<bool> var_8, val<unsigned short> var_11, val<int> zero, val<signed char*> var_13, val<int*> var_14, val<short*> var_15) {
    *var_13 |= ((/* implicit */val<signed char>) var_1);
    *var_14 = ((/* implicit */val<int>) max((*var_14), (((/* implicit */val<int>) ((val<unsigned int>) max((((/* implicit */val<long long int>) var_11)), (max((((/* implicit */val<long long int>) var_3)), (-3074466861261756860LL)))))))));
    *var_15 -= ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) & (min((max((9151640485406916641ULL), (9151640485406916628ULL))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)30201)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 916288083;
unsigned char var_3 = (unsigned char)114;
bool var_8 = (bool)1;
unsigned short var_11 = (unsigned short)40512;
int zero = 0;
signed char var_13 = (signed char)-39;
int var_14 = -201010080;
short var_15 = (short)-23870;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-37;
    value_mismatch |= var_14 != 40512;
    value_mismatch |= var_15 != (short)-23871;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
