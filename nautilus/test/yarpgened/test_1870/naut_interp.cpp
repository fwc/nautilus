/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1870
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1870
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_1, val<long long int> var_2, val<short> var_3, val<short> var_7, val<unsigned long long int> var_9, val<unsigned long long int> var_10, val<unsigned short> var_11, val<short> var_13, val<int> zero, val<long long int*> var_18, val<unsigned long long int*> var_19, val<short*> var_20, val<short*> var_21) {
    *var_18 = ((/* implicit */val<long long int>) var_0);
    *var_19 = ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) var_13)) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))) : (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_0))))));
    *var_20 = ((/* implicit */val<short>) min(((+(((/* implicit */val<int>) ((var_9) <= (((/* implicit */val<unsigned long long int>) -138194519352462260LL))))))), (min(((-(((/* implicit */val<int>) (val<unsigned short>)45785)))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<short>)-32756))))))));
    *var_21 = ((/* implicit */val<short>) min((*var_21), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (var_10)))) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) (val<short>)-26377))))))) ? (((((/* implicit */val<bool>) (~(var_1)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<unsigned long long int>) -1520403696011460151LL)) : (18446744073709551615ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45054;
unsigned long long int var_1 = 5718541119978308280ULL;
long long int var_2 = 127511358376359696LL;
short var_3 = (short)21554;
short var_7 = (short)25222;
unsigned long long int var_9 = 14977206962726744205ULL;
unsigned long long int var_10 = 13089613603097252266ULL;
unsigned short var_11 = (unsigned short)24040;
short var_13 = (short)13531;
int zero = 0;
long long int var_18 = -5550926637891021230LL;
unsigned long long int var_19 = 8700422186527369265ULL;
short var_20 = (short)-14910;
short var_21 = (short)21135;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 45054LL;
    value_mismatch |= var_19 != 5718541119978308280ULL;
    value_mismatch |= var_20 != (short)19751;
    value_mismatch |= var_21 != (short)21135;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_7, var_9, var_10, var_11, var_13, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
