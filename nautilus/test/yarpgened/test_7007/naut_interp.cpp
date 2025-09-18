/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7007
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7007
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
void test(val<int> var_0, val<unsigned short> var_1, val<unsigned short> var_3, val<short> var_8, val<unsigned short> var_9, val<unsigned long long int> var_10, val<long long int> var_11, val<int> zero, val<int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<int>) var_8);
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (min((((/* implicit */val<unsigned long long int>) var_1)), (var_10))) : (((/* implicit */val<unsigned long long int>) var_0))))) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1050773994;
unsigned short var_1 = (unsigned short)28428;
unsigned short var_3 = (unsigned short)62501;
short var_8 = (short)31725;
unsigned short var_9 = (unsigned short)41067;
unsigned long long int var_10 = 12968200969465179818ULL;
long long int var_11 = -5877125534236037855LL;
int zero = 0;
int var_14 = -1674256513;
unsigned long long int var_15 = 7305193201450305929ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 31725;
    value_mismatch |= var_15 != 12569618539473513761ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_8, var_9, var_10, var_11, zero, &var_14, &var_15);
  checksum();
}
