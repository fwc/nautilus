/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1493
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1493
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
void test(val<signed char> var_1, val<unsigned long long int> var_2, val<short> var_9, val<unsigned int> var_12, val<unsigned char> var_17, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_18 *= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_9)), (((((/* implicit */val<int>) var_1)) << (((((/* implicit */val<int>) var_17)) - (234)))))))) ? (min((((val<long long int>) var_12)), (((val<long long int>) var_2)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))));
    *var_19 ^= ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) (val<signed char>)-49))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)51;
unsigned long long int var_2 = 5582707155129654491ULL;
short var_9 = (short)5023;
unsigned int var_12 = 3699753805U;
unsigned char var_17 = (unsigned char)248;
int zero = 0;
unsigned long long int var_18 = 9545837847446029637ULL;
signed char var_19 = (signed char)109;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 5189659680466412737ULL;
    value_mismatch |= var_19 != (signed char)92;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_9, var_12, var_17, zero, &var_18, &var_19);
  checksum();
}
