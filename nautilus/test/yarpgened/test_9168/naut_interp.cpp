/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9168
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9168
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
void test(val<bool> var_0, val<unsigned int> var_1, val<bool> var_5, val<int> var_8, val<short> var_9, val<int> zero, val<bool*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<bool>) 8194811082015259010LL)) ? (var_1) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) | (var_1))))));
    *var_12 = ((/* implicit */val<long long int>) (~(((((((var_0) ? (var_8) : (((/* implicit */val<int>) (val<short>)-28457)))) + (2147483647))) << (((/* implicit */val<int>) min(((val<short>)28454), (((/* implicit */val<short>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned int var_1 = 619346909U;
bool var_5 = (bool)1;
int var_8 = -1421659566;
short var_9 = (short)27662;
int zero = 0;
bool var_11 = (bool)1;
long long int var_12 = -987815813424453301LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != -1451648163LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
