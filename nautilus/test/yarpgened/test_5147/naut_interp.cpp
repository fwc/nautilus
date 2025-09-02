/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5147
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5147
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
void test(val<short> var_0, val<unsigned int> var_1, val<unsigned char> var_2, val<unsigned char> var_5, val<int> zero, val<unsigned char*> var_10, val<long long int*> var_11) {
    *var_10 *= ((/* implicit */val<unsigned char>) var_0);
    *var_11 = ((/* implicit */val<long long int>) min((((/* implicit */val<signed char>) ((min((((/* implicit */val<unsigned int>) var_2)), (var_1))) > (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_5)))))))), (((val<signed char>) 1519349371U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12510;
unsigned int var_1 = 951377310U;
unsigned char var_2 = (unsigned char)33;
unsigned char var_5 = (unsigned char)75;
int zero = 0;
unsigned char var_10 = (unsigned char)35;
long long int var_11 = -5646738211039701912LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)90;
    value_mismatch |= var_11 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
