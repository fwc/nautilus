/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 969
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=969
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
void test(val<long long int> var_1, val<long long int> var_5, val<short> var_12, val<int> zero, val<unsigned short*> var_19, val<long long int*> var_20) {
    *var_19 ^= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<unsigned long long int>) var_5)) : (max((5355860884892296851ULL), (((13090883188817254750ULL) & (13090883188817254766ULL)))))));
    *var_20 = min((var_1), (((/* implicit */val<long long int>) max((((val<unsigned int>) var_12)), (((/* implicit */val<unsigned int>) var_12))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 376509281705457275LL;
long long int var_5 = -7593027211735288448LL;
short var_12 = (short)-28385;
int zero = 0;
unsigned short var_19 = (unsigned short)8547;
long long int var_20 = -1138391119307198136LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)38115;
    value_mismatch |= var_20 != 4294938911LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_12, zero, &var_19, &var_20);
  checksum();
}
