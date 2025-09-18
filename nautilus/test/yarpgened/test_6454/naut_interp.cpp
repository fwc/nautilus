/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6454
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6454
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
void test(val<long long int> var_5, val<unsigned long long int> var_12, val<short> var_15, val<int> zero, val<unsigned int*> var_19, val<unsigned char*> var_20) {
    *var_19 ^= ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) 4286889626U)))))));
    *var_20 ^= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((min((17425024824538216399ULL), (((/* implicit */val<unsigned long long int>) var_5)))) >> ((((+(-225051194))) + (225051227)))))) ? (((((/* implicit */val<bool>) ((var_12) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15)))))) ? ((-(437178762))) : (1692556903))) : (-419479298)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4525336338884148231LL;
unsigned long long int var_12 = 11353339296683565363ULL;
short var_15 = (short)19067;
int zero = 0;
unsigned int var_19 = 3031146230U;
unsigned char var_20 = (unsigned char)143;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3031146230U;
    value_mismatch |= var_20 != (unsigned char)249;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, var_15, zero, &var_19, &var_20);
  checksum();
}
