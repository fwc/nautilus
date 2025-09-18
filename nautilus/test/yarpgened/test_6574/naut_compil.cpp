/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6574
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6574
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
void test(val<signed char> var_1, val<signed char> var_8, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<short>) (-((-(((/* implicit */val<int>) var_8))))));
    *var_19 = ((/* implicit */val<signed char>) (+((-((-(((/* implicit */val<int>) var_1))))))));
    *var_20 = ((/* implicit */val<long long int>) (+((-((~(((/* implicit */val<int>) (val<unsigned short>)18067))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
signed char var_8 = (signed char)-94;
int zero = 0;
short var_18 = (short)4820;
signed char var_19 = (signed char)15;
long long int var_20 = -2621760514856892919LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-94;
    value_mismatch |= var_19 != (signed char)-126;
    value_mismatch |= var_20 != 18068LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, zero, &var_18, &var_19, &var_20);
  checksum();
}
