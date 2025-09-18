/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4107
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4107
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
void test(val<unsigned int> var_9, val<signed char> var_10, val<unsigned char> var_11, val<signed char> var_12, val<unsigned int> var_15, val<unsigned char> var_18, val<int> zero, val<long long int*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) min((var_11), (((/* implicit */val<unsigned char>) var_10))));
    *var_20 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((var_9), (2888035816U)))) ? ((~(79899398))) : ((((val<bool>)1) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_18))))))), (var_15)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2473268299U;
signed char var_10 = (signed char)-68;
unsigned char var_11 = (unsigned char)206;
signed char var_12 = (signed char)-14;
unsigned int var_15 = 269427922U;
unsigned char var_18 = (unsigned char)90;
int zero = 0;
long long int var_19 = 8457800034420129867LL;
signed char var_20 = (signed char)43;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 188LL;
    value_mismatch |= var_20 != (signed char)-46;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, var_11, var_12, var_15, var_18, zero, &var_19, &var_20);
  checksum();
}
