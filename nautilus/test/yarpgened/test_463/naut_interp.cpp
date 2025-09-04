/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 463
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=463
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
void test(val<int> var_0, val<signed char> var_2, val<int> var_3, val<int> var_6, val<long long int> var_8, val<int> var_9, val<long long int> var_11, val<int> var_12, val<int> zero, val<unsigned char*> var_13, val<unsigned long long int*> var_14, val<int*> var_15, val<int*> var_16) {
    *var_13 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) var_6)), (((((/* implicit */val<bool>) (val<short>)15360)) ? (55879734120904616LL) : (((/* implicit */val<long long int>) 1758684395))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) min(((-(var_6))), ((+(max((var_3), (var_12)))))));
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(var_3)))))))) : (((((((/* implicit */val<long long int>) var_9)) != (var_8))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : ((+(var_11)))))));
    *var_16 ^= var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1511022541;
signed char var_2 = (signed char)-53;
int var_3 = -401123591;
int var_6 = 1317064131;
long long int var_8 = 4804097825754270261LL;
int var_9 = 216316158;
long long int var_11 = -1295665288758499252LL;
int var_12 = -2140210662;
int zero = 0;
unsigned char var_13 = (unsigned char)245;
unsigned long long int var_14 = 3858084155727499514ULL;
int var_15 = 1190352469;
int var_16 = 893245989;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)195;
    value_mismatch |= var_14 != 18446744072392487485ULL;
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != -1865254378;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_8, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
