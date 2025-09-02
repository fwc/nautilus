/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3938
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3938
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
void test(val<signed char> var_0, val<long long int> var_2, val<bool> var_5, val<int> var_11, val<int> zero, val<unsigned char*> var_20, val<short*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((-2029114582), (((/* implicit */val<int>) (!(var_5))))))) ? (((/* implicit */val<int>) (val<unsigned char>)75)) : (((/* implicit */val<int>) var_0))));
    *var_21 *= ((/* implicit */val<short>) var_2);
    *var_22 = ((/* implicit */val<unsigned char>) (-(min((var_11), ((-(-2029114599)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
long long int var_2 = 1641807420353669586LL;
bool var_5 = (bool)0;
int var_11 = -884021165;
int zero = 0;
unsigned char var_20 = (unsigned char)234;
short var_21 = (short)13296;
unsigned char var_22 = (unsigned char)143;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)75;
    value_mismatch |= var_21 != (short)2784;
    value_mismatch |= var_22 != (unsigned char)173;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_11, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
