/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3618
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3618
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
void test(val<long long int> var_1, val<unsigned short> var_3, val<int> var_6, val<short> var_7, val<unsigned int> var_8, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<unsigned int*> var_21, val<unsigned short*> var_22) {
    *var_19 = ((/* implicit */val<bool>) max((((((/* implicit */val<unsigned long long int>) ((val<long long int>) var_6))) | (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) ^ (8191ULL))))), (((/* implicit */val<unsigned long long int>) var_3))));
    *var_20 = ((/* implicit */val<unsigned short>) var_8);
    *var_21 = 4251891725U;
    *var_22 = ((/* implicit */val<unsigned short>) max((*var_22), (((/* implicit */val<unsigned short>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7018462998822922230LL;
unsigned short var_3 = (unsigned short)21313;
int var_6 = 22577904;
short var_7 = (short)-9332;
unsigned int var_8 = 1358466393U;
int zero = 0;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)55588;
unsigned int var_21 = 3737761429U;
unsigned short var_22 = (unsigned short)55121;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)36185;
    value_mismatch |= var_21 != 4251891725U;
    value_mismatch |= var_22 != (unsigned short)55121;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_7, var_8, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
