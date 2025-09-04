/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2030
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2030
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
void test(val<long long int> var_8, val<int> zero, val<int*> var_13, val<short*> var_14) {
    *var_13 = ((/* implicit */val<int>) var_8);
    *var_14 = ((/* implicit */val<short>) min((*var_14), (((/* implicit */val<short>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -2013267309505156419LL;
int zero = 0;
int var_13 = 1455107141;
short var_14 = (short)11714;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2064247485;
    value_mismatch |= var_14 != (short)-5443;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
