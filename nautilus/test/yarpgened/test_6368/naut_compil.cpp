/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6368
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6368
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
void test(val<unsigned long long int> var_0, val<short> var_3, val<unsigned short> var_8, val<unsigned short> var_13, val<int> zero, val<signed char*> var_14, val<unsigned long long int*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (((/* implicit */val<int>) (val<unsigned char>)88)) : (((/* implicit */val<int>) (val<unsigned short>)10))))) ^ (max((((/* implicit */val<unsigned long long int>) var_13)), (var_0))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)0)))));
    *var_15 -= ((/* implicit */val<unsigned long long int>) var_3);
    *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) (val<unsigned short>)9)), (1001347462065427500LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5076526611809489761ULL;
short var_3 = (short)7830;
unsigned short var_8 = (unsigned short)11027;
unsigned short var_13 = (unsigned short)51041;
int zero = 0;
signed char var_14 = (signed char)-115;
unsigned long long int var_15 = 3448531345753013790ULL;
unsigned short var_16 = (unsigned short)1706;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)57;
    value_mismatch |= var_15 != 3448531345753005960ULL;
    value_mismatch |= var_16 != (unsigned short)1706;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
