/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8703
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8703
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
void test(val<unsigned char> var_2, val<signed char> var_13, val<int> zero, val<short*> var_15, val<unsigned int*> var_16, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) max(((val<short>)-29362), (((/* implicit */val<short>) (val<bool>)1)))))))) && (((/* implicit */val<bool>) (-(17486877588982836922ULL)))))))));
    *var_16 = ((/* implicit */val<unsigned int>) var_2);
    *var_17 += ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) | (3929498381194995119LL)));
    *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) ((max((min((((/* implicit */val<unsigned int>) (val<short>)29361)), (0U))), (((/* implicit */val<unsigned int>) ((val<unsigned char>) var_13))))) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)33;
signed char var_13 = (signed char)-65;
int zero = 0;
short var_15 = (short)31464;
unsigned int var_16 = 1174057362U;
unsigned char var_17 = (unsigned char)129;
long long int var_18 = 2497712474239288861LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)31464;
    value_mismatch |= var_16 != 33U;
    value_mismatch |= var_17 != (unsigned char)48;
    value_mismatch |= var_18 != 2497712474239288861LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
