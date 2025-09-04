/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8224
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8224
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
void test(val<unsigned int> var_3, val<unsigned short> var_4, val<int> var_5, val<unsigned char> var_6, val<unsigned long long int> var_8, val<int> zero, val<unsigned short*> var_12, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<long long int>) var_3))) || ((!(((/* implicit */val<bool>) 13551903)))))));
    *var_13 |= ((/* implicit */val<long long int>) ((val<unsigned char>) var_8));
    *var_14 = ((/* implicit */val<unsigned short>) max((max((var_3), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -247788656)) ? (var_5) : (((/* implicit */val<int>) var_4))))))), (((/* implicit */val<unsigned int>) ((val<unsigned char>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 132534365U;
unsigned short var_4 = (unsigned short)30012;
int var_5 = -307619200;
unsigned char var_6 = (unsigned char)211;
unsigned long long int var_8 = 14033659431955090652ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)25543;
long long int var_13 = -4164346042038914292LL;
unsigned short var_14 = (unsigned short)25086;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1;
    value_mismatch |= var_13 != -4164346042038914084LL;
    value_mismatch |= var_14 != (unsigned short)6784;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_8, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
