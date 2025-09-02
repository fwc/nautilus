/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7434
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7434
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_6, val<unsigned char> var_9, val<int> zero, val<unsigned long long int*> var_13, val<long long int*> var_14, val<unsigned long long int*> var_15, val<short*> var_16) {
    *var_13 = ((/* implicit */val<unsigned long long int>) var_0);
    *var_14 *= ((/* implicit */val<long long int>) 10U);
    *var_15 = var_6;
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<unsigned int>) var_9))) && (((/* implicit */val<bool>) ((val<unsigned long long int>) 0LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1071907201U;
unsigned long long int var_6 = 11179913102600386118ULL;
unsigned char var_9 = (unsigned char)127;
int zero = 0;
unsigned long long int var_13 = 15182166205319820302ULL;
long long int var_14 = -463075850012870223LL;
unsigned long long int var_15 = 14411167687050970625ULL;
short var_16 = (short)-28325;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1071907201ULL;
    value_mismatch |= var_14 != -4630758500128702230LL;
    value_mismatch |= var_15 != 11179913102600386118ULL;
    value_mismatch |= var_16 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_9, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
