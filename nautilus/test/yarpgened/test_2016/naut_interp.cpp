/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2016
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2016
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<long long int> var_3, val<short> var_5, val<unsigned char> var_9, val<int> var_10, val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned char>) (~(min((min((((/* implicit */val<long long int>) var_0)), (var_3))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (var_10) : (((/* implicit */val<int>) var_5)))))))));
    *var_16 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<signed char>)-24)) : (2144201653))), ((+(((/* implicit */val<int>) var_9))))))), ((-((-(var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
signed char var_1 = (signed char)-69;
long long int var_3 = 2853269573904159762LL;
short var_5 = (short)5358;
unsigned char var_9 = (unsigned char)200;
int var_10 = -385926331;
int zero = 0;
unsigned char var_15 = (unsigned char)16;
unsigned char var_16 = (unsigned char)164;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)186;
    value_mismatch |= var_16 != (unsigned char)232;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_9, var_10, zero, &var_15, &var_16);
  checksum();
}
