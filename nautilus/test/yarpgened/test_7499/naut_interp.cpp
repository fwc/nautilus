/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7499
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7499
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
void test(val<unsigned short> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    *var_20 &= var_19;
    *var_21 = ((/* implicit */val<unsigned short>) min(((val<signed char>)73), ((val<signed char>)35)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_19 = (unsigned short)29472;
int zero = 0;
unsigned short var_20 = (unsigned short)16426;
unsigned short var_21 = (unsigned short)13026;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)16416;
    value_mismatch |= var_21 != (unsigned short)35;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_19, zero, &var_20, &var_21);
  checksum();
}
