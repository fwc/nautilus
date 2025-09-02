/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3248
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3248
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
void test(val<unsigned char> var_6, val<short> var_7, val<unsigned long long int> var_9, val<int> var_10, val<bool> var_15, val<int> zero, val<signed char*> var_17, val<short*> var_18, val<short*> var_19) {
    *var_17 = ((/* implicit */val<signed char>) max((*var_17), (((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((val<short>) var_15))) / (((/* implicit */val<int>) (val<bool>)1))))) / ((+((+(12745976742966356368ULL))))))))));
    *var_18 = ((/* implicit */val<short>) ((val<unsigned short>) ((((/* implicit */val<bool>) min((3184087925U), (((/* implicit */val<unsigned int>) var_10))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) 18ULL)))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) / (var_9))))));
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) -3699188764099404290LL)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))) : ((~(((((/* implicit */val<bool>) 2107832908)) ? (((/* implicit */val<int>) var_6)) : (var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)38;
short var_7 = (short)29884;
unsigned long long int var_9 = 14157825673517492017ULL;
int var_10 = -1918326041;
bool var_15 = (bool)0;
int zero = 0;
signed char var_17 = (signed char)52;
short var_18 = (short)9101;
short var_19 = (short)-3866;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)52;
    value_mismatch |= var_18 != (short)1;
    value_mismatch |= var_19 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, var_10, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
