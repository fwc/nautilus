/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1859
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1859
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
void test(val<long long int> var_0, val<short> var_1, val<short> var_4, val<long long int> var_5, val<unsigned char> var_6, val<short> var_7, val<long long int> var_8, val<unsigned char> var_10, val<long long int> var_11, val<unsigned char> var_12, val<short> var_14, val<int> zero, val<unsigned char*> var_16, val<long long int*> var_17, val<long long int*> var_18, val<unsigned char*> var_19, val<long long int*> var_20) {
    *var_16 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_0), (var_11)))) ? (((/* implicit */val<int>) min((((/* implicit */val<short>) var_6)), (var_14)))) : (((/* implicit */val<int>) var_10))))) ? ((-(((/* implicit */val<int>) min((var_1), (var_14)))))) : (((/* implicit */val<int>) var_12))));
    *var_17 = min((((/* implicit */val<long long int>) var_10)), (var_5));
    *var_18 -= ((/* implicit */val<long long int>) var_14);
    *var_19 = ((/* implicit */val<unsigned char>) var_8);
    *var_20 = ((/* implicit */val<long long int>) max((*var_20), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((-8240173267325469177LL) / (-5379075085394134547LL))))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7135044725823418170LL;
short var_1 = (short)-28077;
short var_4 = (short)10707;
long long int var_5 = -7746673463843959968LL;
unsigned char var_6 = (unsigned char)3;
short var_7 = (short)29454;
long long int var_8 = 2491560116053562435LL;
unsigned char var_10 = (unsigned char)241;
long long int var_11 = 5090346301958308952LL;
unsigned char var_12 = (unsigned char)203;
short var_14 = (short)31250;
int zero = 0;
unsigned char var_16 = (unsigned char)188;
long long int var_17 = 9034874150977287173LL;
long long int var_18 = -1916557935759597766LL;
unsigned char var_19 = (unsigned char)80;
long long int var_20 = -1425586837750301368LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)15;
    value_mismatch |= var_17 != -7746673463843959968LL;
    value_mismatch |= var_18 != -1916557935759629016LL;
    value_mismatch |= var_19 != (unsigned char)67;
    value_mismatch |= var_20 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
