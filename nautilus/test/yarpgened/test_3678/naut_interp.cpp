/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3678
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3678
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
void test(val<unsigned short> var_0, val<long long int> var_4, val<unsigned short> var_5, val<unsigned char> var_6, val<short> var_7, val<bool> var_9, val<int> zero, val<unsigned long long int*> var_12, val<short*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_13 *= ((/* implicit */val<short>) ((((/* implicit */val<int>) max((((((/* implicit */val<int>) var_7)) <= (((/* implicit */val<int>) (val<unsigned short>)0)))), ((!(((/* implicit */val<bool>) -2028401389))))))) + (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_4)) != (min((((/* implicit */val<unsigned long long int>) var_5)), (163677929668270854ULL))))))));
    *var_14 = ((/* implicit */val<unsigned char>) ((val<int>) (!(((/* implicit */val<bool>) (((val<bool>)1) ? (865727185U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0)))))))));
    *var_15 = var_6;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39433;
long long int var_4 = 1665919519714634726LL;
unsigned short var_5 = (unsigned short)42538;
unsigned char var_6 = (unsigned char)150;
short var_7 = (short)-4045;
bool var_9 = (bool)0;
int zero = 0;
unsigned long long int var_12 = 11780367752767576587ULL;
short var_13 = (short)4094;
unsigned char var_14 = (unsigned char)63;
unsigned char var_15 = (unsigned char)96;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (short)8188;
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (unsigned char)150;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_7, var_9, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
