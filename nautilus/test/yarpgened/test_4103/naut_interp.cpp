/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4103
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4103
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
void test(val<unsigned short> var_0, val<bool> var_11, val<short> var_14, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19) {
    *var_18 -= ((/* implicit */val<unsigned char>) var_11);
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_14)), (var_0)))) < (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9251;
bool var_11 = (bool)1;
short var_14 = (short)-7737;
int zero = 0;
unsigned char var_18 = (unsigned char)59;
long long int var_19 = 5512690633162833438LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)58;
    value_mismatch |= var_19 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
