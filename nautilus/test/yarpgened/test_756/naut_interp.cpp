/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 756
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=756
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
void test(val<int> var_7, val<unsigned char> var_8, val<int> zero, val<long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<unsigned short>)0))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned short>)65535))) <= (((/* implicit */val<int>) ((val<bool>) 2147483647)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -570367297;
unsigned char var_8 = (unsigned char)253;
int zero = 0;
long long int var_17 = 614428511023910209LL;
unsigned long long int var_18 = 9558723228466458589ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 253LL;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, zero, &var_17, &var_18);
  checksum();
}
