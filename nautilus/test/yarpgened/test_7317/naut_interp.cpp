/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7317
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7317
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
void test(val<unsigned long long int> var_5, val<unsigned int> var_13, val<int> zero, val<unsigned char*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) ((val<unsigned short>) ((val<bool>) ((val<short>) 15884650567019631089ULL))));
    *var_17 = max((var_5), (((/* implicit */val<unsigned long long int>) max((var_13), (((/* implicit */val<unsigned int>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<short>)32757)) : (((/* implicit */val<int>) (val<signed char>)119)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15667165867633403058ULL;
unsigned int var_13 = 3272684847U;
int zero = 0;
unsigned char var_16 = (unsigned char)238;
unsigned long long int var_17 = 10616732792151052579ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)1;
    value_mismatch |= var_17 != 15667165867633403058ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
