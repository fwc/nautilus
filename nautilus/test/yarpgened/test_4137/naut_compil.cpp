/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4137
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4137
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
void test(val<bool> var_2, val<int> var_4, val<int> var_7, val<bool> var_11, val<long long int> var_13, val<int> zero, val<signed char*> var_15, val<long long int*> var_16, val<int*> var_17, val<signed char*> var_18, val<long long int*> var_19) {
    *var_15 += ((val<signed char>) ((val<unsigned long long int>) var_2));
    *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) var_7))));
    *var_17 = ((/* implicit */val<int>) ((val<long long int>) ((min((var_4), (((/* implicit */val<int>) var_11)))) < (((/* implicit */val<int>) ((val<bool>) 2147483647))))));
    *var_18 = ((/* implicit */val<signed char>) ((val<int>) (((!(var_11))) ? (var_13) : (((/* implicit */val<long long int>) -2147483647)))));
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) min((1726503932), (-2147483622))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
int var_4 = -2006162961;
int var_7 = -824315430;
bool var_11 = (bool)0;
long long int var_13 = 5236182878751197010LL;
int zero = 0;
signed char var_15 = (signed char)-53;
long long int var_16 = -5566208820139983097LL;
int var_17 = 1257024995;
signed char var_18 = (signed char)-28;
long long int var_19 = 8284383618187502992LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-52;
    value_mismatch |= var_16 != -5566208820139983097LL;
    value_mismatch |= var_17 != 1;
    value_mismatch |= var_18 != (signed char)82;
    value_mismatch |= var_19 != -2147483622LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_11, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
