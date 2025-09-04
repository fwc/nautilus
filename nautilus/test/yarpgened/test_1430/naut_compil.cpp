/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1430
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1430
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
void test(val<long long int> var_0, val<unsigned long long int> var_3, val<unsigned char> var_4, val<long long int> var_7, val<int> zero, val<bool*> var_10, val<short*> var_11) {
    *var_10 = ((/* implicit */val<bool>) var_7);
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<int>) min((((val<unsigned short>) var_3)), (((/* implicit */val<unsigned short>) ((var_7) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)43))))))))) < (((/* implicit */val<int>) max((var_4), (((/* implicit */val<unsigned char>) ((val<signed char>) var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3820406559993361294LL;
unsigned long long int var_3 = 12588617962087532035ULL;
unsigned char var_4 = (unsigned char)152;
long long int var_7 = -2703182123402835151LL;
int zero = 0;
bool var_10 = (bool)0;
short var_11 = (short)-21878;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
