/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9291
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9291
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
void test(val<signed char> var_0, val<long long int> var_1, val<unsigned short> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<long long int> var_7, val<long long int> var_8, val<bool> var_9, val<short> var_10, val<unsigned long long int> var_12, val<bool> var_13, val<unsigned int> var_14, val<unsigned int> var_15, val<short> var_16, val<signed char> var_17, val<int> zero, val<short*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (var_1)))) ? (((((/* implicit */val<bool>) var_3)) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))) : (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (var_1)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (((((/* implicit */val<bool>) var_17)) ? (((((/* implicit */val<bool>) var_15)) ? (var_15) : (var_14))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_16)) > (((/* implicit */val<int>) var_10))))))))));
    *var_19 = ((/* implicit */val<unsigned int>) min((*var_19), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_17))))) : (((((/* implicit */val<bool>) var_10)) ? (var_6) : (((/* implicit */val<unsigned long long int>) var_15))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_10))))) ? (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) var_8)) : (var_6))) : (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) var_15)) : (var_3))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) var_10))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) var_12)))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
long long int var_1 = 1682287955962851935LL;
unsigned short var_2 = (unsigned short)24523;
unsigned long long int var_3 = 1167658676413560952ULL;
unsigned int var_4 = 3829119504U;
unsigned long long int var_5 = 13129226801166721349ULL;
unsigned long long int var_6 = 4934670645434500643ULL;
long long int var_7 = 8837625788739531779LL;
long long int var_8 = -2511155479208149630LL;
bool var_9 = (bool)1;
short var_10 = (short)31805;
unsigned long long int var_12 = 4480919442751215141ULL;
bool var_13 = (bool)0;
unsigned int var_14 = 3915530779U;
unsigned int var_15 = 3544917468U;
short var_16 = (short)16560;
signed char var_17 = (signed char)39;
int zero = 0;
short var_18 = (short)-21827;
unsigned int var_19 = 1993077743U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)1;
    value_mismatch |= var_19 != 1980087682U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_12, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19);
  checksum();
}
