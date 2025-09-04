/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1432
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1432
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<unsigned long long int> var_5, val<unsigned long long int> var_9, val<unsigned char> var_10, val<long long int> var_11, val<int> var_12, val<unsigned long long int> var_14, val<int> zero, val<unsigned long long int*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) min((*var_16), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) var_0)) ? (var_5) : (var_9))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<bool>) var_10)) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0)))))))) : (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) -1695569646)), (var_14)))) ? (max((4785899703202843566ULL), (((/* implicit */val<unsigned long long int>) 4875118883033664678LL)))) : (((((/* implicit */val<bool>) -1)) ? (var_1) : (var_1)))))))));
    *var_17 = min((((/* implicit */val<long long int>) (~(var_12)))), (((((/* implicit */val<bool>) (val<short>)-28411)) ? (-2113741896863210812LL) : (((/* implicit */val<long long int>) -18117138)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20457;
unsigned long long int var_1 = 8800459347429713134ULL;
unsigned long long int var_5 = 2433476440945221117ULL;
unsigned long long int var_9 = 3651558320658847395ULL;
unsigned char var_10 = (unsigned char)66;
long long int var_11 = 5146536279017115994LL;
int var_12 = -296314981;
unsigned long long int var_14 = 9337217813895443954ULL;
int zero = 0;
unsigned long long int var_16 = 6913750045363706451ULL;
long long int var_17 = -4238555429249239231LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 5795ULL;
    value_mismatch |= var_17 != -2113741896863210812LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_9, var_10, var_11, var_12, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
