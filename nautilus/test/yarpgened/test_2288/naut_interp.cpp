/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2288
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2288
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<short> var_2, val<signed char> var_7, val<short> var_8, val<int> zero, val<bool*> var_11, val<long long int*> var_12) {
    *var_11 &= (val<bool>)1;
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) max((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)23945))))))) ? (((((/* implicit */val<bool>) var_2)) ? ((((val<bool>)1) ? (((/* implicit */val<int>) (val<unsigned short>)53370)) : (((/* implicit */val<int>) (val<unsigned char>)12)))) : (((/* implicit */val<int>) (val<unsigned short>)53370)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (16586199342240321099ULL)))) ? (((/* implicit */val<int>) var_7)) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned short var_1 = (unsigned short)54692;
short var_2 = (short)-31652;
signed char var_7 = (signed char)-99;
short var_8 = (short)-21531;
int zero = 0;
bool var_11 = (bool)0;
long long int var_12 = -4128428947807649854LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 53370LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
