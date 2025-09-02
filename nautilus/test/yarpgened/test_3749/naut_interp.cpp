/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3749
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3749
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
void test(val<int> var_5, val<short> var_13, val<int> zero, val<int*> var_19, val<long long int*> var_20) {
    *var_19 = (-(((/* implicit */val<int>) (val<bool>)1)));
    *var_20 += ((/* implicit */val<long long int>) ((val<int>) min((((((/* implicit */val<bool>) -1814893969)) ? (((/* implicit */val<int>) var_13)) : (var_5))), ((+(592191550))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -109075748;
short var_13 = (short)11678;
int zero = 0;
int var_19 = 1741571492;
long long int var_20 = -6064573292286983086LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -1;
    value_mismatch |= var_20 != -6064573292286971408LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
