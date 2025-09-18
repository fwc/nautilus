/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3995
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3995
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
void test(val<short> var_2, val<short> var_7, val<unsigned short> var_11, val<int> zero, val<unsigned int*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) var_7);
    *var_13 = (~(((((/* implicit */val<bool>) min((18446744073709551608ULL), (((/* implicit */val<unsigned long long int>) 4005223661179689503LL))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (((4005223661179689490LL) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5917;
short var_7 = (short)-27957;
unsigned short var_11 = (unsigned short)30922;
int zero = 0;
unsigned int var_12 = 1902310158U;
long long int var_13 = 6581234461326172182LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4294939339U;
    value_mismatch |= var_13 != -30923LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_11, zero, &var_12, &var_13);
  checksum();
}
