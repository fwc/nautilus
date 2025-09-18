/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1646
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1646
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
void test(val<long long int> var_0, val<short> var_5, val<int> var_9, val<short> var_10, val<int> var_11, val<int> zero, val<long long int*> var_18, val<unsigned char*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((var_11), (var_9)))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_5))));
    *var_19 = ((/* implicit */val<unsigned char>) var_11);
    *var_20 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -689124518788319320LL;
short var_5 = (short)-26594;
int var_9 = 810921721;
short var_10 = (short)-29211;
int var_11 = -1082163614;
int zero = 0;
long long int var_18 = 2884033287857962644LL;
unsigned char var_19 = (unsigned char)82;
signed char var_20 = (signed char)-56;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -29211LL;
    value_mismatch |= var_19 != (unsigned char)98;
    value_mismatch |= var_20 != (signed char)-88;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, var_10, var_11, zero, &var_18, &var_19, &var_20);
  checksum();
}
