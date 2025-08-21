/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 291
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=291
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
void test(val<long long int> var_3, val<short> var_5, val<unsigned int> var_6, val<long long int> var_16, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) 4294967295U));
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) (val<unsigned char>)24)) ? (var_16) : (((/* implicit */val<long long int>) 0)))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 231436029U)) ? (-325864714) : (((/* implicit */val<int>) (val<signed char>)3))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -1034820557)) ? (((/* implicit */val<int>) (val<unsigned char>)232)) : (((/* implicit */val<int>) (val<unsigned char>)24))))) >= (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)201))) * (var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7022305828691314353LL;
short var_5 = (short)-12059;
unsigned int var_6 = 2341251548U;
long long int var_16 = -7059573832720966528LL;
int zero = 0;
unsigned long long int var_18 = 758062055481047188ULL;
signed char var_19 = (signed char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 65535ULL;
    value_mismatch |= var_19 != (signed char)(-127 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
