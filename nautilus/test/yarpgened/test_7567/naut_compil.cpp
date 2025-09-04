/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7567
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7567
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
void test(val<signed char> var_8, val<long long int> var_11, val<unsigned char> var_15, val<bool> var_17, val<int> zero, val<unsigned char*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) max((*var_19), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 15166559658877607951ULL)) ? (((/* implicit */val<unsigned long long int>) -1822814784)) : (3280184414831943685ULL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) : (max((var_11), (((/* implicit */val<long long int>) var_15)))))))));
    *var_20 &= ((/* implicit */val<unsigned short>) (-((((!(((/* implicit */val<bool>) 3280184414831943668ULL)))) ? (((/* implicit */val<int>) var_17)) : (max((1822814764), (((/* implicit */val<int>) (val<signed char>)-123))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-44;
long long int var_11 = -3898586012487475204LL;
unsigned char var_15 = (unsigned char)74;
bool var_17 = (bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)232;
unsigned short var_20 = (unsigned short)10683;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)232;
    value_mismatch |= var_20 != (unsigned short)2448;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, var_15, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
