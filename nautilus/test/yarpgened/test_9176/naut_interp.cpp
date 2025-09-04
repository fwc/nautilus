/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9176
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9176
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
void test(val<long long int> var_1, val<int> var_4, val<unsigned short> var_7, val<long long int> var_9, val<int> zero, val<long long int*> var_10, val<signed char*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)183)) << (((var_9) + (4875757536031166139LL)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) 6878425712552581540ULL))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)73)) <= (((/* implicit */val<int>) (val<unsigned char>)73))))))) : (((/* implicit */val<int>) (val<signed char>)71))));
    *var_11 |= ((/* implicit */val<signed char>) ((val<unsigned long long int>) min((((/* implicit */val<long long int>) ((val<unsigned int>) -373687211068427940LL))), (((var_1) | (var_1))))));
    *var_12 = ((/* implicit */val<bool>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3429806936005969549LL;
int var_4 = -1664649302;
unsigned short var_7 = (unsigned short)58590;
long long int var_9 = -4875757536031166117LL;
int zero = 0;
long long int var_10 = 3165679672243995069LL;
signed char var_11 = (signed char)-112;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1LL;
    value_mismatch |= var_11 != (signed char)-13;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
