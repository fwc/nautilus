/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3513
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3513
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
void test(val<int> var_0, val<long long int> var_1, val<int> var_3, val<short> var_4, val<unsigned int> var_7, val<unsigned short> var_10, val<short> var_12, val<int> zero, val<unsigned long long int*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_10)), (var_0)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3)))))) : (max((((/* implicit */val<long long int>) var_12)), (var_1))))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))));
    *var_15 = ((/* implicit */val<unsigned short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1717242393;
long long int var_1 = -8818492210984068895LL;
int var_3 = 1513545227;
short var_4 = (short)16394;
unsigned int var_7 = 3690385115U;
unsigned short var_10 = (unsigned short)67;
short var_12 = (short)32328;
int zero = 0;
unsigned long long int var_14 = 1952032053325028199ULL;
unsigned short var_15 = (unsigned short)63912;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != (unsigned short)52955;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_10, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
