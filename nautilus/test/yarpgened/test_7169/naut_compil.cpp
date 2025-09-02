/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7169
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7169
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
void test(val<unsigned int> var_1, val<bool> var_3, val<unsigned short> var_11, val<bool> var_18, val<int> zero, val<unsigned char*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) ((((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) & (var_1))) | (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_18)) ^ (((/* implicit */val<int>) (val<unsigned char>)44))))))) / (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) 5810058024815974336ULL)) ? (((/* implicit */val<int>) (val<short>)10359)) : (((/* implicit */val<int>) (val<unsigned short>)65531)))) + (((/* implicit */val<int>) (val<short>)10345)))))));
    *var_21 = ((/* implicit */val<signed char>) min((*var_21), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) 17770885015516627419ULL)) ? (17770885015516627390ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)9404))))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (val<bool>)1)), (-2309376722768228420LL))))))) && (((/* implicit */val<bool>) var_11)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1034834970U;
bool var_3 = (bool)1;
unsigned short var_11 = (unsigned short)39149;
bool var_18 = (bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
signed char var_21 = (signed char)13;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_11, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
