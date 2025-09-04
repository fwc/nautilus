/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3752
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3752
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
void test(val<int> var_1, val<int> var_5, val<int> var_6, val<int> zero, val<int*> var_10, val<unsigned long long int*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<int>) min((*var_10), (((/* implicit */val<int>) ((((/* implicit */val<bool>) 1809983592)) || (((/* implicit */val<bool>) ((-2097152) % (((/* implicit */val<int>) ((((/* implicit */val<bool>) 31)) || (((/* implicit */val<bool>) (val<short>)5596)))))))))))));
    *var_11 -= ((/* implicit */val<unsigned long long int>) (+(((max((var_5), (((/* implicit */val<int>) (val<short>)29292)))) + (max((67108832), (((/* implicit */val<int>) (val<short>)29311))))))));
    *var_12 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) var_1)), (min((18446744073709551615ULL), (((/* implicit */val<unsigned long long int>) var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1124610000;
int var_5 = 1304494824;
int var_6 = -1051138046;
int zero = 0;
int var_10 = -356027653;
unsigned long long int var_11 = 1019782413071255959ULL;
short var_12 = (short)6055;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -356027653;
    value_mismatch |= var_11 != 1019782411699652303ULL;
    value_mismatch |= var_12 != (short)-6142;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
