/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4567
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4567
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
void test(val<long long int> var_1, val<unsigned char> var_3, val<unsigned short> var_8, val<int> zero, val<unsigned long long int*> var_11, val<short*> var_12) {
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)0)) & (min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))), ((~(((/* implicit */val<int>) var_8))))))));
    *var_12 = ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7248803099553705159LL;
unsigned char var_3 = (unsigned char)77;
unsigned short var_8 = (unsigned short)29069;
int zero = 0;
unsigned long long int var_11 = 16057543925823097841ULL;
short var_12 = (short)-21755;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != (short)77;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
