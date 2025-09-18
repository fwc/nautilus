/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 342
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=342
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
void test(val<bool> var_3, val<unsigned long long int> var_4, val<long long int> var_6, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<long long int*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((var_10) | (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<short>)30394)) - (((/* implicit */val<int>) var_3)))))))) ? (((var_4) | (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) 262143LL)) : (9524703097375807002ULL))))) : (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) (val<unsigned short>)1023)) || (((/* implicit */val<bool>) var_9)))) ? (((/* implicit */val<long long int>) 1263111526U)) : (var_9))))));
    *var_16 = ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
unsigned long long int var_4 = 15870195673000248060ULL;
long long int var_6 = -2989302139545841852LL;
long long int var_9 = -3159516311815248537LL;
long long int var_10 = -585903289759733604LL;
int zero = 0;
long long int var_15 = 840058865158443062LL;
unsigned char var_16 = (unsigned char)8;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -2576548400709238785LL;
    value_mismatch |= var_16 != (unsigned char)103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_9, var_10, zero, &var_15, &var_16);
  checksum();
}
