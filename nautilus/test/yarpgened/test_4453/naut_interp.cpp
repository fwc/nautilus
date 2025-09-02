/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4453
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4453
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
void test(val<unsigned long long int> var_3, val<unsigned long long int> var_6, val<short> var_8, val<long long int> var_10, val<unsigned long long int> var_13, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<short*> var_16, val<unsigned short*> var_17) {
    *var_14 = ((/* implicit */val<signed char>) var_13);
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (val<unsigned short>)10669)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)211)) - (((/* implicit */val<int>) (val<unsigned char>)45))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_8))))) : (max((((/* implicit */val<unsigned long long int>) var_10)), (var_6))))) : (var_3)));
    *var_16 = (val<short>)-15001;
    *var_17 = ((/* implicit */val<unsigned short>) (+(var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3698612234092365797ULL;
unsigned long long int var_6 = 17107080193778348471ULL;
short var_8 = (short)17719;
long long int var_10 = -4637255696402465615LL;
unsigned long long int var_13 = 14277363126868089540ULL;
int zero = 0;
signed char var_14 = (signed char)76;
signed char var_15 = (signed char)-79;
short var_16 = (short)24508;
unsigned short var_17 = (unsigned short)12050;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-60;
    value_mismatch |= var_15 != (signed char)-56;
    value_mismatch |= var_16 != (short)-15001;
    value_mismatch |= var_17 != (unsigned short)15537;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, var_10, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
