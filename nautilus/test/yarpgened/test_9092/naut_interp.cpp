/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9092
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9092
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
void test(val<unsigned short> var_1, val<unsigned char> var_5, val<unsigned int> var_10, val<unsigned int> var_13, val<int> var_16, val<int> zero, val<unsigned int*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned int>) min((((-1266644520) % (var_16))), ((-(((/* implicit */val<int>) var_1))))));
    *var_21 = ((/* implicit */val<unsigned short>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 733561102U)) ? (-6451202527875998278LL) : (6451202527875998287LL)))) ? (((9223372036854775807LL) / (((/* implicit */val<long long int>) 733561102U)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)72))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (var_13) : (((/* implicit */val<unsigned int>) -656853048))))) ? (((((/* implicit */val<int>) var_5)) - (((/* implicit */val<int>) (val<unsigned short>)12824)))) : (((/* implicit */val<int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39817;
unsigned char var_5 = (unsigned char)237;
unsigned int var_10 = 3781027589U;
unsigned int var_13 = 4032780107U;
int var_16 = 196384857;
int zero = 0;
unsigned int var_20 = 1388621150U;
unsigned short var_21 = (unsigned short)23396;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4206631918U;
    value_mismatch |= var_21 != (unsigned short)11000;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_10, var_13, var_16, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
