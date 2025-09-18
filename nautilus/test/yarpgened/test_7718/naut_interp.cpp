/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7718
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7718
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
void test(val<bool> var_0, val<unsigned int> var_5, val<unsigned int> var_6, val<short> var_7, val<short> var_9, val<int> zero, val<unsigned char*> var_10, val<int*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_9)) : ((~(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_0))))))));
    *var_11 = ((/* implicit */val<int>) var_7);
    *var_12 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) min(((+(((/* implicit */val<int>) var_0)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -2779361652729402761LL)))))))), ((-(var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_5 = 2714596412U;
unsigned int var_6 = 2771155667U;
short var_7 = (short)-29391;
short var_9 = (short)14954;
int zero = 0;
unsigned char var_10 = (unsigned char)43;
int var_11 = -134633216;
long long int var_12 = 5645248971372061128LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)106;
    value_mismatch |= var_11 != -29391;
    value_mismatch |= var_12 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
}
