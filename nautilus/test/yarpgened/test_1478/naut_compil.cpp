/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1478
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1478
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
void test(val<signed char> var_0, val<short> var_1, val<short> var_8, val<unsigned char> var_13, val<short> var_14, val<int> zero, val<bool*> var_15, val<long long int*> var_16) {
    *var_15 = ((((/* implicit */val<bool>) max((min((var_8), (((/* implicit */val<short>) var_13)))), (var_1)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_0), (((/* implicit */val<signed char>) (val<bool>)0))))) ? (11232035937669647775ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14)))))));
    *var_16 = ((/* implicit */val<long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
short var_1 = (short)-19560;
short var_8 = (short)12260;
unsigned char var_13 = (unsigned char)57;
short var_14 = (short)3839;
int zero = 0;
bool var_15 = (bool)0;
long long int var_16 = -2979965456134693609LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 122LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, var_13, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
