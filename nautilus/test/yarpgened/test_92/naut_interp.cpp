/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 92
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=92
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
void test(val<int> var_5, val<long long int> var_7, val<short> var_8, val<short> var_10, val<int> zero, val<bool*> var_11, val<unsigned short*> var_12) {
    *var_11 = ((/* implicit */val<bool>) ((max((((/* implicit */val<int>) var_8)), (((val<int>) var_7)))) + (min((((((/* implicit */val<bool>) var_5)) ? (1484622352) : (-1156037278))), (var_5)))));
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1601986162;
long long int var_7 = -3364844874858346514LL;
short var_8 = (short)-6537;
short var_10 = (short)15855;
int zero = 0;
bool var_11 = (bool)0;
unsigned short var_12 = (unsigned short)48528;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned short)15855;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_8, var_10, zero, &var_11, &var_12);
  checksum();
}
