/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5532
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5532
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
void test(val<long long int> var_0, val<short> var_1, val<unsigned short> var_4, val<unsigned short> var_7, val<unsigned long long int> var_8, val<int> zero, val<bool*> var_10, val<unsigned short*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<bool>) var_8);
    *var_11 = ((/* implicit */val<unsigned short>) (+((+(((/* implicit */val<int>) var_1))))));
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (min((((((/* implicit */val<bool>) var_7)) ? (3659035732848388313LL) : (3659035732848388333LL))), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) 2147483647)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2788187070878074890LL;
short var_1 = (short)17666;
unsigned short var_4 = (unsigned short)28578;
unsigned short var_7 = (unsigned short)14241;
unsigned long long int var_8 = 184003397791267817ULL;
int zero = 0;
bool var_10 = (bool)1;
unsigned short var_11 = (unsigned short)3021;
short var_12 = (short)-23319;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (unsigned short)17666;
    value_mismatch |= var_12 != (short)28578;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
