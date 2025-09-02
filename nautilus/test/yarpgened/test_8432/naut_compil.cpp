/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8432
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8432
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
void test(val<short> var_1, val<long long int> var_2, val<int> zero, val<signed char*> var_12, val<unsigned short*> var_13, val<long long int*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) min((var_2), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))))));
    *var_13 = ((/* implicit */val<unsigned short>) 7487750068181197867ULL);
    *var_14 = ((/* implicit */val<long long int>) 9804410604433124465ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-46;
long long int var_2 = 1630770236565037405LL;
int zero = 0;
signed char var_12 = (signed char)(-127 - 1);
unsigned short var_13 = (unsigned short)31420;
long long int var_14 = 7524217802724556078LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-1;
    value_mismatch |= var_13 != (unsigned short)58411;
    value_mismatch |= var_14 != -8642333469276427151LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
