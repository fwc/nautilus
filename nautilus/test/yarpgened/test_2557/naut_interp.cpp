/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2557
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2557
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
void test(val<unsigned long long int> var_3, val<bool> var_4, val<unsigned long long int> var_6, val<unsigned char> var_8, val<bool> var_12, val<int> zero, val<signed char*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) == (((/* implicit */val<int>) var_4)))))))) || (((/* implicit */val<bool>) (+(10))))));
    *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~(-10)))) && ((val<bool>)1))))));
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (+((+(var_3)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((696367887U) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12)))))))) : (((((/* implicit */val<bool>) (val<unsigned char>)4)) ? (((/* implicit */val<int>) (val<unsigned char>)3)) : (((/* implicit */val<int>) var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13223094973411471874ULL;
bool var_4 = (bool)1;
unsigned long long int var_6 = 8935832134262675558ULL;
unsigned char var_8 = (unsigned char)246;
bool var_12 = (bool)1;
int zero = 0;
signed char var_13 = (signed char)0;
unsigned short var_14 = (unsigned short)1999;
unsigned short var_15 = (unsigned short)26631;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)1;
    value_mismatch |= var_14 != (unsigned short)1999;
    value_mismatch |= var_15 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_8, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
}
