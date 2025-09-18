/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8536
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8536
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
void test(val<unsigned short> var_6, val<unsigned long long int> var_9, val<unsigned long long int> var_12, val<unsigned int> var_16, val<unsigned int> var_17, val<unsigned char> var_18, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) var_17);
    *var_20 = ((/* implicit */val<unsigned char>) var_12);
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18))) : (max((((/* implicit */val<long long int>) (val<short>)26162)), (0LL)))))) ? (((/* implicit */val<long long int>) (~(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) / (var_16)))))) : (max((0LL), (4LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)58072;
unsigned long long int var_9 = 10540174427737680038ULL;
unsigned long long int var_12 = 12125822490724853685ULL;
unsigned int var_16 = 759777619U;
unsigned int var_17 = 1038803239U;
unsigned char var_18 = (unsigned char)229;
int zero = 0;
unsigned char var_19 = (unsigned char)204;
unsigned char var_20 = (unsigned char)172;
unsigned short var_21 = (unsigned short)34041;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)39;
    value_mismatch |= var_20 != (unsigned char)181;
    value_mismatch |= var_21 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_12, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
