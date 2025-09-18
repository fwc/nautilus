/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5016
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5016
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
void test(val<unsigned char> var_1, val<unsigned char> var_4, val<unsigned char> var_9, val<unsigned char> var_11, val<unsigned char> var_13, val<unsigned char> var_15, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19) {
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)246)) != (((((/* implicit */val<bool>) (val<unsigned char>)241)) ? (((/* implicit */val<int>) (val<unsigned char>)15)) : (((/* implicit */val<int>) (val<unsigned char>)218))))))) != (((/* implicit */val<int>) var_1))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) min((var_9), (var_13)))) <= (((/* implicit */val<int>) var_15))));
    *var_18 = var_4;
    *var_19 = var_11;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
unsigned char var_4 = (unsigned char)69;
unsigned char var_9 = (unsigned char)156;
unsigned char var_11 = (unsigned char)211;
unsigned char var_13 = (unsigned char)196;
unsigned char var_15 = (unsigned char)202;
int zero = 0;
unsigned char var_16 = (unsigned char)62;
unsigned char var_17 = (unsigned char)190;
unsigned char var_18 = (unsigned char)124;
unsigned char var_19 = (unsigned char)93;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)1;
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != (unsigned char)69;
    value_mismatch |= var_19 != (unsigned char)211;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_9, var_11, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
