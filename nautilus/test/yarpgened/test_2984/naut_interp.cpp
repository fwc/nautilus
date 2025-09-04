/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2984
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2984
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_3, val<unsigned int> var_4, val<unsigned char> var_10, val<int> zero, val<unsigned short*> var_11, val<unsigned char*> var_12, val<unsigned char*> var_13, val<int*> var_14) {
    *var_11 = ((/* implicit */val<unsigned short>) (val<short>)20332);
    *var_12 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<short>)-29275)) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))))))));
    *var_13 *= ((/* implicit */val<unsigned char>) (~(198666613U)));
    *var_14 = ((/* implicit */val<int>) ((val<long long int>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)36078)) ^ (((/* implicit */val<int>) var_10))))), (var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6676716163430719352ULL;
unsigned char var_3 = (unsigned char)184;
unsigned int var_4 = 2691109817U;
unsigned char var_10 = (unsigned char)108;
int zero = 0;
unsigned short var_11 = (unsigned short)47386;
unsigned char var_12 = (unsigned char)236;
unsigned char var_13 = (unsigned char)235;
int var_14 = -1500386430;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)20332;
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != (unsigned char)174;
    value_mismatch |= var_14 != -1603857479;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
