/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6586
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6586
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
void test(val<signed char> var_0, val<short> var_1, val<signed char> var_2, val<unsigned short> var_3, val<unsigned char> var_4, val<long long int> var_5, val<unsigned int> var_6, val<signed char> var_7, val<unsigned int> var_8, val<unsigned int> var_10, val<unsigned long long int> var_11, val<unsigned int> var_13, val<int> zero, val<short*> var_14, val<bool*> var_15, val<unsigned char*> var_16, val<signed char*> var_17) {
    if (((/* implicit */val<bool>) ((var_11) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((((((/* implicit */val<int>) (val<unsigned short>)32291)) != (((/* implicit */val<int>) (val<unsigned short>)14237)))), ((!(((/* implicit */val<bool>) (val<unsigned short>)14217)))))))))))
    {
        *var_14 = ((/* implicit */val<short>) max((*var_14), (var_1)));
        *var_15 += ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)14237)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)51311))) : (var_6)))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((6267446689985835272ULL) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)0))))))))) != (((((/* implicit */val<bool>) var_3)) ? ((-(var_6))) : (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_2))))))));
        *var_16 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (var_13)))) <= (min((((/* implicit */val<unsigned long long int>) var_5)), (var_11))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)51327))) | (11826642921902620221ULL))) <= (((/* implicit */val<unsigned long long int>) ((4294967295U) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)20203)))))))))) : (var_10)));
    }

    *var_17 = ((/* implicit */val<signed char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
short var_1 = (short)3351;
signed char var_2 = (signed char)108;
unsigned short var_3 = (unsigned short)59539;
unsigned char var_4 = (unsigned char)169;
long long int var_5 = 3124933005787997090LL;
unsigned int var_6 = 860565768U;
signed char var_7 = (signed char)-60;
unsigned int var_8 = 1734684273U;
unsigned int var_10 = 439148370U;
unsigned long long int var_11 = 6668691023625163751ULL;
unsigned int var_13 = 3953156808U;
int zero = 0;
short var_14 = (short)-2788;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)29;
signed char var_17 = (signed char)96;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)3351;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned char)0;
    value_mismatch |= var_17 != (signed char)113;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
