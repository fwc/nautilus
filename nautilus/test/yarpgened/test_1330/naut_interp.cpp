/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1330
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1330
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
void test(val<long long int> var_3, val<unsigned short> var_8, val<bool> var_9, val<signed char> var_11, val<signed char> var_12, val<int> zero, val<unsigned short*> var_17, val<unsigned long long int*> var_18, val<unsigned short*> var_19, val<bool*> var_20, val<long long int*> var_21) {
    *var_17 = ((/* implicit */val<unsigned short>) var_11);
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) ((1073741823ULL) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)15)))))) : (((/* implicit */val<int>) (!(((val<bool>) var_12)))))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 2073994527)) ? (((/* implicit */val<int>) (val<short>)-32763)) : (((/* implicit */val<int>) (val<bool>)1))));
    *var_20 = var_9;
    *var_21 = ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4575149710931589006LL;
unsigned short var_8 = (unsigned short)44079;
bool var_9 = (bool)0;
signed char var_11 = (signed char)-34;
signed char var_12 = (signed char)14;
int zero = 0;
unsigned short var_17 = (unsigned short)58354;
unsigned long long int var_18 = 2293811589998713353ULL;
unsigned short var_19 = (unsigned short)41968;
bool var_20 = (bool)0;
long long int var_21 = -6396947542348748901LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)65502;
    value_mismatch |= var_18 != 0ULL;
    value_mismatch |= var_19 != (unsigned short)32773;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 44079LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_9, var_11, var_12, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
