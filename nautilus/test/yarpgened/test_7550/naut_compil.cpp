/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7550
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7550
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
void test(val<unsigned short> var_3, val<short> var_5, val<unsigned short> var_6, val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned short> var_9, val<int> zero, val<signed char*> var_10, val<short*> var_11, val<bool*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_10 |= ((/* implicit */val<signed char>) var_5);
    *var_11 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) max((14583435451127957013ULL), (((/* implicit */val<unsigned long long int>) (val<short>)-8267))))) ? (((/* implicit */val<int>) (val<unsigned char>)181)) : (((/* implicit */val<int>) (val<unsigned char>)181)))) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)239)) ? (var_8) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)17)))))))))));
    *var_12 = ((/* implicit */val<bool>) max((*var_12), (((/* implicit */val<bool>) min(((+(623345047302848867ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_9)) ^ (((/* implicit */val<int>) var_6))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) var_3)))) : (var_7)))))))));
    *var_13 &= ((/* implicit */val<bool>) var_7);
    *var_14 = ((/* implicit */val<unsigned char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41403;
short var_5 = (short)-28413;
unsigned short var_6 = (unsigned short)12312;
unsigned int var_7 = 4172760579U;
unsigned int var_8 = 4139654811U;
unsigned short var_9 = (unsigned short)54427;
int zero = 0;
signed char var_10 = (signed char)-126;
short var_11 = (short)12531;
bool var_12 = (bool)1;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)105;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-125;
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
