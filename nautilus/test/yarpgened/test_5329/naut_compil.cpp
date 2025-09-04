/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5329
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5329
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
void test(val<int> var_0, val<unsigned short> var_4, val<unsigned int> var_5, val<int> zero, val<unsigned int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 |= ((/* implicit */val<unsigned int>) min((((val<int>) var_5)), (((/* implicit */val<int>) var_4))));
    *var_17 ^= ((/* implicit */val<unsigned long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -214330956;
unsigned short var_4 = (unsigned short)57374;
unsigned int var_5 = 2251454109U;
int zero = 0;
unsigned int var_16 = 2612753732U;
unsigned long long int var_17 = 8001336056234177331ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 2679863261U;
    value_mismatch |= var_17 != 10445408017270006407ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
