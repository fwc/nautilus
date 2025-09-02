/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1312
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1312
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
void test(val<long long int> var_2, val<unsigned long long int> var_5, val<short> var_6, val<unsigned long long int> var_7, val<int> var_9, val<long long int> var_10, val<signed char> var_12, val<int> zero, val<int*> var_16, val<unsigned short*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)-18246)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)18239)) ? (((/* implicit */val<int>) (val<short>)18214)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((-6984713562276548786LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))))))) : (var_7))))));
    *var_17 = ((/* implicit */val<unsigned short>) min((*var_17), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)120))) : (var_2)))) ? (((/* implicit */val<int>) var_12)) : ((+(((/* implicit */val<int>) (val<bool>)1))))))) ? (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) & (var_10))) & (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)47074)))))))) : (var_5))))));
    *var_18 += var_5;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4057590102373244605LL;
unsigned long long int var_5 = 5520894343450573167ULL;
short var_6 = (short)22276;
unsigned long long int var_7 = 11000865473465744878ULL;
int var_9 = -1339838131;
long long int var_10 = 1617591003614912900LL;
signed char var_12 = (signed char)92;
int zero = 0;
int var_16 = 1301697235;
unsigned short var_17 = (unsigned short)29637;
unsigned long long int var_18 = 6166130947434276462ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (unsigned short)4;
    value_mismatch |= var_18 != 11687025290884849629ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_9, var_10, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
