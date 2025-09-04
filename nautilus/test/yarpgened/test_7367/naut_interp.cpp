/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7367
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7367
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
void test(val<long long int> var_9, val<long long int> var_10, val<signed char> var_13, val<unsigned short> var_15, val<int> zero, val<long long int*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_19 &= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_15)) * (((/* implicit */val<int>) var_13))));
    *var_20 *= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((val<unsigned char>) min((((/* implicit */val<unsigned long long int>) var_9)), (10639660756526431013ULL)))))));
    *var_21 = ((/* implicit */val<unsigned char>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 2408051503427413650LL;
long long int var_10 = -725212768322655013LL;
signed char var_13 = (signed char)78;
unsigned short var_15 = (unsigned short)20690;
int zero = 0;
long long int var_19 = -3415251100521990060LL;
unsigned char var_20 = (unsigned char)128;
unsigned char var_21 = (unsigned char)247;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1611860LL;
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != (unsigned char)219;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, var_13, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
