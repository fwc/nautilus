/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9554
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9554
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
void test(val<signed char> var_2, val<unsigned int> var_3, val<long long int> var_4, val<unsigned long long int> var_5, val<unsigned int> var_8, val<short> var_10, val<int> var_11, val<bool> var_12, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) % (var_5)))) ? (((/* implicit */val<long long int>) min((var_3), (var_8)))) : (var_4)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) min((var_11), (((/* implicit */val<int>) var_2))))))) : (max((((val<unsigned int>) var_2)), (((/* implicit */val<unsigned int>) min((var_11), (((/* implicit */val<int>) var_12))))))));
    *var_16 = ((/* implicit */val<unsigned short>) ((val<int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_14)), (var_3)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_14)) << (((((/* implicit */val<int>) var_10)) + (20701)))))) : (var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
unsigned int var_3 = 2594163994U;
long long int var_4 = -9055619097388546726LL;
unsigned long long int var_5 = 18160468133912961593ULL;
unsigned int var_8 = 3851801434U;
short var_10 = (short)-20700;
int var_11 = 291221925;
bool var_12 = (bool)1;
unsigned char var_14 = (unsigned char)117;
int zero = 0;
unsigned int var_15 = 1159447722U;
unsigned short var_16 = (unsigned short)4896;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 65447U;
    value_mismatch |= var_16 != (unsigned short)234;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_8, var_10, var_11, var_12, var_14, zero, &var_15, &var_16);
  checksum();
}
