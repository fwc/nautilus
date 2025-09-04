/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9646
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9646
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_3, val<unsigned int> var_5, val<unsigned char> var_8, val<signed char> var_9, val<int> zero, val<int*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((var_5) & (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_0)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_8))))) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)2904)))))));
    *var_11 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned long long int var_3 = 17475084663963002657ULL;
unsigned int var_5 = 4159734026U;
unsigned char var_8 = (unsigned char)71;
signed char var_9 = (signed char)-117;
int zero = 0;
int var_10 = 73845006;
long long int var_11 = 5916210121172487404LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -117;
    value_mismatch |= var_11 != 4159734026LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
