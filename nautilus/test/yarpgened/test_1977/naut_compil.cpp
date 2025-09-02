/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1977
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1977
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
void test(val<unsigned short> var_0, val<unsigned int> var_6, val<unsigned long long int> var_8, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17, val<bool*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<bool>) var_6)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)253)))))));
    *var_17 = ((/* implicit */val<unsigned int>) min((-2884628229321839611LL), (((/* implicit */val<long long int>) 903090895))));
    *var_18 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 903090889)) ? (-903090895) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))))) || (((/* implicit */val<bool>) (val<unsigned char>)253)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59616;
unsigned int var_6 = 2044770338U;
unsigned long long int var_8 = 15340042150908291301ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)45830;
unsigned int var_17 = 4220890574U;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)47138;
    value_mismatch |= var_17 != 2855611397U;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_8, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
