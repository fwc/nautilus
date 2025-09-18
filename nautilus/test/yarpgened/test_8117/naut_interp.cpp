/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8117
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8117
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
void test(val<unsigned short> var_0, val<unsigned short> var_11, val<int> var_13, val<int> zero, val<signed char*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) min((min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_0))))), (((val<long long int>) (val<short>)30753)))), (max((((/* implicit */val<long long int>) (val<unsigned short>)63708)), (((((/* implicit */val<bool>) (val<unsigned short>)63708)) ? (130023424LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<short>)127)) - (var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56152;
unsigned short var_11 = (unsigned short)1627;
int var_13 = -2090200242;
int zero = 0;
signed char var_14 = (signed char)-71;
unsigned long long int var_15 = 14024156160625404592ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)33;
    value_mismatch |= var_15 != 2090200369ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, var_13, zero, &var_14, &var_15);
  checksum();
}
