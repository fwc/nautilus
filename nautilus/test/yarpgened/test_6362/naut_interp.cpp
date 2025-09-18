/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6362
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6362
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_1, val<signed char> var_2, val<short> var_4, val<int> var_6, val<int> zero, val<bool*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<bool>) (~(((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)5626))) - (6751938231574081716LL)))));
    *var_11 = ((/* implicit */val<signed char>) max((var_0), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_4)), (var_6)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7971435465782014479ULL;
unsigned short var_1 = (unsigned short)3878;
signed char var_2 = (signed char)-102;
short var_4 = (short)23058;
int var_6 = 2045889035;
int zero = 0;
bool var_10 = (bool)0;
signed char var_11 = (signed char)79;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (signed char)-102;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, zero, &var_10, &var_11);
  checksum();
}
