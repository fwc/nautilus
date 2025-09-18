/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5803
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5803
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
void test(val<short> var_8, val<unsigned short> var_9, val<unsigned int> var_11, val<unsigned long long int> var_14, val<unsigned short> var_16, val<long long int> var_18, val<int> zero, val<unsigned char*> var_19, val<unsigned short*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) var_8))));
    *var_20 &= ((/* implicit */val<unsigned short>) min((((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_9))))) ^ (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) | (var_14))))), (((/* implicit */val<unsigned long long int>) var_11))));
    *var_21 = ((/* implicit */val<signed char>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_18)) || (((/* implicit */val<bool>) (val<unsigned char>)1))))) : (((/* implicit */val<int>) min((var_16), (((/* implicit */val<unsigned short>) (val<bool>)1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)2230;
unsigned short var_9 = (unsigned short)34412;
unsigned int var_11 = 3686324482U;
unsigned long long int var_14 = 17451680551778342677ULL;
unsigned short var_16 = (unsigned short)32836;
long long int var_18 = -1307685987525490083LL;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
unsigned short var_20 = (unsigned short)50668;
signed char var_21 = (signed char)-60;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)74;
    value_mismatch |= var_20 != (unsigned short)49408;
    value_mismatch |= var_21 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_11, var_14, var_16, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
