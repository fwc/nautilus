/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 830
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=830
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
void test(val<long long int> var_5, val<unsigned char> var_6, val<long long int> var_9, val<int> zero, val<signed char*> var_15, val<unsigned short*> var_16, val<unsigned long long int*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) -159369201)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5)))))) : (((2971829582U) % (((((/* implicit */val<bool>) var_9)) ? (3953136202U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)74)))))))));
    *var_16 = ((/* implicit */val<unsigned short>) var_6);
    *var_17 = ((/* implicit */val<unsigned long long int>) 906377654);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8108041737697172340LL;
unsigned char var_6 = (unsigned char)157;
long long int var_9 = 3844927255907366921LL;
int zero = 0;
signed char var_15 = (signed char)108;
unsigned short var_16 = (unsigned short)15726;
unsigned long long int var_17 = 874177231400426522ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (unsigned short)157;
    value_mismatch |= var_17 != 906377654ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
}
