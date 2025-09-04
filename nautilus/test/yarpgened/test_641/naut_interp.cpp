/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 641
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=641
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
void test(val<long long int> var_5, val<unsigned long long int> var_16, val<int> zero, val<long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) (val<bool>)1))))));
    *var_20 = min((3271682377268267769ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (((val<bool>)1) ? (0ULL) : (17023745216165196982ULL)))) || (((/* implicit */val<bool>) max((var_16), (((/* implicit */val<unsigned long long int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3327237245120431015LL;
unsigned long long int var_16 = 15941628338531623019ULL;
int zero = 0;
long long int var_19 = 4846093273813552107LL;
unsigned long long int var_20 = 5305483372194893964ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
