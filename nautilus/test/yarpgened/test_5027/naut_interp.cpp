/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5027
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5027
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
void test(val<int> var_2, val<unsigned char> var_7, val<short> var_8, val<unsigned short> var_12, val<unsigned char> var_16, val<int> zero, val<unsigned long long int*> var_20, val<unsigned char*> var_21, val<unsigned short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned long long int>) var_12);
    *var_21 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (~((~(((/* implicit */val<int>) var_8))))))) ? (((/* implicit */val<long long int>) (((~(var_2))) & (((((/* implicit */val<int>) (val<signed char>)-73)) & (((/* implicit */val<int>) var_7))))))) : (((((val<long long int>) var_7)) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12)))))));
    *var_22 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) var_16))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1865475769;
unsigned char var_7 = (unsigned char)226;
short var_8 = (short)11275;
unsigned short var_12 = (unsigned short)20556;
unsigned char var_16 = (unsigned char)182;
int zero = 0;
unsigned long long int var_20 = 13741457783327178795ULL;
unsigned char var_21 = (unsigned char)21;
unsigned short var_22 = (unsigned short)59432;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 20556ULL;
    value_mismatch |= var_21 != (unsigned char)117;
    value_mismatch |= var_22 != (unsigned short)65354;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_12, var_16, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
