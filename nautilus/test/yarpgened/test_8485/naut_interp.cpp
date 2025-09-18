/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8485
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8485
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
void test(val<unsigned long long int> var_6, val<unsigned int> var_10, val<unsigned char> var_14, val<int> zero, val<short*> var_18, val<unsigned char*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<short>) var_14);
    *var_19 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) min((min((((/* implicit */val<unsigned long long int>) (val<short>)-11810)), (var_6))), (((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_10))))))));
    *var_20 = ((/* implicit */val<short>) (+(var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7042731612798142117ULL;
unsigned int var_10 = 2844711123U;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
short var_18 = (short)-19609;
unsigned char var_19 = (unsigned char)219;
short var_20 = (short)3990;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)42;
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (short)18085;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
}
