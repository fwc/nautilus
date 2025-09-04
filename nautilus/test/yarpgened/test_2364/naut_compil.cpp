/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2364
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2364
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
void test(val<int> var_0, val<unsigned short> var_5, val<int> zero, val<signed char*> var_15, val<unsigned int*> var_16, val<signed char*> var_17, val<unsigned short*> var_18) {
    *var_15 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) (val<bool>)1))));
    *var_16 = ((/* implicit */val<unsigned int>) var_5);
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-19032))) + (4458267760150844687LL)));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (2762683769803284591LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)0))))))) != ((+(-771803808)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1305312982;
unsigned short var_5 = (unsigned short)22616;
int zero = 0;
signed char var_15 = (signed char)-21;
unsigned int var_16 = 1643357172U;
signed char var_17 = (signed char)75;
unsigned short var_18 = (unsigned short)40280;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-2;
    value_mismatch |= var_16 != 22616U;
    value_mismatch |= var_17 != (signed char)-73;
    value_mismatch |= var_18 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
