/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9143
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9143
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<short> var_0, val<long long int> var_2, val<short> var_3, val<unsigned short> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned long long int> var_8, val<unsigned short> var_9, val<int> zero, val<long long int*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (var_8)))) ? (((((/* implicit */val<bool>) var_9)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_6)))))))) ? (((((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_5)))) + (2147483647))) >> (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) || (((/* implicit */val<bool>) var_5))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -595432773)) ? (((/* implicit */val<int>) var_3)) : (595432773)))) ? (595432771) : (((/* implicit */val<int>) (val<unsigned short>)37000))))));
    *var_13 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_3))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)37000)) ? (((/* implicit */val<int>) (val<unsigned short>)37000)) : (595432773)))))) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17978;
long long int var_2 = -3846916463848175695LL;
short var_3 = (short)-31457;
unsigned short var_4 = (unsigned short)45987;
unsigned char var_5 = (unsigned char)147;
unsigned char var_6 = (unsigned char)218;
unsigned long long int var_8 = 9392768120260484321ULL;
unsigned short var_9 = (unsigned short)32512;
int zero = 0;
long long int var_12 = 3515717740592428021LL;
unsigned char var_13 = (unsigned char)9;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1073726095LL;
    value_mismatch |= var_13 != (unsigned char)147;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
