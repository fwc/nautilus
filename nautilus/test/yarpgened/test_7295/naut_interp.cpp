/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7295
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7295
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
void test(val<short> var_0, val<unsigned long long int> var_11, val<long long int> var_13, val<int> zero, val<bool*> var_16, val<bool*> var_17, val<unsigned char*> var_18, val<long long int*> var_19) {
    *var_16 |= ((/* implicit */val<bool>) (val<unsigned char>)8);
    *var_17 ^= ((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) 7199732439178957995ULL)) ? (min((((/* implicit */val<unsigned long long int>) 4529790730431585584LL)), (11247011634530593621ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)253))) < (var_13)))))))));
    *var_18 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_0))));
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) (+(min((((var_11) / (((/* implicit */val<unsigned long long int>) -8306896394264075121LL)))), (((/* implicit */val<unsigned long long int>) ((val<bool>) var_13))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20990;
unsigned long long int var_11 = 12166230317051460961ULL;
long long int var_13 = -4866519598968326860LL;
int zero = 0;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
unsigned char var_18 = (unsigned char)220;
long long int var_19 = 7698689696902758051LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)253;
    value_mismatch |= var_19 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, var_13, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
