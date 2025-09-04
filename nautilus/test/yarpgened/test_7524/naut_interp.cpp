/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7524
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7524
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
void test(val<long long int> var_0, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<unsigned char*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) var_10);
    *var_14 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_0)) ? (var_9) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 2135924021864429402LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2233706671789262851LL;
long long int var_9 = 1047759855025461119LL;
long long int var_10 = 2029646358008286006LL;
int zero = 0;
unsigned char var_13 = (unsigned char)97;
unsigned char var_14 = (unsigned char)182;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)54;
    value_mismatch |= var_14 != (unsigned char)55;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
