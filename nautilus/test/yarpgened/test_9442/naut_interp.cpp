/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9442
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9442
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
void test(val<unsigned short> var_1, val<unsigned short> var_6, val<unsigned long long int> var_7, val<long long int> var_9, val<unsigned int> var_10, val<int> zero, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<signed char*> var_15, val<bool*> var_16) {
    *var_13 = ((/* implicit */val<unsigned long long int>) 1438406406U);
    if (((/* implicit */val<bool>) var_9))
    {
        *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) var_1))));
        *var_15 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (((var_7) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))));
    }

    *var_16 = ((((/* implicit */val<bool>) var_1)) && (((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)19)) % (((/* implicit */val<int>) var_1))))) < ((+(var_10))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44527;
unsigned short var_6 = (unsigned short)30965;
unsigned long long int var_7 = 17201174187131160564ULL;
long long int var_9 = 1543557539553487046LL;
unsigned int var_10 = 3545445092U;
int zero = 0;
unsigned long long int var_13 = 497988133460276630ULL;
unsigned long long int var_14 = 4080297523410528347ULL;
signed char var_15 = (signed char)120;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1438406406ULL;
    value_mismatch |= var_14 != 4080297523410528347ULL;
    value_mismatch |= var_15 != (signed char)1;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_7, var_9, var_10, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
