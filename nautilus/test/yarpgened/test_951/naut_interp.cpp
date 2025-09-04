/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 951
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=951
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
void test(val<int> var_1, val<long long int> var_2, val<unsigned int> var_4, val<unsigned short> var_9, val<signed char> var_13, val<short> var_15, val<unsigned char> var_16, val<int> var_17, val<int> zero, val<long long int*> var_18, val<bool*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_13)) & (((/* implicit */val<int>) var_16)))))));
    *var_19 = ((/* implicit */val<bool>) ((val<signed char>) max((max((var_2), (((/* implicit */val<long long int>) -1426868207)))), (((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) 4262919121U)) == (var_2)))))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<int>) var_15))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((var_17), (((/* implicit */val<int>) (val<short>)-1759))))) ? (((/* implicit */val<int>) ((val<short>) var_1))) : (((/* implicit */val<int>) ((5919392451064429276ULL) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))))))))) : (max((var_4), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_9)) <= (var_17))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1138273527;
long long int var_2 = -6008779673540156385LL;
unsigned int var_4 = 888952484U;
unsigned short var_9 = (unsigned short)43899;
signed char var_13 = (signed char)-100;
short var_15 = (short)-11837;
unsigned char var_16 = (unsigned char)39;
int var_17 = 824722526;
int zero = 0;
long long int var_18 = 5230373919566757347LL;
bool var_19 = (bool)1;
long long int var_20 = 68989088331615920LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 5230373919566757347LL;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 21257LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_9, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
