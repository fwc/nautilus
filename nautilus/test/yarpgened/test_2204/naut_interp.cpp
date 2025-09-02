/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2204
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2204
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
void test(val<unsigned char> var_5, val<unsigned long long int> var_6, val<unsigned short> var_7, val<signed char> var_8, val<int> zero, val<unsigned long long int*> var_15, val<unsigned short*> var_16) {
    *var_15 += ((/* implicit */val<unsigned long long int>) var_5);
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) 8769403854200011126ULL)) ? (((((/* implicit */val<bool>) 1779964339)) ? (-1779964342) : (((/* implicit */val<int>) (val<signed char>)124)))) : (1779964360))) : (((((/* implicit */val<int>) var_7)) << (((((((/* implicit */val<bool>) var_8)) ? (var_6) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))) - (13314253913551815641ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)159;
unsigned long long int var_6 = 13314253913551815641ULL;
unsigned short var_7 = (unsigned short)34612;
signed char var_8 = (signed char)-59;
int zero = 0;
unsigned long long int var_15 = 10578854743327324485ULL;
unsigned short var_16 = (unsigned short)58936;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 10578854743327324644ULL;
    value_mismatch |= var_16 != (unsigned short)58954;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_8, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
