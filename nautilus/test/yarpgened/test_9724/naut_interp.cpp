/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9724
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9724
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
void test(val<long long int> var_3, val<unsigned int> var_10, val<unsigned char> var_17, val<long long int> var_18, val<int> zero, val<signed char*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<signed char>) min((*var_20), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) 8562679820753141906ULL))))))));
    *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 2016578950U)) ? (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_17))))), (((val<unsigned int>) -8184686429187079358LL))))) : (min((((((/* implicit */val<bool>) var_10)) ? (var_18) : (((/* implicit */val<long long int>) 654677926U)))), ((~(var_3))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7730978765938429635LL;
unsigned int var_10 = 1741036434U;
unsigned char var_17 = (unsigned char)59;
long long int var_18 = -8714099386597496130LL;
int zero = 0;
signed char var_20 = (signed char)2;
unsigned int var_21 = 1105782638U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != 59U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_10, var_17, var_18, zero, &var_20, &var_21);
  checksum();
}
