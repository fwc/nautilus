/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6489
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6489
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
void test(val<int> var_0, val<int> var_2, val<unsigned short> var_4, val<bool> var_7, val<unsigned long long int> var_11, val<int> zero, val<unsigned int*> var_16, val<unsigned short*> var_17, val<signed char*> var_18, val<unsigned int*> var_19) {
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_7)) >> (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_4)) : (var_0)))))))));
    *var_17 = ((/* implicit */val<unsigned short>) (+(var_0)));
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) max(((+(var_0))), (((var_2) + (((/* implicit */val<int>) var_7))))))) + ((-(16627347801591158609ULL)))));
    *var_19 = ((/* implicit */val<unsigned int>) ((min((14159830852842736386ULL), (((/* implicit */val<unsigned long long int>) -1770731158)))) / (((/* implicit */val<unsigned long long int>) (~((~(((/* implicit */val<int>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -414343619;
int var_2 = 168335305;
unsigned short var_4 = (unsigned short)19699;
bool var_7 = (bool)1;
unsigned long long int var_11 = 1204936827115390408ULL;
int zero = 0;
unsigned int var_16 = 1994904236U;
unsigned short var_17 = (unsigned short)18010;
signed char var_18 = (signed char)-87;
unsigned int var_19 = 436519349U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1U;
    value_mismatch |= var_17 != (unsigned short)40509;
    value_mismatch |= var_18 != (signed char)121;
    value_mismatch |= var_19 != 3900878002U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_7, var_11, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
