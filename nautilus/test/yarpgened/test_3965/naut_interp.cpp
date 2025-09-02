/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3965
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3965
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
void test(val<long long int> var_0, val<int> var_1, val<bool> var_7, val<long long int> var_10, val<int> var_12, val<int> zero, val<unsigned short*> var_17, val<bool*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) var_7);
    *var_18 += ((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (var_1) : (1073741823)))) ? (var_0) : (var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3917955141504091286LL;
int var_1 = -1249492717;
bool var_7 = (bool)0;
long long int var_10 = 7164691785408986487LL;
int var_12 = -1257512465;
int zero = 0;
unsigned short var_17 = (unsigned short)27455;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_10, var_12, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
