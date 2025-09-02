/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2639
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2639
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_3, val<unsigned char> var_4, val<int> zero, val<unsigned char*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) var_3);
    *var_13 = ((/* implicit */val<unsigned short>) min((((val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_4)) : (2147483647)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)49890)) / ((-2147483647 - 1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8820844301924424209ULL;
unsigned int var_3 = 2203891679U;
unsigned char var_4 = (unsigned char)50;
int zero = 0;
unsigned char var_12 = (unsigned char)79;
unsigned short var_13 = (unsigned short)2134;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)223;
    value_mismatch |= var_13 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
