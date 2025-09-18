/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4421
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4421
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
void test(val<bool> var_3, val<bool> var_13, val<bool> var_15, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20) {
    *var_19 = max((min((max((var_15), (var_13))), ((val<bool>)1))), (((((((/* implicit */val<bool>) (val<signed char>)8)) && (((/* implicit */val<bool>) (val<signed char>)0)))) || (((/* implicit */val<bool>) (val<unsigned short>)16383)))));
    *var_20 = ((/* implicit */val<unsigned short>) min((*var_20), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<unsigned short>)511)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)0))) * (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-22))) * (0U))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
bool var_13 = (bool)0;
bool var_15 = (bool)1;
int zero = 0;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)25480;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_13, var_15, zero, &var_19, &var_20);
  checksum();
}
