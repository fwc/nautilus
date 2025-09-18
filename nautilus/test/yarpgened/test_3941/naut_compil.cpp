/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3941
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3941
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
void test(val<signed char> var_5, val<unsigned int> var_7, val<long long int> var_11, val<int> zero, val<signed char*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) (((-(var_11))) / (((/* implicit */val<long long int>) max(((-(var_7))), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned short>)20901))))))))));
    *var_16 = ((((/* implicit */val<bool>) (+(-753110332408082848LL)))) && (((/* implicit */val<bool>) (+(((((/* implicit */val<int>) var_5)) + (-37782738)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)19;
unsigned int var_7 = 265848680U;
long long int var_11 = 5741344915934020912LL;
int zero = 0;
signed char var_15 = (signed char)-12;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)81;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_11, zero, &var_15, &var_16);
  checksum();
}
