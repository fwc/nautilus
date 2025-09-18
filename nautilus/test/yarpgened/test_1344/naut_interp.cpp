/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1344
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1344
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
void test(val<unsigned short> var_4, val<bool> var_5, val<unsigned short> var_6, val<short> var_7, val<long long int> var_9, val<unsigned int> var_10, val<bool> var_12, val<int> zero, val<short*> var_13, val<int*> var_14, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_13 = ((/* implicit */val<short>) min(((((~(((/* implicit */val<int>) var_7)))) - (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) && (((/* implicit */val<bool>) var_4))))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) / (var_10)))) && (((/* implicit */val<bool>) var_9)))))));
    *var_14 = ((/* implicit */val<int>) var_12);
    *var_15 += ((/* implicit */val<unsigned short>) ((var_10) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))))));
    *var_16 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12890;
bool var_5 = (bool)1;
unsigned short var_6 = (unsigned short)10955;
short var_7 = (short)8053;
long long int var_9 = 6473267711211886195LL;
unsigned int var_10 = 733243748U;
bool var_12 = (bool)1;
int zero = 0;
short var_13 = (short)-31351;
int var_14 = 854657328;
unsigned short var_15 = (unsigned short)47715;
long long int var_16 = 5487172901527493769LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-8055;
    value_mismatch |= var_14 != 1;
    value_mismatch |= var_15 != (unsigned short)47715;
    value_mismatch |= var_16 != 10955LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, var_9, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
