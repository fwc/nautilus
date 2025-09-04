/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9325
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9325
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
void test(val<bool> var_1, val<unsigned long long int> var_5, val<unsigned short> var_6, val<unsigned char> var_8, val<bool> var_9, val<unsigned int> var_10, val<int> zero, val<short*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<unsigned short>) (+(-11))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)63177)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)178))) : (var_5)))) ? (3944751907064939824ULL) : ((((val<bool>)1) ? (7689635645146935994ULL) : (10757108428562615623ULL))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 18ULL)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_1))))) : (((((/* implicit */val<bool>) (val<short>)219)) ? (7278858766057726882ULL) : (((/* implicit */val<unsigned long long int>) var_10))))))));
    *var_16 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) max((((/* implicit */val<unsigned int>) (val<unsigned short>)12768)), (1276011295U))))), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_9))))) ? ((-(7689635645146935980ULL))) : (((/* implicit */val<unsigned long long int>) (~(-185736650))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned long long int var_5 = 12735691936346043522ULL;
unsigned short var_6 = (unsigned short)48030;
unsigned char var_8 = (unsigned char)34;
bool var_9 = (bool)1;
unsigned int var_10 = 1535059248U;
int zero = 0;
short var_15 = (short)14111;
short var_16 = (short)-9413;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-31440;
    value_mismatch |= var_16 != (short)-12972;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_8, var_9, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
