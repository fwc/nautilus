/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2291
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2291
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
void test(val<unsigned short> var_0, val<unsigned int> var_4, val<unsigned short> var_6, val<unsigned long long int> var_11, val<int> var_13, val<int> zero, val<signed char*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) (+(1928621206)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)62))) : (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)41401))) : (-5408804775878535134LL))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((var_0), (var_6)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_6)) + (var_13)))) : (((((/* implicit */val<bool>) (val<unsigned char>)3)) ? (var_4) : (((/* implicit */val<unsigned int>) 1928621216)))))))));
    *var_16 = ((/* implicit */val<int>) min((*var_16), (((/* implicit */val<int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19470;
unsigned int var_4 = 1502239124U;
unsigned short var_6 = (unsigned short)23455;
unsigned long long int var_11 = 9102350268267463581ULL;
int var_13 = -314887107;
int zero = 0;
signed char var_15 = (signed char)117;
int var_16 = 355135523;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-36;
    value_mismatch |= var_16 != -1186757731;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_11, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
