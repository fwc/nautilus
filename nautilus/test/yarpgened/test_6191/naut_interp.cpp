/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6191
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6191
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
void test(val<signed char> var_2, val<short> var_7, val<unsigned short> var_8, val<unsigned short> var_10, val<int> zero, val<unsigned char*> var_12, val<long long int*> var_13, val<unsigned long long int*> var_14, val<int*> var_15, val<unsigned char*> var_16) {
    *var_12 = ((/* implicit */val<unsigned char>) max((*var_12), (((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) max((var_10), (((/* implicit */val<unsigned short>) var_7))))) >> (((((/* implicit */val<int>) var_10)) - (56288))))))));
    *var_13 *= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) 7363126056173290991ULL))));
    *var_14 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_15 = ((/* implicit */val<int>) 11083618017536260639ULL);
    *var_16 = ((/* implicit */val<unsigned char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
short var_7 = (short)9810;
unsigned short var_8 = (unsigned short)24870;
unsigned short var_10 = (unsigned short)56306;
int zero = 0;
unsigned char var_12 = (unsigned char)52;
long long int var_13 = 4501616004430246779LL;
unsigned long long int var_14 = 365798572552119802ULL;
int var_15 = -596054911;
unsigned char var_16 = (unsigned char)131;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)52;
    value_mismatch |= var_13 != 0LL;
    value_mismatch |= var_14 != 18446744073709551561ULL;
    value_mismatch |= var_15 != 157170207;
    value_mismatch |= var_16 != (unsigned char)38;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
