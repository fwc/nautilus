/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6893
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6893
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
void test(val<long long int> var_1, val<unsigned short> var_6, val<unsigned int> var_9, val<short> var_16, val<int> zero, val<long long int*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) (~(((((/* implicit */val<bool>) var_1)) ? (var_9) : (((((/* implicit */val<bool>) var_6)) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16)))))))));
    *var_19 = ((/* implicit */val<unsigned char>) (~((~(var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -569339194840203418LL;
unsigned short var_6 = (unsigned short)16940;
unsigned int var_9 = 1627087746U;
short var_16 = (short)31260;
int zero = 0;
long long int var_18 = -5444001638239648159LL;
unsigned char var_19 = (unsigned char)155;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2667879549LL;
    value_mismatch |= var_19 != (unsigned char)102;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_9, var_16, zero, &var_18, &var_19);
  checksum();
}
