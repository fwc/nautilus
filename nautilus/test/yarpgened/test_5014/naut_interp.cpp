/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5014
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5014
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
void test(val<long long int> var_1, val<unsigned int> var_6, val<unsigned int> var_7, val<unsigned int> var_9, val<short> var_10, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12, val<bool*> var_13) {
    *var_11 = var_1;
    *var_12 = ((/* implicit */val<unsigned short>) var_6);
    *var_13 = ((/* implicit */val<bool>) ((max(((!(((/* implicit */val<bool>) var_10)))), (((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) && (((/* implicit */val<bool>) var_9)))))) ? (((((/* implicit */val<long long int>) min((var_9), (var_7)))) | (max((9223372036854775801LL), (((/* implicit */val<long long int>) (val<short>)-1)))))) : ((+((-9223372036854775807LL - 1LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6938934430482933582LL;
unsigned int var_6 = 706923112U;
unsigned int var_7 = 1328527978U;
unsigned int var_9 = 1318561537U;
short var_10 = (short)5888;
int zero = 0;
long long int var_11 = -3625114929060988523LL;
unsigned short var_12 = (unsigned short)48497;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -6938934430482933582LL;
    value_mismatch |= var_12 != (unsigned short)51816;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
