/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9162
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9162
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
void test(val<unsigned short> var_1, val<long long int> var_3, val<bool> var_5, val<unsigned long long int> var_6, val<bool> var_7, val<signed char> var_8, val<unsigned short> var_9, val<signed char> var_10, val<int> zero, val<bool*> var_11, val<long long int*> var_12, val<short*> var_13, val<unsigned long long int*> var_14) {
    if (((/* implicit */val<bool>) (val<short>)(-32767 - 1)))
    {
        *var_11 = ((/* implicit */val<bool>) var_1);
        *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) == (((/* implicit */val<int>) (val<short>)32767))))) * (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) > (((/* implicit */val<int>) var_9)))))))) ? (((((/* implicit */val<bool>) (val<signed char>)-77)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) < (954950117))))) : (var_6))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))));
        *var_13 = ((/* implicit */val<short>) ((var_3) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)97)))));
    }

    *var_14 = ((/* implicit */val<unsigned long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44143;
long long int var_3 = 2025481470745966256LL;
bool var_5 = (bool)1;
unsigned long long int var_6 = 3944275199771169109ULL;
bool var_7 = (bool)1;
signed char var_8 = (signed char)77;
unsigned short var_9 = (unsigned short)59430;
signed char var_10 = (signed char)102;
int zero = 0;
bool var_11 = (bool)0;
long long int var_12 = -2253358514793046525LL;
short var_13 = (short)-31960;
unsigned long long int var_14 = 5458977597780113991ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 77LL;
    value_mismatch |= var_13 != (short)15514;
    value_mismatch |= var_14 != 102ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
