/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7371
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7371
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<int> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<unsigned short> var_10, val<short> var_11, val<unsigned char> var_13, val<short> var_14, val<bool> var_16, val<int> zero, val<unsigned int*> var_17, val<long long int*> var_18, val<short*> var_19, val<unsigned long long int*> var_20) {
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<signed char>)-115)) : (((/* implicit */val<int>) var_1))))) ? (((val<unsigned int>) var_16)) : (var_5)))) ? (((/* implicit */val<int>) var_13)) : (var_3)));
    *var_18 = ((/* implicit */val<long long int>) var_10);
    *var_19 = ((/* implicit */val<short>) max((*var_19), (var_14)));
    *var_20 = (+(max((min((((/* implicit */val<unsigned long long int>) var_4)), (var_0))), (((/* implicit */val<unsigned long long int>) var_11)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14830040612136688174ULL;
short var_1 = (short)5735;
int var_3 = 926584958;
unsigned short var_4 = (unsigned short)35012;
unsigned int var_5 = 1224385057U;
unsigned short var_10 = (unsigned short)18906;
short var_11 = (short)25003;
unsigned char var_13 = (unsigned char)131;
short var_14 = (short)5096;
bool var_16 = (bool)0;
int zero = 0;
unsigned int var_17 = 3935378331U;
long long int var_18 = -2322173713154787532LL;
short var_19 = (short)3084;
unsigned long long int var_20 = 17091416846287054639ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 926584958U;
    value_mismatch |= var_18 != 18906LL;
    value_mismatch |= var_19 != (short)5096;
    value_mismatch |= var_20 != 35012ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_10, var_11, var_13, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
