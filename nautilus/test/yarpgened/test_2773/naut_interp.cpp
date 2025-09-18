/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2773
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2773
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
void test(val<unsigned char> var_0, val<unsigned short> var_3, val<int> var_4, val<unsigned long long int> var_7, val<short> var_8, val<int> zero, val<unsigned char*> var_10, val<int*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) (val<signed char>)(-127 - 1))) & (((/* implicit */val<int>) var_0)))) ^ (((((/* implicit */val<int>) var_8)) + (((((/* implicit */val<bool>) 1964089958)) ? (((/* implicit */val<int>) (val<bool>)1)) : (var_4)))))));
    *var_11 = ((/* implicit */val<int>) (+(max((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_7))), (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_8)))))))));
    *var_12 = ((/* implicit */val<short>) max((*var_12), (((/* implicit */val<short>) ((((/* implicit */val<bool>) min((var_4), (-1133258738)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_0))))) : (562949416550400LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned short var_3 = (unsigned short)18960;
int var_4 = 383260116;
unsigned long long int var_7 = 3751777546707101378ULL;
short var_8 = (short)-15975;
int zero = 0;
unsigned char var_10 = (unsigned char)63;
int var_11 = -1301887093;
short var_12 = (short)15180;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)26;
    value_mismatch |= var_11 != -15975;
    value_mismatch |= var_12 != (short)18960;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
