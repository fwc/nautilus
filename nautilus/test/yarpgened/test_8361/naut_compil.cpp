/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8361
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8361
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
void test(val<unsigned short> var_0, val<int> var_3, val<unsigned int> var_6, val<unsigned short> var_10, val<int> zero, val<int*> var_17, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<int>) var_0)) > ((-(((/* implicit */val<int>) ((val<bool>) (val<bool>)1)))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) (val<bool>)1);
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4900140569116276467LL)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))) ? (((val<long long int>) (val<unsigned char>)255)) : (((/* implicit */val<long long int>) var_6))))) ? (((/* implicit */val<long long int>) 536868864)) : (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)112)) ^ ((-2147483647 - 1))))) ? ((~(7598212124962887482LL))) : (((/* implicit */val<long long int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18027;
int var_3 = 1769925419;
unsigned int var_6 = 353868201U;
unsigned short var_10 = (unsigned short)10926;
int zero = 0;
int var_17 = -786733833;
unsigned long long int var_18 = 3838140354751335681ULL;
signed char var_19 = (signed char)-57;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1;
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_10, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
